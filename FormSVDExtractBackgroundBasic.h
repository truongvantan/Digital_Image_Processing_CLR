#pragma once
#include "Common.h"
#include <filesystem>
#include <algorithm>
#include <chrono>

namespace DigitalImageProcessingCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormSVDExtractBackgroundBasic
	/// </summary>
	public ref class FormSVDExtractBackgroundBasic : public System::Windows::Forms::Form
	{
	public:
		FormSVDExtractBackgroundBasic(void)
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
		~FormSVDExtractBackgroundBasic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ picBoxBackground;
	private: System::Windows::Forms::PictureBox^ picBoxOriginalImage;
	private: System::Windows::Forms::ListBox^ listBoxImagePath;
	private: System::Windows::Forms::Button^ btnExtractBackground;
	private: System::Windows::Forms::Button^ btnLoadImagePath;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtTimeTaken;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtNumOfFrames;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ picBoxForeground;
	private: System::ComponentModel::IContainer^ components;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->picBoxBackground = (gcnew System::Windows::Forms::PictureBox());
			this->picBoxOriginalImage = (gcnew System::Windows::Forms::PictureBox());
			this->listBoxImagePath = (gcnew System::Windows::Forms::ListBox());
			this->btnExtractBackground = (gcnew System::Windows::Forms::Button());
			this->btnLoadImagePath = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtTimeTaken = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtNumOfFrames = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->picBoxForeground = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxBackground))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxForeground))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(863, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 20);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Background";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(333, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 20);
			this->label1->TabIndex = 14;
			this->label1->Text = L"Input frame";
			// 
			// picBoxBackground
			// 
			this->picBoxBackground->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxBackground->Location = System::Drawing::Point(867, 73);
			this->picBoxBackground->Name = L"picBoxBackground";
			this->picBoxBackground->Size = System::Drawing::Size(322, 281);
			this->picBoxBackground->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxBackground->TabIndex = 10;
			this->picBoxBackground->TabStop = false;
			// 
			// picBoxOriginalImage
			// 
			this->picBoxOriginalImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalImage->Location = System::Drawing::Point(337, 73);
			this->picBoxOriginalImage->Name = L"picBoxOriginalImage";
			this->picBoxOriginalImage->Size = System::Drawing::Size(322, 281);
			this->picBoxOriginalImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalImage->TabIndex = 11;
			this->picBoxOriginalImage->TabStop = false;
			// 
			// listBoxImagePath
			// 
			this->listBoxImagePath->FormattingEnabled = true;
			this->listBoxImagePath->Location = System::Drawing::Point(21, 73);
			this->listBoxImagePath->Name = L"listBoxImagePath";
			this->listBoxImagePath->Size = System::Drawing::Size(269, 654);
			this->listBoxImagePath->TabIndex = 9;
			this->listBoxImagePath->SelectedIndexChanged += gcnew System::EventHandler(this, &FormSVDExtractBackgroundBasic::listBoxImagePath_SelectedIndexChanged);
			this->listBoxImagePath->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormSVDExtractBackgroundBasic::listBoxImagePath_MouseMove);
			// 
			// btnExtractBackground
			// 
			this->btnExtractBackground->BackColor = System::Drawing::Color::LimeGreen;
			this->btnExtractBackground->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExtractBackground->ForeColor = System::Drawing::Color::White;
			this->btnExtractBackground->Location = System::Drawing::Point(696, 179);
			this->btnExtractBackground->Name = L"btnExtractBackground";
			this->btnExtractBackground->Size = System::Drawing::Size(126, 64);
			this->btnExtractBackground->TabIndex = 7;
			this->btnExtractBackground->Text = L"Extract Background";
			this->btnExtractBackground->UseVisualStyleBackColor = false;
			this->btnExtractBackground->Click += gcnew System::EventHandler(this, &FormSVDExtractBackgroundBasic::btnExtractBackground_Click);
			// 
			// btnLoadImagePath
			// 
			this->btnLoadImagePath->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLoadImagePath->Location = System::Drawing::Point(21, 14);
			this->btnLoadImagePath->Name = L"btnLoadImagePath";
			this->btnLoadImagePath->Size = System::Drawing::Size(130, 47);
			this->btnLoadImagePath->TabIndex = 8;
			this->btnLoadImagePath->Text = L"Load Frames";
			this->btnLoadImagePath->UseVisualStyleBackColor = true;
			this->btnLoadImagePath->Click += gcnew System::EventHandler(this, &FormSVDExtractBackgroundBasic::btnLoadImagePath_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Num of frames:";
			// 
			// txtTimeTaken
			// 
			this->txtTimeTaken->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTimeTaken->Location = System::Drawing::Point(166, 105);
			this->txtTimeTaken->Name = L"txtTimeTaken";
			this->txtTimeTaken->ReadOnly = true;
			this->txtTimeTaken->Size = System::Drawing::Size(58, 26);
			this->txtTimeTaken->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Time taken:";
			// 
			// txtNumOfFrames
			// 
			this->txtNumOfFrames->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNumOfFrames->Location = System::Drawing::Point(166, 38);
			this->txtNumOfFrames->Name = L"txtNumOfFrames";
			this->txtNumOfFrames->ReadOnly = true;
			this->txtNumOfFrames->Size = System::Drawing::Size(58, 26);
			this->txtNumOfFrames->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(230, 108);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"minutes";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtTimeTaken);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->txtNumOfFrames);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Location = System::Drawing::Point(869, 438);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(320, 289);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(333, 414);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 20);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Foreground";
			// 
			// picBoxForeground
			// 
			this->picBoxForeground->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxForeground->Location = System::Drawing::Point(337, 446);
			this->picBoxForeground->Name = L"picBoxForeground";
			this->picBoxForeground->Size = System::Drawing::Size(322, 281);
			this->picBoxForeground->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxForeground->TabIndex = 12;
			this->picBoxForeground->TabStop = false;
			// 
			// FormSVDExtractBackgroundBasic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1226, 737);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picBoxBackground);
			this->Controls->Add(this->picBoxOriginalImage);
			this->Controls->Add(this->listBoxImagePath);
			this->Controls->Add(this->btnExtractBackground);
			this->Controls->Add(this->btnLoadImagePath);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->picBoxForeground);
			this->Name = L"FormSVDExtractBackgroundBasic";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormSVDExtractBackgroundBasic";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxBackground))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxForeground))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnLoadImagePath_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ oFD = gcnew OpenFileDialog();
		listBoxImagePath->Items->Clear();
		CommonMethods::loadImagePathToListBox(oFD, listBoxImagePath);
	}
	private: System::Void listBoxImagePath_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		CommonMethods::showTooltipInListBoxItem(listBoxImagePath, toolTip1, e);
	}
	private: System::Void listBoxImagePath_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		System::String^ selectedImagePath = listBoxImagePath->SelectedItem->ToString();
		CommonMethods::loadImagePathToPictureBox(picBoxOriginalImage, selectedImagePath);
	}
	private: System::Void btnExtractBackground_Click(System::Object^ sender, System::EventArgs^ e) {
		processImage();
	}
	private: void processImage() {
		const int FRAME_STEP = 5;
		const int RANK_K = 1;
		auto startTime = std::chrono::high_resolution_clock::now();
		// get list of image paths from listbox
		std::vector<std::string> imagePaths = getImagePaths();

		std::vector<cv::Mat> listMatFrames = getListMatFrames(imagePaths);
		int numOfFrames = static_cast<int>(listMatFrames.size());
		txtNumOfFrames->Text = numOfFrames.ToString();

		if (numOfFrames <= 0) {
			MessageBox::Show("No images loaded!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		std::vector<cv::Mat> frames;
		for (size_t i = 0; i < listMatFrames.size(); i += FRAME_STEP) {
			frames.push_back(listMatFrames[i]);
		}

		int rows = frames[0].rows;
		int cols = frames[0].cols;
		int nFrames = static_cast<int>(frames.size());
		std::cout << "Loaded " << nFrames << " frames (" << cols << "x" << rows << ")" << std::endl;

		// --- 3. Split into color channels ---
		std::vector<cv::Mat> allR, allG, allB;
		for (size_t i = 0; i < frames.size(); i++) {
			std::vector<cv::Mat> channels;
			cv::split(frames[i], channels);
			allB.push_back(channels[0]);
			allG.push_back(channels[1]);
			allR.push_back(channels[2]);
		}

		// --- 4. Compute SVD-based background per channel ---
		std::cout << "Computing SVD background (rank = " << RANK_K << ") ..." << std::endl;
		cv::Mat backR = computeSVDBackground(allR, RANK_K);
		cv::Mat backG = computeSVDBackground(allG, RANK_K);
		cv::Mat backB = computeSVDBackground(allB, RANK_K);

		// --- 5. Merge RGB channels ---
		std::vector<cv::Mat> bgChannels = { backB, backG, backR };
		cv::Mat background;
		cv::merge(bgChannels, background);

		// --- 7. Normalize and convert ---
		cv::normalize(background, background, 0, 255, cv::NORM_MINMAX);
		background.convertTo(background, CV_8U);

		auto endTime = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);
		double timeTakenInMinutes = static_cast<double>(duration.count()) / 60000.0;
		txtTimeTaken->Text = timeTakenInMinutes.ToString("F2");

		// --- 8. Display ---
		CommonMethods::loadCvMatToPictureBox(background, picBoxBackground);

		cv::Mat sampleInput = CommonMethods::readCVMatFromFilePath(listBoxImagePath->SelectedItem->ToString());
		cv::Mat diffColor;
		cv::absdiff(sampleInput, background, diffColor);

		cv::Mat diffGray;
		cv::cvtColor(diffColor, diffGray, cv::COLOR_BGR2GRAY);

		// threshold to get foreground mask
		cv::Mat fgMask;
		const int threshVal = 80;
		cv::threshold(diffGray, fgMask, threshVal, 255, cv::THRESH_BINARY);

		// optional morphology to clean noise
		cv::Mat kernel = cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(3, 3));
		cv::morphologyEx(fgMask, fgMask, cv::MORPH_OPEN, kernel);
		cv::morphologyEx(fgMask, fgMask, cv::MORPH_DILATE, kernel);

		// create visualization: keep original colors where mask is set
		cv::Mat foregroundVis = cv::Mat::zeros(sampleInput.size(), sampleInput.type());
		sampleInput.copyTo(foregroundVis, fgMask);

		CommonMethods::loadCvMatToPictureBox(foregroundVis, picBoxForeground);
		MessageBox::Show("Background extraction completed!", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}

	private: cv::Mat computeSVDBackground(const std::vector<cv::Mat>& frames, int k)
	{
		int rows = frames[0].rows;
		int cols = frames[0].cols;
		int nFrames = static_cast<int>(frames.size());

		// --- Build data matrix: each column = flattened frame ---
		cv::Mat data(rows * cols, nFrames, CV_32F);
		for (int i = 0; i < nFrames; i++) {
			cv::Mat f = frames[i].reshape(1, rows * cols);
			f.convertTo(f, CV_32F);
			f.copyTo(data.col(i));
		}

		// --- Perform SVD ---
		cv::Mat w, u, vt;
		cv::SVD::compute(data, w, u, vt);

		// --- Limit to rank-k approximation ---
		int rank = std::min<int>(k, w.rows);
		cv::Mat Uk = u.colRange(0, rank);
		cv::Mat Vk = vt.rowRange(0, rank);
		cv::Mat Sk = cv::Mat::zeros(rank, rank, CV_32F);

		for (int i = 0; i < rank; i++)
			Sk.at<float>(i, i) = w.at<float>(i, 0);

		// --- Reconstruct: X' = U_k * S_k * V_k^T ---
		cv::Mat temp, backgroundVec;
		cv::gemm(Uk, Sk, 1.0, cv::Mat(), 0.0, temp);
		cv::gemm(temp, Vk, 1.0, cv::Mat(), 0.0, backgroundVec);

		// --- Reshape back to image ---
		cv::Mat extractCol = backgroundVec.col(0).clone();
		cv::Mat background = extractCol.reshape(1, rows);
		cv::normalize(background, background, 0, 255, cv::NORM_MINMAX);
		background.convertTo(background, CV_8U);

		return background;
	}
	private: std::vector<std::string> getImagePaths() {
		std::vector<std::string> imagePaths;
		System::String^ imagePath;
		std::string stdImagePath;

		for (int i = 0; i < listBoxImagePath->Items->Count; i++) {
			imagePath = listBoxImagePath->Items[i]->ToString();
			stdImagePath = CommonMethods::convertSystemStringToStdString(imagePath);
			imagePaths.push_back(stdImagePath);
		}

		std::sort(imagePaths.begin(), imagePaths.end());

		return imagePaths;
	}

	private: std::vector<cv::Mat> getListMatFrames(const std::vector<std::string>& imagePaths) {
		// read images from image paths
		std::vector<cv::Mat> listMatFrames;
		cv::Mat mat;

		for (const auto& path : imagePaths) {
			mat = cv::imread(path, cv::IMREAD_COLOR);
			if (!mat.empty()) {
				listMatFrames.push_back(mat);
			}
		}

		return listMatFrames;
	}
	}; // class FormSVDExtractBackgroundBasic
}// namespace DigitalImageProcessingCLR
