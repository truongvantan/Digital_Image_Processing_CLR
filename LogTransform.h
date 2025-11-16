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
	/// Summary for LogTransform
	/// </summary>
	public ref class LogTransform : public System::Windows::Forms::Form
	{
	public:
		LogTransform(void)
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
		~LogTransform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnLoadImage;
	protected:
	private: System::Windows::Forms::ListBox^ lbImagePath;
	private: System::Windows::Forms::PictureBox^ picBoxOriginal;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ picBoxOutput;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
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
			this->btnLoadImage = (gcnew System::Windows::Forms::Button());
			this->lbImagePath = (gcnew System::Windows::Forms::ListBox());
			this->picBoxOriginal = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->picBoxOutput = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOutput))->BeginInit();
			this->SuspendLayout();
			// 
			// btnLoadImage
			// 
			this->btnLoadImage->Location = System::Drawing::Point(29, 18);
			this->btnLoadImage->Name = L"btnLoadImage";
			this->btnLoadImage->Size = System::Drawing::Size(140, 34);
			this->btnLoadImage->TabIndex = 0;
			this->btnLoadImage->Text = L"Load image path";
			this->btnLoadImage->UseVisualStyleBackColor = true;
			this->btnLoadImage->Click += gcnew System::EventHandler(this, &LogTransform::btnLoadImage_Click);
			// 
			// lbImagePath
			// 
			this->lbImagePath->FormattingEnabled = true;
			this->lbImagePath->Location = System::Drawing::Point(30, 75);
			this->lbImagePath->Name = L"lbImagePath";
			this->lbImagePath->Size = System::Drawing::Size(355, 511);
			this->lbImagePath->TabIndex = 1;
			this->lbImagePath->SelectedIndexChanged += gcnew System::EventHandler(this, &LogTransform::lbImagePath_SelectedIndexChanged);
			this->lbImagePath->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LogTransform::lbImagePath_MouseMove);
			// 
			// picBoxOriginal
			// 
			this->picBoxOriginal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginal->Location = System::Drawing::Point(462, 76);
			this->picBoxOriginal->Name = L"picBoxOriginal";
			this->picBoxOriginal->Size = System::Drawing::Size(527, 509);
			this->picBoxOriginal->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginal->TabIndex = 2;
			this->picBoxOriginal->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(464, 41);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Original Image";
			// 
			// picBoxOutput
			// 
			this->picBoxOutput->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOutput->Location = System::Drawing::Point(1071, 75);
			this->picBoxOutput->Name = L"picBoxOutput";
			this->picBoxOutput->Size = System::Drawing::Size(527, 509);
			this->picBoxOutput->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOutput->TabIndex = 2;
			this->picBoxOutput->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1068, 41);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Output image";
			// 
			// LogTransform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1679, 635);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picBoxOutput);
			this->Controls->Add(this->picBoxOriginal);
			this->Controls->Add(this->lbImagePath);
			this->Controls->Add(this->btnLoadImage);
			this->Name = L"LogTransform";
			this->Text = L"LogTransform";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOutput))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void btnLoadImage_Click(System::Object^ sender, System::EventArgs^ e) {
	CommonMethods::loadImagePathToListBox(this->openFileDialog1, this->lbImagePath);
}
private: System::Void lbImagePath_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	CommonMethods::showTooltipInListBoxItem(this->lbImagePath, this->toolTip1, e);
}

private: void processImage(std::string stdFilePath)
{
	cv::Mat img = cv::imread(stdFilePath);
	
	if (img.empty())
	{
		MessageBox::Show("Cannot read image", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	cv::Mat floatImage;
	img.convertTo(floatImage, CV_32F); // Convert to 32-bit float

	cv::Mat logImage;
	float c = 255.0f / std::log(1.0f + 255.0f); // Calculate scaling constant for 0-255 range
	cv::log(1.0f + floatImage, logImage); // Apply log(1+r)
	logImage = c * logImage; // Apply scaling constant

	cv::Mat outputImage;
	logImage.convertTo(outputImage, CV_8U);

	CommonMethods::loadImageToPictureBox(img, this->picBoxOriginal);
	CommonMethods::loadImageToPictureBox(outputImage, this->picBoxOutput);
}

private: System::Void lbImagePath_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ selectedImagePath = this->lbImagePath->SelectedItem->ToString();
	std::string stdFilePath = CommonMethods::convertSystemStringToStdString(selectedImagePath);

	processImage(stdFilePath);
}
};
}
