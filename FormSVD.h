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
	/// Summary for FormSVD
	/// </summary>
	public ref class FormSVD : public System::Windows::Forms::Form
	{
	public:
		FormSVD(void)
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
		~FormSVD()
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
			this->label2->Location = System::Drawing::Point(1183, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Output image";
			// 
			// picBoxOutput
			// 
			this->picBoxOutput->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOutput->Location = System::Drawing::Point(1186, 87);
			this->picBoxOutput->Name = L"picBoxOutput";
			this->picBoxOutput->Size = System::Drawing::Size(527, 509);
			this->picBoxOutput->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOutput->TabIndex = 12;
			this->picBoxOutput->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(485, 52);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Original Image";
			// 
			// picBoxOriginal
			// 
			this->picBoxOriginal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginal->Location = System::Drawing::Point(483, 87);
			this->picBoxOriginal->Name = L"picBoxOriginal";
			this->picBoxOriginal->Size = System::Drawing::Size(527, 509);
			this->picBoxOriginal->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginal->TabIndex = 10;
			this->picBoxOriginal->TabStop = false;
			// 
			// lbImagePath
			// 
			this->lbImagePath->FormattingEnabled = true;
			this->lbImagePath->Location = System::Drawing::Point(26, 87);
			this->lbImagePath->Name = L"lbImagePath";
			this->lbImagePath->Size = System::Drawing::Size(355, 511);
			this->lbImagePath->TabIndex = 9;
			this->lbImagePath->SelectedIndexChanged += gcnew System::EventHandler(this, &FormSVD::lbImagePath_SelectedIndexChanged);
			this->lbImagePath->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormSVD::lbImagePath_MouseMove);
			// 
			// btnLoadImage
			// 
			this->btnLoadImage->Location = System::Drawing::Point(26, 31);
			this->btnLoadImage->Name = L"btnLoadImage";
			this->btnLoadImage->Size = System::Drawing::Size(140, 34);
			this->btnLoadImage->TabIndex = 8;
			this->btnLoadImage->Text = L"Load image path";
			this->btnLoadImage->UseVisualStyleBackColor = true;
			this->btnLoadImage->Click += gcnew System::EventHandler(this, &FormSVD::btnLoadImage_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// FormSVD
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1728, 612);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->picBoxOutput);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picBoxOriginal);
			this->Controls->Add(this->lbImagePath);
			this->Controls->Add(this->btnLoadImage);
			this->Name = L"FormSVD";
			this->Text = L"FormSVD";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOutput))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginal))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: cv::Mat processChannel(const cv::Mat& channel) {
	// Convert to float for SVD (assume input is CV_8U, output will be scaled back later)
	cv::Mat channelFloat;
	channel.convertTo(channelFloat, CV_64F, 1.0 / 255.0);  // Normalize to [0,1] for stable SVD

	// Perform SVD
	cv::SVD svd(channelFloat, cv::SVD::FULL_UV);
	cv::Mat U = svd.u;  // Left singular vectors (rows x rows)
	cv::Mat Vt = svd.vt;  // Right singular vectors transpose (cols x cols)
	cv::Mat W = svd.w;  // Singular values (min(rows,cols) x 1)

	// Create identity-like diagonal matrix: set all singular values to 1
	int minDim = (std::min)(channelFloat.rows, channelFloat.cols);
	cv::Mat identityDiag = cv::Mat::eye(minDim, minDim, CV_64F);  // Square identity min x min

	// Reconstruct with replaced sigma (U * I * Vt, using only the relevant ranges)
	cv::Mat reconstructed = U.colRange(0, minDim) * identityDiag * Vt.rowRange(0, minDim);

	// Post-process: scale back to [0,255], clip to avoid overflow/underflow
	double minVal, maxVal;
	cv::minMaxLoc(reconstructed, &minVal, &maxVal);
	if (maxVal > 0)
	{
		reconstructed = (reconstructed - minVal) / (maxVal - minVal);  // Normalize to [0,1]
	}
	cv::Mat output;
	reconstructed.convertTo(output, CV_8U, 255.0);

	return output;
}

private: void processImage(std::string stdFilePath)
{
	cv::Mat img = cv::imread(stdFilePath, cv::IMREAD_COLOR);
	if (img.empty())
	{
		MessageBox::Show("Cannot read image", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	// Split into BGR channels
	std::vector<cv::Mat> channels;
	cv::split(img, channels);

	// Process each channel
	for (auto& ch : channels) {
		ch = processChannel(ch);
	}

	// Merge back and save/show
	cv::Mat enhanced;
	cv::merge(channels, enhanced);

	CommonMethods::loadImageToPictureBox(img, this->picBoxOriginal);
	CommonMethods::loadImageToPictureBox(enhanced, this->picBoxOutput);


	/*cv::Mat B_Float, G_Float, R_Float;
	B_img.convertTo(B_Float, CV_32F);
	G_img.convertTo(G_Float, CV_32F);
	R_img.convertTo(R_Float, CV_32F);

	cv::Mat B_U, B_S, B_Vt;
	cv::SVD::compute(B_Float, B_S, B_U, B_Vt, cv::SVD::FULL_UV);
	cv::Mat G_U, G_S, G_Vt;
	cv::SVD::compute(G_Float, G_S, G_U, G_Vt, cv::SVD::FULL_UV);
	cv::Mat R_U, R_S, R_Vt;
	cv::SVD::compute(R_Float, R_S, R_U, R_Vt, cv::SVD::FULL_UV);
	cv::Mat identityMatrix = cv::Mat::eye(B_U.rows, B_U.cols, CV_32F);
	cv::Mat B_reconstructed = B_U * identityMatrix * B_Vt;
	cv::Mat G_reconstructed = G_U * identityMatrix * G_Vt;
	cv::Mat R_reconstructed = R_U * identityMatrix * R_Vt;
	cv::Mat outputImg;
	cv::merge(std::vector<cv::Mat>{ B_reconstructed, G_reconstructed, R_reconstructed }, outputImg);
	CommonMethods::loadImageToPictureBox(outputImg, this->picBoxOutput);*/



}
private: System::Void btnLoadImage_Click(System::Object^ sender, System::EventArgs^ e) {
	CommonMethods::loadImagePathToListBox(this->openFileDialog1, this->lbImagePath);
}
private: System::Void lbImagePath_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	CommonMethods::showTooltipInListBoxItem(this->lbImagePath, this->toolTip1, e);
}
private: System::Void lbImagePath_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->lbImagePath->SelectedItem == nullptr)
	{
		MessageBox::Show("Please select an image path from the list.", "No Selection", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}
	if (this->lbImagePath->SelectedItems->Count > 1)
	{
		MessageBox::Show("Please select only one image at a time.", "Multiple Selection", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	System::String^ selectedImagePath = this->lbImagePath->SelectedItem->ToString();
	std::string stdFilePath = CommonMethods::convertSystemStringToStdString(selectedImagePath);

	processImage(stdFilePath);
}
};
}
