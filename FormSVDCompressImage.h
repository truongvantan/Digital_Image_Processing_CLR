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
	/// Summary for FormSVDCompressImage
	/// </summary>
	public ref class FormSVDCompressImage : public System::Windows::Forms::Form
	{
	public:
		FormSVDCompressImage(void)
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
		~FormSVDCompressImage()
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
	private: System::Windows::Forms::PictureBox^ picBoxCompressedImage;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ nudKCompress;








	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnCompress;
	private: System::Windows::Forms::OpenFileDialog^ oFD;
	private: System::Windows::Forms::ToolTip^ toolTip1;
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
			this->picBoxCompressedImage = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nudKCompress = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnCompress = (gcnew System::Windows::Forms::Button());
			this->oFD = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxCompressedImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudKCompress))->BeginInit();
			this->SuspendLayout();
			// 
			// btnLoadImagePath
			// 
			this->btnLoadImagePath->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLoadImagePath->Location = System::Drawing::Point(15, 20);
			this->btnLoadImagePath->Name = L"btnLoadImagePath";
			this->btnLoadImagePath->Size = System::Drawing::Size(140, 45);
			this->btnLoadImagePath->TabIndex = 0;
			this->btnLoadImagePath->Text = L"Load Image";
			this->btnLoadImagePath->UseVisualStyleBackColor = true;
			this->btnLoadImagePath->Click += gcnew System::EventHandler(this, &FormSVDCompressImage::btnLoadImagePath_Click);
			// 
			// listBoxImagePath
			// 
			this->listBoxImagePath->FormattingEnabled = true;
			this->listBoxImagePath->Location = System::Drawing::Point(19, 79);
			this->listBoxImagePath->Name = L"listBoxImagePath";
			this->listBoxImagePath->Size = System::Drawing::Size(269, 394);
			this->listBoxImagePath->TabIndex = 1;
			this->listBoxImagePath->SelectedIndexChanged += gcnew System::EventHandler(this, &FormSVDCompressImage::listBoxImagePath_SelectedIndexChanged);
			this->listBoxImagePath->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormSVDCompressImage::listBoxImagePath_MouseMove);
			// 
			// picBoxOriginalImage
			// 
			this->picBoxOriginalImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalImage->Location = System::Drawing::Point(364, 79);
			this->picBoxOriginalImage->Name = L"picBoxOriginalImage";
			this->picBoxOriginalImage->Size = System::Drawing::Size(367, 394);
			this->picBoxOriginalImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalImage->TabIndex = 2;
			this->picBoxOriginalImage->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(362, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Original Image";
			// 
			// picBoxCompressedImage
			// 
			this->picBoxCompressedImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxCompressedImage->Location = System::Drawing::Point(892, 79);
			this->picBoxCompressedImage->Name = L"picBoxCompressedImage";
			this->picBoxCompressedImage->Size = System::Drawing::Size(367, 394);
			this->picBoxCompressedImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxCompressedImage->TabIndex = 2;
			this->picBoxCompressedImage->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(890, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(164, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Compressed Image";
			// 
			// nudKCompress
			// 
			this->nudKCompress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudKCompress->Location = System::Drawing::Point(807, 171);
			this->nudKCompress->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 150, 0, 0, 0 });
			this->nudKCompress->Name = L"nudKCompress";
			this->nudKCompress->Size = System::Drawing::Size(49, 26);
			this->nudKCompress->TabIndex = 5;
			this->nudKCompress->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(772, 173);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(40, 20);
			this->label7->TabIndex = 3;
			this->label7->Text = L"K = ";
			// 
			// btnCompress
			// 
			this->btnCompress->BackColor = System::Drawing::Color::LimeGreen;
			this->btnCompress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCompress->ForeColor = System::Drawing::SystemColors::Control;
			this->btnCompress->Location = System::Drawing::Point(746, 213);
			this->btnCompress->Name = L"btnCompress";
			this->btnCompress->Size = System::Drawing::Size(140, 45);
			this->btnCompress->TabIndex = 0;
			this->btnCompress->Text = L"Compress";
			this->btnCompress->UseVisualStyleBackColor = false;
			this->btnCompress->Click += gcnew System::EventHandler(this, &FormSVDCompressImage::btnCompress_Click);
			// 
			// FormSVDCompressImage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1271, 501);
			this->Controls->Add(this->nudKCompress);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picBoxCompressedImage);
			this->Controls->Add(this->picBoxOriginalImage);
			this->Controls->Add(this->listBoxImagePath);
			this->Controls->Add(this->btnCompress);
			this->Controls->Add(this->btnLoadImagePath);
			this->Name = L"FormSVDCompressImage";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormSVDCompressImage";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxCompressedImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudKCompress))->EndInit();
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
		if (this->listBoxImagePath->SelectedIndex != -1) {
			System::String^ imagePath = this->listBoxImagePath->SelectedItem->ToString();
			CommonMethods::loadImagePathToPictureBox(this->picBoxOriginalImage, imagePath);
		}
	}
	private: System::Void btnCompress_Click(System::Object^ sender, System::EventArgs^ e) {
		processImage();
	}
	private: void processImage() {
		if (this->listBoxImagePath->SelectedIndex == -1) {
			MessageBox::Show("Please select an image from the list box.", "No Image Selected", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		System::String^ imagePath = this->listBoxImagePath->SelectedItem->ToString();
		
		std::string stdImagePath = CommonMethods::convertSystemStringToStdString(imagePath);
		compressImage(stdImagePath);
	}
	private: void compressImage(const std::string& imagePath) {
		cv::Mat imgColor = cv::imread(imagePath, cv::IMREAD_COLOR);
		if (imgColor.empty()) {
			MessageBox::Show("Failed to load image.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Step 2: Split into channels
		std::vector<cv::Mat> channels(3);
		cv::split(imgColor, channels);

		int k = static_cast<int>(this->nudKCompress->Value);
		std::vector<cv::Mat> compressedChannels(3);

		// Step 3: Process each channel
		cv::Mat U, S, Vt;
		cv::Mat channelFloat;
		cv::Mat compressed;
		for (int c = 0; c < 3; ++c) {
			/*cv::Mat channelFloat;*/
			channels[c].convertTo(channelFloat, CV_32F);

			cv::SVD::compute(channelFloat, S, U, Vt);

			compressed = createImageCompress(U, S, Vt, k);
			compressedChannels[c] = convertToCV8U(compressed);
		}

		// Step 4: Merge channels
		cv::Mat imgCompressedColor;
		cv::merge(compressedChannels, imgCompressedColor);

		CommonMethods::loadCvMatToPictureBox(imgCompressedColor, this->picBoxCompressedImage);
		MessageBox::Show("Image compression completed.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: cv::Mat createSigmaCompress(const cv::Mat& S, int k) {
		int len = std::min<int>(k, S.rows);
		cv::Mat S_k = cv::Mat::zeros(len, len, CV_32F);

		for (int i = 0; i < len; ++i) {
			S_k.at<float>(i, i) = S.at<float>(i, 0);
		}

		return S_k;
	}
	private: cv::Mat createImageCompress(const cv::Mat& U, const cv::Mat& S, const cv::Mat& Vt, int k) {
		int len = std::min<int>(k, S.rows);

		cv::Mat U_k = U.colRange(0, len);
		cv::Mat Vt_k = Vt.rowRange(0, len);
		cv::Mat S_k = createSigmaCompress(S, len);

		cv::Mat imgCompressed = U_k * S_k * Vt_k;

		return imgCompressed;
	}
	private: cv::Mat convertToCV8U(const cv::Mat& imgFloat) {
		cv::Mat imgNorm, imgUint8;
		cv::normalize(imgFloat, imgNorm, 0, 255, cv::NORM_MINMAX);
		imgNorm.convertTo(imgUint8, CV_8U);

		return imgUint8;
	}
	}; // class FormSVDCompressImage
} // namespace DigitalImageProcessingCLR
