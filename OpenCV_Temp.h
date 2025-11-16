#pragma once
#include "Common.h"
#include <algorithm>
#include <cmath>

namespace DigitalImageProcessingCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for OpenCV_Temp
	/// </summary>
	public ref class OpenCV_Temp : public System::Windows::Forms::Form
	{
	public:
		OpenCV_Temp(void)
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
		~OpenCV_Temp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::PictureBox^ picBoxOutput;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ picBoxOriginal;
	private: System::Windows::Forms::ListBox^ lbImagePath;
	private: System::Windows::Forms::Button^ btnLoadImage;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->picBoxOutput = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->picBoxOriginal = (gcnew System::Windows::Forms::PictureBox());
			this->lbImagePath = (gcnew System::Windows::Forms::ListBox());
			this->btnLoadImage = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOutput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginal))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1179, 133);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Output image";
			// 
			// picBoxOutput
			// 
			this->picBoxOutput->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOutput->Location = System::Drawing::Point(1182, 167);
			this->picBoxOutput->Name = L"picBoxOutput";
			this->picBoxOutput->Size = System::Drawing::Size(527, 509);
			this->picBoxOutput->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOutput->TabIndex = 12;
			this->picBoxOutput->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(481, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Original Image";
			// 
			// picBoxOriginal
			// 
			this->picBoxOriginal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginal->Location = System::Drawing::Point(479, 167);
			this->picBoxOriginal->Name = L"picBoxOriginal";
			this->picBoxOriginal->Size = System::Drawing::Size(527, 509);
			this->picBoxOriginal->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginal->TabIndex = 10;
			this->picBoxOriginal->TabStop = false;
			// 
			// lbImagePath
			// 
			this->lbImagePath->FormattingEnabled = true;
			this->lbImagePath->Location = System::Drawing::Point(22, 167);
			this->lbImagePath->Name = L"lbImagePath";
			this->lbImagePath->Size = System::Drawing::Size(355, 511);
			this->lbImagePath->TabIndex = 9;
			this->lbImagePath->SelectedIndexChanged += gcnew System::EventHandler(this, &OpenCV_Temp::lbImagePath_SelectedIndexChanged);
			this->lbImagePath->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &OpenCV_Temp::lbImagePath_MouseMove);
			// 
			// btnLoadImage
			// 
			this->btnLoadImage->Location = System::Drawing::Point(22, 111);
			this->btnLoadImage->Name = L"btnLoadImage";
			this->btnLoadImage->Size = System::Drawing::Size(140, 34);
			this->btnLoadImage->TabIndex = 8;
			this->btnLoadImage->Text = L"Load image path";
			this->btnLoadImage->UseVisualStyleBackColor = true;
			this->btnLoadImage->Click += gcnew System::EventHandler(this, &OpenCV_Temp::btnLoadImage_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// OpenCV_Temp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1731, 733);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->picBoxOutput);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picBoxOriginal);
			this->Controls->Add(this->lbImagePath);
			this->Controls->Add(this->btnLoadImage);
			this->Name = L"OpenCV_Temp";
			this->Text = L"OpenCV_Temp";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOutput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginal))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: void processImage(std::string stdFilePath)
{
	cv::Mat img = cv::imread(stdFilePath);

	if (img.empty())
	{
		MessageBox::Show("Cannot read image", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	CommonMethods::loadImageToPictureBox(img, this->picBoxOriginal);

	cv::Mat outputImg = img.clone();
	int thresholdValue = 150;

	double srcMin = 0.0, srcMax = 255.0;
	double dstMin = 50.0, dstMax = 155.0;
	double scale = (dstMax - dstMin) / (srcMax - srcMin);
	cv::Vec3b originalPixelVec;
	double newPixelVal = 0.0;

	for (int y = 0; y < img.rows; y++)
	{
		for (int x = 0; x < img.cols; x++)
		{
			originalPixelVec = img.at<cv::Vec3b>(y, x);
			for (int c = 0; c < img.channels(); c++)
			{
				newPixelVal = (originalPixelVec[c] - srcMin) * scale + dstMin;
				if (newPixelVal < 0.0)
				{
					newPixelVal = 0.0;
				}
				if (newPixelVal > 255.0)
				{
					newPixelVal = 255.0;
				}

				outputImg.at<cv::Vec3b>(y, x)[c] = static_cast<uchar>(newPixelVal);
			}
		}
	}

	CommonMethods::loadImageToPictureBox(outputImg, this->picBoxOutput);
}

private: System::Void btnLoadImage_Click(System::Object^ sender, System::EventArgs^ e) {
	CommonMethods::loadImagePathToListBox(this->openFileDialog1, this->lbImagePath);
}
private: System::Void lbImagePath_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	CommonMethods::showTooltipInListBoxItem(this->lbImagePath, this->toolTip1, e);
}
private: System::Void lbImagePath_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	System::String^ selectedImagePath = this->lbImagePath->SelectedItem->ToString();
	std::string stdFilePath = CommonMethods::convertSystemStringToStdString(selectedImagePath);

	processImage(stdFilePath);
}
};
}
