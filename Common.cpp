#include "Common.h"

namespace CommonMethods
{
	cv::Mat getHistogramMatrix(cv::Mat img)
	{
		// draw histogram
		/// Separate the image in 3 places ( B, G and R )
		std::vector<cv::Mat> bgr_planes;
		cv::split(img, bgr_planes);

		/// Establish the number of bins
		int histSize = 256;

		/// Set the ranges ( for B,G,R) )
		float range[] = { 0, 255 };
		const float* histRange = { range };

		bool uniform = true;
		bool accumulate = false;

		cv::Mat b_hist, g_hist, r_hist;

		/// Compute the histograms:
		cv::calcHist(&bgr_planes[0], 1, 0, cv::Mat(), b_hist, 1, &histSize, &histRange, uniform, accumulate);
		cv::calcHist(&bgr_planes[1], 1, 0, cv::Mat(), g_hist, 1, &histSize, &histRange, uniform, accumulate);
		cv::calcHist(&bgr_planes[2], 1, 0, cv::Mat(), r_hist, 1, &histSize, &histRange, uniform, accumulate);

		// Draw the histograms for B, G and R
		int hist_w = 1024; int hist_h = 400;
		int bin_w = cvRound((double)hist_w / histSize);

		cv::Mat histImage(hist_h, hist_w, CV_8UC3, cv::Scalar(255, 255, 255));

		/// Normalize the result to [ 0, histImage.rows ]
		cv::normalize(b_hist, b_hist, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());
		cv::normalize(g_hist, g_hist, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());
		cv::normalize(r_hist, r_hist, 0, histImage.rows, cv::NORM_MINMAX, -1, cv::Mat());

		// Draw for each channel
		for (int i = 1; i < histSize; i++)
		{
			cv::line(histImage, cv::Point(bin_w * (i - 1), hist_h - cvRound(b_hist.at<float>(i - 1))),
				cv::Point(bin_w * (i), hist_h - cvRound(b_hist.at<float>(i))),
				cv::Scalar(255, 0, 0), 2, 8, 0);//blue
			cv::line(histImage, cv::Point(bin_w * (i - 1), hist_h - cvRound(g_hist.at<float>(i - 1))),
				cv::Point(bin_w * (i), hist_h - cvRound(g_hist.at<float>(i))),
				cv::Scalar(0, 255, 0), 2, 8, 0);//green
			cv::line(histImage, cv::Point(bin_w * (i - 1), hist_h - cvRound(r_hist.at<float>(i - 1))),
				cv::Point(bin_w * (i), hist_h - cvRound(r_hist.at<float>(i))),
				cv::Scalar(0, 0, 255), 2, 8, 0);//red
		}
		return histImage;
	}

	System::Drawing::Bitmap^ getBitmapFromMat(cv::Mat matImage, System::Drawing::Imaging::PixelFormat pixelFormat, size_t sizeMemcpy)
	{
		System::Drawing::Bitmap^ bitMap = gcnew System::Drawing::Bitmap(
			matImage.cols, matImage.rows, pixelFormat);

		System::Drawing::Imaging::BitmapData^ bmpData = bitMap->LockBits(
			System::Drawing::Rectangle(0, 0, bitMap->Width, bitMap->Height),
			System::Drawing::Imaging::ImageLockMode::WriteOnly, pixelFormat);

		unsigned char* src = nullptr;
		unsigned char* dst = nullptr;

		for (int y = 0; y < matImage.rows; y++)
		{
			src = matImage.ptr<unsigned char>(y);
			dst = (unsigned char*)bmpData->Scan0.ToPointer() + y * bmpData->Stride;
			memcpy(dst, src, sizeMemcpy);
		}

		bitMap->UnlockBits(bmpData);

		return bitMap;
	}

	System::Drawing::Bitmap^ getBitmapFromMat(cv::Mat matImage)
	{
		System::Drawing::Bitmap^ bitMap = gcnew System::Drawing::Bitmap(
			matImage.cols, matImage.rows, System::Drawing::Imaging::PixelFormat::Format24bppRgb);

		System::Drawing::Imaging::BitmapData^ bmpData = bitMap->LockBits(
			System::Drawing::Rectangle(0, 0, bitMap->Width, bitMap->Height),
			System::Drawing::Imaging::ImageLockMode::WriteOnly, System::Drawing::Imaging::PixelFormat::Format24bppRgb);
		unsigned char* src = nullptr;
		unsigned char* dst = nullptr;

		size_t sizeMemcpy = matImage.cols * matImage.channels();

		for (int y = 0; y < matImage.rows; y++)
		{
			src = matImage.ptr<unsigned char>(y);
			dst = (unsigned char*)bmpData->Scan0.ToPointer() + y * bmpData->Stride;
			memcpy(dst, src, sizeMemcpy);
		}

		bitMap->UnlockBits(bmpData);

		return bitMap;
	}

