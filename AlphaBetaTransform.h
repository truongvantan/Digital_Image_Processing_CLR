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
	/// Summary for AlphaBetaTransform
	/// </summary>
	public ref class AlphaBetaTransform : public System::Windows::Forms::Form
	{
	public:
		AlphaBetaTransform(void)
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
		~AlphaBetaTransform()
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
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtAlphaValue;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtBetaValue;
	private: System::Windows::Forms::CheckBox^ cbCustomAlphaBeta;
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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtAlphaValue = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtBetaValue = (gcnew System::Windows::Forms::TextBox());
			this->cbCustomAlphaBeta = (gcnew System::Windows::Forms::CheckBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOutput))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginal))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(1169, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 13);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Output image";
			// 
			// picBoxOutput
			// 
			this->picBoxOutput->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOutput->Location = System::Drawing::Point(1172, 133);
			this->picBoxOutput->Name = L"picBoxOutput";
			this->picBoxOutput->Size = System::Drawing::Size(527, 509);
			this->picBoxOutput->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOutput->TabIndex = 12;
			this->picBoxOutput->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(471, 98);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Original Image";
			// 
			// picBoxOriginal
			// 
			this->picBoxOriginal->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginal->Location = System::Drawing::Point(469, 133);
			this->picBoxOriginal->Name = L"picBoxOriginal";
			this->picBoxOriginal->Size = System::Drawing::Size(527, 509);
			this->picBoxOriginal->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginal->TabIndex = 10;
			this->picBoxOriginal->TabStop = false;
			// 
			// lbImagePath
			// 
			this->lbImagePath->FormattingEnabled = true;
			this->lbImagePath->Location = System::Drawing::Point(12, 133);
			this->lbImagePath->Name = L"lbImagePath";
			this->lbImagePath->Size = System::Drawing::Size(355, 511);
			this->lbImagePath->TabIndex = 9;
			this->lbImagePath->SelectedIndexChanged += gcnew System::EventHandler(this, &AlphaBetaTransform::lbImagePath_SelectedIndexChanged);
			this->lbImagePath->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AlphaBetaTransform::lbImagePath_MouseMove);
			// 
			// btnLoadImage
			// 
			this->btnLoadImage->Location = System::Drawing::Point(12, 77);
			this->btnLoadImage->Name = L"btnLoadImage";
			this->btnLoadImage->Size = System::Drawing::Size(140, 34);
			this->btnLoadImage->TabIndex = 8;
			this->btnLoadImage->Text = L"Load image path";
			this->btnLoadImage->UseVisualStyleBackColor = true;
			this->btnLoadImage->Click += gcnew System::EventHandler(this, &AlphaBetaTransform::btnLoadImage_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1025, 236);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(64, 13);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Alpha Value";
			// 
			// txtAlphaValue
			// 
			this->txtAlphaValue->Location = System::Drawing::Point(1028, 261);
			this->txtAlphaValue->Name = L"txtAlphaValue";
			this->txtAlphaValue->ReadOnly = true;
			this->txtAlphaValue->Size = System::Drawing::Size(95, 20);
			this->txtAlphaValue->TabIndex = 15;
			this->txtAlphaValue->Text = L"0.5";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1025, 297);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Beta Value";
			// 
			// txtBetaValue
			// 
			this->txtBetaValue->Location = System::Drawing::Point(1028, 322);
			this->txtBetaValue->Name = L"txtBetaValue";
			this->txtBetaValue->ReadOnly = true;
			this->txtBetaValue->Size = System::Drawing::Size(95, 20);
			this->txtBetaValue->TabIndex = 15;
			this->txtBetaValue->Text = L"0.5";
			// 
			// cbCustomAlphaBeta
			// 
			this->cbCustomAlphaBeta->AutoSize = true;
			this->cbCustomAlphaBeta->Location = System::Drawing::Point(1031, 367);
			this->cbCustomAlphaBeta->Name = L"cbCustomAlphaBeta";
			this->cbCustomAlphaBeta->Size = System::Drawing::Size(120, 17);
			this->cbCustomAlphaBeta->TabIndex = 16;
			this->cbCustomAlphaBeta->Text = L"Custom alpha - beta";
			this->cbCustomAlphaBeta->UseVisualStyleBackColor = true;
			this->cbCustomAlphaBeta->CheckedChanged += gcnew System::EventHandler(this, &AlphaBetaTransform::cbCustomAlphaBeta_CheckedChanged);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// AlphaBetaTransform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1738, 673);
			this->Controls->Add(this->cbCustomAlphaBeta);
			this->Controls->Add(this->txtBetaValue);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtAlphaValue);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->picBoxOutput);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picBoxOriginal);
			this->Controls->Add(this->lbImagePath);
			this->Controls->Add(this->btnLoadImage);
			this->Name = L"AlphaBetaTransform";
			this->Text = L"AlphaBetaTransform";
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
private: System::Void cbCustomAlphaBeta_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	// if checked, enable txtGammaValue
	if (this->cbCustomAlphaBeta->Checked)
	{
		this->txtAlphaValue->ReadOnly = false;
		this->txtBetaValue->ReadOnly = false;
	}
	else
	{
		this->txtAlphaValue->ReadOnly = true;
		this->txtBetaValue->ReadOnly = true;
	}
}
};
}
