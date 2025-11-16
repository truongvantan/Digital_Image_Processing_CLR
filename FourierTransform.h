#pragma once
#include "Common.h"

namespace DigitalImageProcessingCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FourierTransform
	/// </summary>
	public ref class FourierTransform : public System::Windows::Forms::Form
	{
	public:
		FourierTransform(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FourierTransform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnLoadImagePath;
	private: System::Windows::Forms::ListBox^ listBoxImagePath;
	private: System::Windows::Forms::PictureBox^ picBoxOriginalImage;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::PictureBox^ picBoxOriginalMagnitude;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::OpenFileDialog^ oFD;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::PictureBox^ picBoxOriginalPhase;

	private: System::Windows::Forms::Label^ label3;
	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->btnLoadImagePath = (gcnew System::Windows::Forms::Button());
			this->listBoxImagePath = (gcnew System::Windows::Forms::ListBox());
			this->picBoxOriginalImage = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->picBoxOriginalMagnitude = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->oFD = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->picBoxOriginalPhase = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalMagnitude))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalPhase))->BeginInit();
			this->SuspendLayout();
			// 
			// btnLoadImagePath
			// 
			this->btnLoadImagePath->Location = System::Drawing::Point(19, 16);
			this->btnLoadImagePath->Name = L"btnLoadImagePath";
			this->btnLoadImagePath->Size = System::Drawing::Size(127, 44);
			this->btnLoadImagePath->TabIndex = 0;
			this->btnLoadImagePath->Text = L"Load Image";
			this->btnLoadImagePath->UseVisualStyleBackColor = true;
			this->btnLoadImagePath->Click += gcnew System::EventHandler(this, &FourierTransform::btnLoadImagePath_Click);
			// 
			// listBoxImagePath
			// 
			this->listBoxImagePath->FormattingEnabled = true;
			this->listBoxImagePath->Location = System::Drawing::Point(19, 75);
			this->listBoxImagePath->Name = L"listBoxImagePath";
			this->listBoxImagePath->Size = System::Drawing::Size(286, 485);
			this->listBoxImagePath->TabIndex = 1;
			this->listBoxImagePath->SelectedIndexChanged += gcnew System::EventHandler(this, &FourierTransform::listBoxImagePath_SelectedIndexChanged);
			this->listBoxImagePath->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FourierTransform::listBoxImagePath_MouseMove);
			// 
			// picBoxOriginalImage
			// 
			this->picBoxOriginalImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalImage->Location = System::Drawing::Point(353, 75);
			this->picBoxOriginalImage->Name = L"picBoxOriginalImage";
			this->picBoxOriginalImage->Size = System::Drawing::Size(280, 293);
			this->picBoxOriginalImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalImage->TabIndex = 2;
			this->picBoxOriginalImage->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(349, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Original Image";
			// 
			// picBoxOriginalMagnitude
			// 
			this->picBoxOriginalMagnitude->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalMagnitude->Location = System::Drawing::Point(721, 75);
			this->picBoxOriginalMagnitude->Name = L"picBoxOriginalMagnitude";
			this->picBoxOriginalMagnitude->Size = System::Drawing::Size(280, 293);
			this->picBoxOriginalMagnitude->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalMagnitude->TabIndex = 2;
			this->picBoxOriginalMagnitude->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(717, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Original Magnitude";
			// 
			// picBoxOriginalPhase
			// 
			this->picBoxOriginalPhase->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalPhase->Location = System::Drawing::Point(1073, 75);
			this->picBoxOriginalPhase->Name = L"picBoxOriginalPhase";
			this->picBoxOriginalPhase->Size = System::Drawing::Size(280, 293);
			this->picBoxOriginalPhase->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalPhase->TabIndex = 2;
			this->picBoxOriginalPhase->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1069, 52);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 20);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Original Phase";
			// 
			// FourierTransform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1486, 851);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picBoxOriginalPhase);
			this->Controls->Add(this->picBoxOriginalMagnitude);
			this->Controls->Add(this->picBoxOriginalImage);
			this->Controls->Add(this->listBoxImagePath);
			this->Controls->Add(this->btnLoadImagePath);
			this->Name = L"FourierTransform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FourierTransform";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalMagnitude))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalPhase))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLoadImagePath_Click(System::Object^ sender, System::EventArgs^ e) {
		CommonMethods::loadImagePathToListBox(this->oFD, this->listBoxImagePath);
	}
	private: System::Void listBoxImagePath_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		CommonMethods::showTooltipInListBoxItem(this->listBoxImagePath, this->toolTip1, e);
	}
	private: System::Void listBoxImagePath_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->listBoxImagePath->SelectedIndex < 0)
		{
			return;
		}
		System::String^ selectedImagePath = this->listBoxImagePath->SelectedItem->ToString();
		CommonMethods::loadImagePathToPictureBox(picBoxOriginalImage, selectedImagePath);
		std::string stdSelectedImagePath = CommonMethods::convertSystemStringToStdString(selectedImagePath);
		processImage(stdSelectedImagePath);
	}
	private: void processImage(std::string stdSelectedImagePath) {
		// read image
		cv::Mat img = cv::imread(stdSelectedImagePath, cv::IMREAD_COLOR);

		if (img.empty()) {
			MessageBox::Show("Failed to load image.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// split channels
		std::vector<cv::Mat> bgrChannels;
		cv::split(img, bgrChannels);

		cv::Mat B_channel = bgrChannels[0];
		cv::Mat G_channel = bgrChannels[1];
		cv::Mat R_channel = bgrChannels[2];

		// compute DFT and magnitude spectrum each channel
		cv::Mat B_magnitude = computeDFTMagnitude(B_channel);
		cv::Mat G_magnitude = computeDFTMagnitude(G_channel);
		cv::Mat R_magnitude = computeDFTMagnitude(R_channel);

		// Merge the processed channels back
		cv::Mat outputMagnitudeImage = CommonMethods::getOuputMergeBGRChannels(B_magnitude, G_magnitude, R_magnitude);
		CommonMethods::loadCvMatToPictureBox(outputMagnitudeImage, this->picBoxOriginalMagnitude);

		// compute phase spectrum each channel
		cv::Mat B_phase = computeDFTPhase(B_channel);
		cv::Mat G_phase = computeDFTPhase(G_channel);
		cv::Mat R_phase = computeDFTPhase(R_channel);
		// Merge the processed channels back
		cv::Mat outputPhaseImage = CommonMethods::getOuputMergeBGRChannels(B_phase, G_phase, R_phase);
		CommonMethods::loadCvMatToPictureBox(outputPhaseImage, this->picBoxOriginalPhase);



	}
	private: cv::Mat computeDFTPhase(const cv::Mat& channel) {
		// Expand input image to optimal size
		cv::Mat padded;
		int m = cv::getOptimalDFTSize(channel.rows);
		int n = cv::getOptimalDFTSize(channel.cols);
		cv::copyMakeBorder(channel, padded, 0, m - channel.rows, 0, n - channel.cols, cv::BORDER_CONSTANT, cv::Scalar::all(0));
		// Make place for both the complex and the real values
		cv::Mat planes[] = { cv::Mat_<float>(padded), cv::Mat::zeros(padded.size(), CV_32F) };
		cv::Mat complexI;
		cv::merge(planes, 2, complexI);
		// DFT
		cv::dft(complexI, complexI);
		// Compute the phase
		cv::split(complexI, planes); // planes[0] = Re(DFT(I)), planes[1] = Im(DFT(I))
		cv::Mat phaseI;
		cv::phase(planes[0], planes[1], phaseI);
		// Normalize the phase to [0,1] for display
		cv::normalize(phaseI, phaseI, 0, 1, cv::NORM_MINMAX);
		return phaseI;
	}

	private: cv::Mat computeDFTMagnitude(const cv::Mat& channel) {
		// Expand input image to optimal size
		cv::Mat padded;
		int m = cv::getOptimalDFTSize(channel.rows);
		int n = cv::getOptimalDFTSize(channel.cols);
		cv::copyMakeBorder(channel, padded, 0, m - channel.rows, 0, n - channel.cols, cv::BORDER_CONSTANT, cv::Scalar::all(0));

		// Make place for both the complex and the real values
		cv::Mat planes[] = { cv::Mat_<float>(padded), cv::Mat::zeros(padded.size(), CV_32F) };
		cv::Mat complexI;
		cv::merge(planes, 2, complexI);

		// DFT
		cv::dft(complexI, complexI);

		// Compute the magnitude
		cv::split(complexI, planes); // planes[0] = Re(DFT(I)), planes[1] = Im(DFT(I))
		cv::magnitude(planes[0], planes[1], planes[0]);
		cv::Mat magI = planes[0];

		// Switch to logarithmic scale: log(1 + magnitude)
		magI += cv::Scalar::all(1);
		cv::log(magI, magI);

		// Crop the spectrum, if it has an odd number of rows or columns
		magI = magI(cv::Rect(0, 0, magI.cols & -2, magI.rows & -2));

		// Rearrange the quadrants of Fourier image so that the origin is at the image center
		int cx = magI.cols / 2;
		int cy = magI.rows / 2;
		cv::Mat q0(magI, cv::Rect(0, 0, cx, cy));   // Top-Left
		cv::Mat q1(magI, cv::Rect(cx, 0, cx, cy));  // Top-Right
		cv::Mat q2(magI, cv::Rect(0, cy, cx, cy));  // Bottom-Left
		cv::Mat q3(magI, cv::Rect(cx, cy, cx, cy)); // Bottom-Right
		cv::Mat tmp;
		q0.copyTo(tmp);
		q3.copyTo(q0);
		tmp.copyTo(q3);
		q1.copyTo(tmp);
		q2.copyTo(q1);
		tmp.copyTo(q2);

		// Normalize the magnitude to [0,1] for display
		cv::normalize(magI, magI, 0, 1, cv::NORM_MINMAX);

		return magI;
	}
	}; // class FourierTransform
} // namespace DigitalImageProcessingCLR