	void loadImageToPictureBox(cv::Mat mat, System::Windows::Forms::PictureBox^ pictureBox)
	{
		System::Drawing::Bitmap^ bitMap = getBitmapFromMat(mat, System::Drawing::Imaging::PixelFormat::Format24bppRgb, mat.cols * mat.channels());

		if (pictureBox->Image != nullptr)
		{
			delete pictureBox->Image;
		}

		pictureBox->Image = bitMap;
	}

	void loadCvMatToPictureBox(cv::Mat mat, System::Windows::Forms::PictureBox^ pictureBox)
	{
		System::Drawing::Bitmap^ bitMap = getBitmapFromMat(mat);
		if (pictureBox->Image != nullptr)
		{
			delete pictureBox->Image;
		}

		pictureBox->Image = bitMap;
	}

	void loadImagePathToListBox(System::Windows::Forms::OpenFileDialog^ openFileDialog, System::Windows::Forms::ListBox^ listBox)
	{
		// open file dialog
		//openFileDialog->DereferenceLinks = false;
		openFileDialog->Title = "Select your images";
		openFileDialog->Filter = "Image Files | *.bmp; *.jpg; *.png; *.tif; *.webp | All Files (*.*) |*.*||";
		openFileDialog->InitialDirectory = "D:\\Tan\\Sample_Data";
		openFileDialog->Multiselect = true;
		//openFileDialog->InitialDirectory = "C:\\";
		/*openFileDialog->RestoreDirectory = false;
		openFileDialog->SupportMultiDottedExtensions = true;
		openFileDialog->FilterIndex = 1;*/


		array<System::String^>^ arrFilePaths;


		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			arrFilePaths = openFileDialog->FileNames;
		}
		else
		{
			return;
		}

		// load file paths to list box
		for each (System::String^ filePath in arrFilePaths)
		{
			listBox->Items->Add(filePath);
		}
	}

	void showTooltipInListBoxItem(System::Windows::Forms::ListBox^ listBox, System::Windows::Forms::ToolTip^ toolTip, System::Windows::Forms::MouseEventArgs^ e)
	{
		int hoveredIndex = listBox->IndexFromPoint(e->Location);

		if (hoveredIndex >= 0 && hoveredIndex < listBox->Items->Count)
		{
			System::String^ itemText = listBox->Items[hoveredIndex]->ToString();
			toolTip->Show(itemText, listBox, e->Location.X, e->Location.Y + 20, 100);
		}
		else
		{
			toolTip->Hide(listBox);
		}
	}
	std::string convertSystemStringToStdString(System::String^ str)
	{
		return msclr::interop::marshal_as<std::string>(str);
	}
	System::String^ convertStdStringToSystemString(std::string str)
	{
		return gcnew System::String(str.c_str());
	}
	void loadImagePathToPictureBox(System::Windows::Forms::PictureBox^ pictureBox, System::String^ imagePath)
	{
		//pictureBox->Refresh();
		/*pictureBox->ImageLocation = imagePath;
		pictureBox->Load();*/

		try {
			if (pictureBox->Image != nullptr)
			{
				delete pictureBox->Image;
			}

			pictureBox->Image = System::Drawing::Image::FromFile(imagePath);
		}
		catch (System::Exception^ ex) {
			// Handle any potential errors during image loading (e.g., file not found, invalid format)
			System::Windows::Forms::MessageBox::Show("Error loading image: " + ex->Message, "Error", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
		}
	}
	cv::Mat readCVMatFromFilePath(System::String^ imagePath)
	{
		return cv::imread(convertSystemStringToStdString(imagePath));
	}

	cv::Mat getOuputMergeBGRChannels(const cv::Mat& bChannel, const cv::Mat& gChannel, const cv::Mat& rChannel) {
		std::vector<cv::Mat> processedChannels = { bChannel, gChannel, rChannel };
		cv::Mat outputImage;
		cv::merge(processedChannels, outputImage);

		// Convert to 8-bit for display
		outputImage.convertTo(outputImage, CV_8UC3, 255.0);

		return outputImage;
	}
}