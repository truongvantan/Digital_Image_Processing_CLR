#pragma once
#include "Common.h"
#include <algorithm>

namespace DigitalImageProcessingCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GammaTransform
	/// </summary>
	public ref class GammaTransform : public System::Windows::Forms::Form
	{
	public:
		GammaTransform(void)
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
		~GammaTransform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnLoadImage;
	private: System::Windows::Forms::ListBox^ lbImagePath;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ picBoxOriginal;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ picBoxOutput;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtGammaValue;
	private: System::Windows::Forms::CheckBox^ cbGammaValue;

	private: System::ComponentModel::IContainer^ components;
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
			this->btnLoadImage = (gcnew System::Windows::Forms::Button());
			this->lbImagePath = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->picBoxOriginal = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->picBoxOutput = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtGammaValue = (gcnew System::Windows::Forms::TextBox());
			this->cbGammaValue = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOutput))->BeginInit();
			this->SuspendLayout();
			// 
			// btnLoadImage
			// 
			this->btnLoadImage->Location = System::Drawing::Point(28, 51);
			this->btnLoadImage->Name = L"btnLoadImage";
			this->btnLoadImage->Size = System::Drawing::Size(140, 34);
			this->btnLoadImage->TabIndex = 1;
			this->btnLoadImage->Text = L"Load image path";
			this->btnLoadImage->UseVisualStyleBackColor = true;
			this->btnLoadImage->Click += gcnew System::EventHandler(this, &GammaTransform::btnLoadImage_Click);
			// 
			// lbImagePath
			// 
			this->lbImagePath->FormattingEnabled = true;
			this->lbImagePath->Location = System::Drawing::Point(28, 107);
			this->lbImagePath->Name = L"lbImagePath";
			this->lbImagePath->Size = System::Drawing::Size(355, 511);
			this->lbImagePath->TabIndex = 2;
			this->lbImagePath->SelectedIndexChanged += gcnew System::EventHandler(this, &GammaTransform::lbImagePath_SelectedIndexChanged);
			this->lbImagePath->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &GammaTransform::lbImagePath_MouseMove);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(487, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Original Image";
			// 
			// picBoxOriginal
			// 
			this->picBoxOriginal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginal->Location = System::Drawing::Point(485, 107);
			this->picBoxOriginal->Name = L"picBoxOriginal";
			this->picBoxOriginal->Size = System::Drawing::Size(527, 509);
			this->picBoxOriginal->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginal->TabIndex = 4;
			this->picBoxOriginal->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1185, 73);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Output image";
			// 
			// picBoxOutput
			// 
			this->picBoxOutput->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOutput->Location = System::Drawing::Point(1188, 107);
			this->picBoxOutput->Name = L"picBoxOutput";
			this->picBoxOutput->Size = System::Drawing::Size(527, 509);
			this->picBoxOutput->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOutput->TabIndex = 6;
			this->picBoxOutput->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1038, 247);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(73, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"Gamma Value";
			// 
			// txtGammaValue
			// 
			this->txtGammaValue->Location = System::Drawing::Point(1041, 272);
			this->txtGammaValue->Name = L"txtGammaValue";
			this->txtGammaValue->ReadOnly = true;
			this->txtGammaValue->Size = System::Drawing::Size(97, 20);
			this->txtGammaValue->TabIndex = 9;
			this->txtGammaValue->Text = L"0.5";
			// 
			// cbGammaValue
			// 
			this->cbGammaValue->AutoSize = true;
			this->cbGammaValue->Location = System::Drawing::Point(1041, 314);
			this->cbGammaValue->Name = L"cbGammaValue";
			this->cbGammaValue->Size = System::Drawing::Size(127, 17);
			this->cbGammaValue->TabIndex = 10;
			this->cbGammaValue->Text = L"Custom gamma value";
			this->cbGammaValue->UseVisualStyleBackColor = true;
			this->cbGammaValue->CheckedChanged += gcnew System::EventHandler(this, &GammaTransform::cbGammaValue_CheckedChanged);
			// 
			// GammaTransform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1744, 650);
			this->Controls->Add(this->cbGammaValue);
			this->Controls->Add(this->txtGammaValue);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->picBoxOutput);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picBoxOriginal);
			this->Controls->Add(this->lbImagePath);
			this->Controls->Add(this->btnLoadImage);
			this->Name = L"GammaTransform";
			this->Text = L"GammaTransform";
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

private: double estimateGamma(const cv::Mat & gray)
{
	cv::Scalar meanIntensity = cv::mean(gray);
	double normalizedMean = meanIntensity[0] / 255.0;
	double gamma = log(0.5) / log(normalizedMean); // target mean=0.5

	if (gamma < 0.1)
	{
		gamma = 0.1;
	}
	if (gamma > 5.0)
	{
		gamma = 5.0;
	}

	return gamma;
}

private: cv::Mat gammaCorrection(const cv::Mat& src, double gamma)
{
	CV_Assert(gamma >= 0);

	cv::Mat img;
	src.convertTo(img, CV_32F);          // convert to float
	img = img / 255.0;                   // normalize to [0,1]

	cv::pow(img, gamma, img);            // apply gamma transform

	img = img * 255.0;                   // scale back to [0,255]
	cv::Mat dst;
	img.convertTo(dst, CV_8U);           // convert back to 8-bit
	return dst;
}

private: void processImage(std::string stdFilePath)
{
	cv::Mat img = cv::imread(stdFilePath);

	if (img.empty())
	{
		MessageBox::Show("Cannot read image", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}
	cv::Mat gray;
	cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

	cv::Mat output;
	double gammaValue = 1.0;

	if (this->cbGammaValue->Checked) // Custom gamma value
	{
		this->txtGammaValue->ReadOnly = false;
		double gammaValue = txtGammaValue->Text != "" ? Convert::ToDouble(txtGammaValue->Text) : 1.0;

		output = gammaCorrection(img, gammaValue);
	}
	else // automatic compute gamma value
	{
		this->txtGammaValue->ReadOnly = true;
		gammaValue = estimateGamma(gray);
		output = gammaCorrection(img, gammaValue);
	}

	CommonMethods::loadImageToPictureBox(img, this->picBoxOriginal);
	CommonMethods::loadImageToPictureBox(output, this->picBoxOutput);

	this->txtGammaValue->Text = gammaValue.ToString("F3");

}

private: System::Void lbImagePath_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ selectedImagePath = this->lbImagePath->SelectedItem->ToString();
	std::string stdFilePath = CommonMethods::convertSystemStringToStdString(selectedImagePath);

	processImage(stdFilePath);
}
private: System::Void cbGammaValue_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// if checked, enable txtGammaValue
	if (this->cbGammaValue->Checked)
	{
		this->txtGammaValue->ReadOnly = false;
	}
	else
	{
		this->txtGammaValue->ReadOnly = true;
	}
}
};
}
