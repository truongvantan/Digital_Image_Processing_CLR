#pragma once
#include "Common.h"     
#include <stdlib.h>

namespace DigitalImageProcessingCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormFourierTransform
	/// </summary>
	public ref class FormFourierTransform : public System::Windows::Forms::Form
	{
	public:
		FormFourierTransform(void)
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
		~FormFourierTransform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label2;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ picBoxOriginalMagnitude_G;

	private: System::Windows::Forms::PictureBox^ picBoxOriginalImage;
	private: System::Windows::Forms::ListBox^ listBoxImagePath;
	private: System::Windows::Forms::Button^ btnLoadImagePath;
	private: System::Windows::Forms::OpenFileDialog^ oFD;
	private: System::Windows::Forms::ToolTip^ toolTip1;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ picBoxOriginalMagnitude_R;









	private: System::Windows::Forms::PictureBox^ picBoxOutputEnhancedImage;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ btnProcess;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ txtBrightnessEstimation;

	private: System::Windows::Forms::TextBox^ txtStructuralSharpness;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::NumericUpDown^ nudSharpnessThreshold;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::NumericUpDown^ nudSVDGainFactor;
	private: System::Windows::Forms::NumericUpDown^ nudBilateralFilterDiameter;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::NumericUpDown^ nudBilateralFilterSigmaColor;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::NumericUpDown^ nudBilateralFilterSigmaSpace;

	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::PictureBox^ picBoxOriginalMagnitude_B;

	private: System::Windows::Forms::Label^ label15;


	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::PictureBox^ picBoxEnhancedMagnitude_G;
	private: System::Windows::Forms::PictureBox^ picBoxEnhancedMagnitude_R;


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::PictureBox^ picBoxEnhancedMagnitude_B;

	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::PictureBox^ picBoxOriginalHistogram;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ picBoxEnhancedHistogram;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ lbMessage;



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
			this->picBoxOriginalMagnitude_G = (gcnew System::Windows::Forms::PictureBox());
			this->picBoxOriginalImage = (gcnew System::Windows::Forms::PictureBox());
			this->listBoxImagePath = (gcnew System::Windows::Forms::ListBox());
			this->btnLoadImagePath = (gcnew System::Windows::Forms::Button());
			this->oFD = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->picBoxOriginalMagnitude_R = (gcnew System::Windows::Forms::PictureBox());
			this->picBoxOutputEnhancedImage = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btnProcess = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->txtBrightnessEstimation = (gcnew System::Windows::Forms::TextBox());
			this->txtStructuralSharpness = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->nudSVDGainFactor = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->nudSharpnessThreshold = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudBilateralFilterDiameter = (gcnew System::Windows::Forms::NumericUpDown());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->nudBilateralFilterSigmaColor = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->nudBilateralFilterSigmaSpace = (gcnew System::Windows::Forms::NumericUpDown());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->picBoxOriginalMagnitude_B = (gcnew System::Windows::Forms::PictureBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->picBoxOriginalHistogram = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->picBoxEnhancedMagnitude_G = (gcnew System::Windows::Forms::PictureBox());
			this->picBoxEnhancedHistogram = (gcnew System::Windows::Forms::PictureBox());
			this->picBoxEnhancedMagnitude_R = (gcnew System::Windows::Forms::PictureBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->picBoxEnhancedMagnitude_B = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->lbMessage = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalMagnitude_G))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalMagnitude_R))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOutputEnhancedImage))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudSVDGainFactor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudSharpnessThreshold))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBilateralFilterDiameter))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBilateralFilterSigmaColor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBilateralFilterSigmaSpace))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalMagnitude_B))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalHistogram))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxEnhancedMagnitude_G))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxEnhancedHistogram))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxEnhancedMagnitude_R))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxEnhancedMagnitude_B))->BeginInit();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(342, 27);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 18);
			this->label2->TabIndex = 12;
			this->label2->Text = L"G Channel Magnitude";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(10, 245);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 20);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Original Image";
			// 
			// picBoxOriginalMagnitude_G
			// 
			this->picBoxOriginalMagnitude_G->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalMagnitude_G->Location = System::Drawing::Point(346, 50);
			this->picBoxOriginalMagnitude_G->Name = L"picBoxOriginalMagnitude_G";
			this->picBoxOriginalMagnitude_G->Size = System::Drawing::Size(280, 293);
			this->picBoxOriginalMagnitude_G->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalMagnitude_G->TabIndex = 8;
			this->picBoxOriginalMagnitude_G->TabStop = false;
			// 
			// picBoxOriginalImage
			// 
			this->picBoxOriginalImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalImage->Location = System::Drawing::Point(14, 268);
			this->picBoxOriginalImage->Name = L"picBoxOriginalImage";
			this->picBoxOriginalImage->Size = System::Drawing::Size(280, 293);
			this->picBoxOriginalImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalImage->TabIndex = 9;
			this->picBoxOriginalImage->TabStop = false;
			// 
			// listBoxImagePath
			// 
			this->listBoxImagePath->FormattingEnabled = true;
			this->listBoxImagePath->Location = System::Drawing::Point(12, 74);
			this->listBoxImagePath->Name = L"listBoxImagePath";
			this->listBoxImagePath->Size = System::Drawing::Size(282, 147);
			this->listBoxImagePath->TabIndex = 7;
			this->listBoxImagePath->SelectedIndexChanged += gcnew System::EventHandler(this, &FormFourierTransform::listBoxImagePath_SelectedIndexChanged);
			this->listBoxImagePath->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormFourierTransform::listBoxImagePath_MouseMove);
			// 
			// btnLoadImagePath
			// 
			this->btnLoadImagePath->Location = System::Drawing::Point(12, 15);
			this->btnLoadImagePath->Name = L"btnLoadImagePath";
			this->btnLoadImagePath->Size = System::Drawing::Size(127, 44);
			this->btnLoadImagePath->TabIndex = 6;
			this->btnLoadImagePath->Text = L"Load Image";
			this->btnLoadImagePath->UseVisualStyleBackColor = true;
			this->btnLoadImagePath->Click += gcnew System::EventHandler(this, &FormFourierTransform::btnLoadImagePath_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(661, 27);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(168, 18);
			this->label3->TabIndex = 14;
			this->label3->Text = L"R Channel Magnitude";
			// 
			// picBoxOriginalMagnitude_R
			// 
			this->picBoxOriginalMagnitude_R->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalMagnitude_R->Location = System::Drawing::Point(665, 50);
			this->picBoxOriginalMagnitude_R->Name = L"picBoxOriginalMagnitude_R";
			this->picBoxOriginalMagnitude_R->Size = System::Drawing::Size(280, 293);
			this->picBoxOriginalMagnitude_R->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalMagnitude_R->TabIndex = 10;
			this->picBoxOriginalMagnitude_R->TabStop = false;
			// 
			// picBoxOutputEnhancedImage
			// 
			this->picBoxOutputEnhancedImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOutputEnhancedImage->Location = System::Drawing::Point(957, 821);
			this->picBoxOutputEnhancedImage->Name = L"picBoxOutputEnhancedImage";
			this->picBoxOutputEnhancedImage->Size = System::Drawing::Size(280, 293);
			this->picBoxOutputEnhancedImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOutputEnhancedImage->TabIndex = 9;
			this->picBoxOutputEnhancedImage->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(953, 798);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(145, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Enhanced Image";
			// 
			// btnProcess
			// 
			this->btnProcess->BackColor = System::Drawing::Color::Green;
			this->btnProcess->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProcess->ForeColor = System::Drawing::Color::White;
			this->btnProcess->Location = System::Drawing::Point(171, 15);
			this->btnProcess->Name = L"btnProcess";
			this->btnProcess->Size = System::Drawing::Size(127, 44);
			this->btnProcess->TabIndex = 6;
			this->btnProcess->Text = L"Process";
			this->btnProcess->UseVisualStyleBackColor = false;
			this->btnProcess->Click += gcnew System::EventHandler(this, &FormFourierTransform::btnProcess_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->txtBrightnessEstimation);
			this->groupBox1->Controls->Add(this->txtStructuralSharpness);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->nudSVDGainFactor);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->nudSharpnessThreshold);
			this->groupBox1->Location = System::Drawing::Point(14, 585);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(283, 201);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Parameters";
			// 
			// txtBrightnessEstimation
			// 
			this->txtBrightnessEstimation->Location = System::Drawing::Point(181, 36);
			this->txtBrightnessEstimation->Name = L"txtBrightnessEstimation";
			this->txtBrightnessEstimation->ReadOnly = true;
			this->txtBrightnessEstimation->Size = System::Drawing::Size(61, 20);
			this->txtBrightnessEstimation->TabIndex = 19;
			// 
			// txtStructuralSharpness
			// 
			this->txtStructuralSharpness->Location = System::Drawing::Point(181, 76);
			this->txtStructuralSharpness->Name = L"txtStructuralSharpness";
			this->txtStructuralSharpness->ReadOnly = true;
			this->txtStructuralSharpness->Size = System::Drawing::Size(61, 20);
			this->txtStructuralSharpness->TabIndex = 19;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(15, 39);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(138, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Brightness Estimation (muy):";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 79);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(123, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Structural Sharpness (v):";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(15, 163);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(85, 13);
			this->label11->TabIndex = 17;
			this->label11->Text = L"SVD gain factor:";
			// 
			// nudSVDGainFactor
			// 
			this->nudSVDGainFactor->DecimalPlaces = 2;
			this->nudSVDGainFactor->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->nudSVDGainFactor->Location = System::Drawing::Point(181, 161);
			this->nudSVDGainFactor->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->nudSVDGainFactor->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->nudSVDGainFactor->Name = L"nudSVDGainFactor";
			this->nudSVDGainFactor->Size = System::Drawing::Size(61, 20);
			this->nudSVDGainFactor->TabIndex = 18;
			this->nudSVDGainFactor->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 900, 0, 0, 131072 });
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(15, 120);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(110, 13);
			this->label10->TabIndex = 17;
			this->label10->Text = L"Sharpness Threshold:";
			// 
			// nudSharpnessThreshold
			// 
			this->nudSharpnessThreshold->DecimalPlaces = 2;
			this->nudSharpnessThreshold->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->nudSharpnessThreshold->Location = System::Drawing::Point(181, 118);
			this->nudSharpnessThreshold->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->nudSharpnessThreshold->Name = L"nudSharpnessThreshold";
			this->nudSharpnessThreshold->Size = System::Drawing::Size(61, 20);
			this->nudSharpnessThreshold->TabIndex = 18;
			this->nudSharpnessThreshold->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			// 
			// nudBilateralFilterDiameter
			// 
			this->nudBilateralFilterDiameter->Location = System::Drawing::Point(105, 38);
			this->nudBilateralFilterDiameter->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			this->nudBilateralFilterDiameter->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudBilateralFilterDiameter->Name = L"nudBilateralFilterDiameter";
			this->nudBilateralFilterDiameter->Size = System::Drawing::Size(61, 20);
			this->nudBilateralFilterDiameter->TabIndex = 18;
			this->nudBilateralFilterDiameter->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 7, 0, 0, 0 });
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(26, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 13);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Diameter:";
			// 
			// nudBilateralFilterSigmaColor
			// 
			this->nudBilateralFilterSigmaColor->DecimalPlaces = 2;
			this->nudBilateralFilterSigmaColor->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->nudBilateralFilterSigmaColor->Location = System::Drawing::Point(105, 79);
			this->nudBilateralFilterSigmaColor->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->nudBilateralFilterSigmaColor->Name = L"nudBilateralFilterSigmaColor";
			this->nudBilateralFilterSigmaColor->Size = System::Drawing::Size(61, 20);
			this->nudBilateralFilterSigmaColor->TabIndex = 18;
			this->nudBilateralFilterSigmaColor->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(26, 81);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(66, 13);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Sigma Color:";
			// 
			// nudBilateralFilterSigmaSpace
			// 
			this->nudBilateralFilterSigmaSpace->DecimalPlaces = 2;
			this->nudBilateralFilterSigmaSpace->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->nudBilateralFilterSigmaSpace->Location = System::Drawing::Point(105, 123);
			this->nudBilateralFilterSigmaSpace->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->nudBilateralFilterSigmaSpace->Name = L"nudBilateralFilterSigmaSpace";
			this->nudBilateralFilterSigmaSpace->Size = System::Drawing::Size(61, 20);
			this->nudBilateralFilterSigmaSpace->TabIndex = 18;
			this->nudBilateralFilterSigmaSpace->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(26, 127);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(73, 13);
			this->label14->TabIndex = 17;
			this->label14->Text = L"Sigma Space:";
			// 
			// picBoxOriginalMagnitude_B
			// 
			this->picBoxOriginalMagnitude_B->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalMagnitude_B->Location = System::Drawing::Point(27, 50);
			this->picBoxOriginalMagnitude_B->Name = L"picBoxOriginalMagnitude_B";
			this->picBoxOriginalMagnitude_B->Size = System::Drawing::Size(280, 293);
			this->picBoxOriginalMagnitude_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalMagnitude_B->TabIndex = 8;
			this->picBoxOriginalMagnitude_B->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(23, 27);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(167, 18);
			this->label15->TabIndex = 12;
			this->label15->Text = L"B Channel Magnitude";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->picBoxOriginalMagnitude_G);
			this->groupBox2->Controls->Add(this->picBoxOriginalHistogram);
			this->groupBox2->Controls->Add(this->picBoxOriginalMagnitude_R);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label15);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->picBoxOriginalMagnitude_B);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(331, 14);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1524, 358);
			this->groupBox2->TabIndex = 20;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Original";
			// 
			// picBoxOriginalHistogram
			// 
			this->picBoxOriginalHistogram->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalHistogram->Location = System::Drawing::Point(968, 50);
			this->picBoxOriginalHistogram->Name = L"picBoxOriginalHistogram";
			this->picBoxOriginalHistogram->Size = System::Drawing::Size(514, 293);
			this->picBoxOriginalHistogram->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalHistogram->TabIndex = 10;
			this->picBoxOriginalHistogram->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(964, 27);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(86, 18);
			this->label5->TabIndex = 14;
			this->label5->Text = L"Histogram";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->picBoxEnhancedMagnitude_G);
			this->groupBox3->Controls->Add(this->picBoxEnhancedHistogram);
			this->groupBox3->Controls->Add(this->picBoxEnhancedMagnitude_R);
			this->groupBox3->Controls->Add(this->label17);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label16);
			this->groupBox3->Controls->Add(this->picBoxEnhancedMagnitude_B);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(331, 428);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1524, 358);
			this->groupBox3->TabIndex = 20;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Enhanced";
			// 
			// picBoxEnhancedMagnitude_G
			// 
			this->picBoxEnhancedMagnitude_G->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxEnhancedMagnitude_G->Location = System::Drawing::Point(345, 50);
			this->picBoxEnhancedMagnitude_G->Name = L"picBoxEnhancedMagnitude_G";
			this->picBoxEnhancedMagnitude_G->Size = System::Drawing::Size(280, 293);
			this->picBoxEnhancedMagnitude_G->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxEnhancedMagnitude_G->TabIndex = 8;
			this->picBoxEnhancedMagnitude_G->TabStop = false;
			// 
			// picBoxEnhancedHistogram
			// 
			this->picBoxEnhancedHistogram->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxEnhancedHistogram->Location = System::Drawing::Point(968, 50);
			this->picBoxEnhancedHistogram->Name = L"picBoxEnhancedHistogram";
			this->picBoxEnhancedHistogram->Size = System::Drawing::Size(514, 293);
			this->picBoxEnhancedHistogram->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxEnhancedHistogram->TabIndex = 10;
			this->picBoxEnhancedHistogram->TabStop = false;
			// 
			// picBoxEnhancedMagnitude_R
			// 
			this->picBoxEnhancedMagnitude_R->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxEnhancedMagnitude_R->Location = System::Drawing::Point(664, 50);
			this->picBoxEnhancedMagnitude_R->Name = L"picBoxEnhancedMagnitude_R";
			this->picBoxEnhancedMagnitude_R->Size = System::Drawing::Size(280, 293);
			this->picBoxEnhancedMagnitude_R->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxEnhancedMagnitude_R->TabIndex = 10;
			this->picBoxEnhancedMagnitude_R->TabStop = false;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(964, 27);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(86, 18);
			this->label17->TabIndex = 14;
			this->label17->Text = L"Histogram";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(23, 27);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(167, 18);
			this->label4->TabIndex = 12;
			this->label4->Text = L"B Channel Magnitude";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(660, 27);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(168, 18);
			this->label6->TabIndex = 14;
			this->label6->Text = L"R Channel Magnitude";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(341, 27);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(169, 18);
			this->label16->TabIndex = 12;
			this->label16->Text = L"G Channel Magnitude";
			// 
			// picBoxEnhancedMagnitude_B
			// 
			this->picBoxEnhancedMagnitude_B->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxEnhancedMagnitude_B->Location = System::Drawing::Point(27, 50);
			this->picBoxEnhancedMagnitude_B->Name = L"picBoxEnhancedMagnitude_B";
			this->picBoxEnhancedMagnitude_B->Size = System::Drawing::Size(280, 293);
			this->picBoxEnhancedMagnitude_B->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxEnhancedMagnitude_B->TabIndex = 8;
			this->picBoxEnhancedMagnitude_B->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label12);
			this->groupBox4->Controls->Add(this->nudBilateralFilterDiameter);
			this->groupBox4->Controls->Add(this->label13);
			this->groupBox4->Controls->Add(this->nudBilateralFilterSigmaColor);
			this->groupBox4->Controls->Add(this->label14);
			this->groupBox4->Controls->Add(this->nudBilateralFilterSigmaSpace);
			this->groupBox4->Location = System::Drawing::Point(12, 821);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(286, 206);
			this->groupBox4->TabIndex = 19;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Bilateral Filter";
			// 
			// lbMessage
			// 
			this->lbMessage->AutoSize = true;
			this->lbMessage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbMessage->Location = System::Drawing::Point(953, 396);
			this->lbMessage->Name = L"lbMessage";
			this->lbMessage->Size = System::Drawing::Size(0, 20);
			this->lbMessage->TabIndex = 13;
			// 
			// FormFourierTransform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1908, 1163);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->lbMessage);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picBoxOutputEnhancedImage);
			this->Controls->Add(this->picBoxOriginalImage);
			this->Controls->Add(this->listBoxImagePath);
			this->Controls->Add(this->btnProcess);
			this->Controls->Add(this->btnLoadImagePath);
			this->Name = L"FormFourierTransform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormFourierTransform";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalMagnitude_G))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalMagnitude_R))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOutputEnhancedImage))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudSVDGainFactor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudSharpnessThreshold))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBilateralFilterDiameter))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBilateralFilterSigmaColor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudBilateralFilterSigmaSpace))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalMagnitude_B))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalHistogram))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxEnhancedMagnitude_G))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxEnhancedHistogram))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxEnhancedMagnitude_R))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxEnhancedMagnitude_B))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
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
		txtBrightnessEstimation->Text = "";
		txtStructuralSharpness->Text = "";
		this->lbMessage->Text = "";

		CommonMethods::cleanPictureBox(this->picBoxOriginalImage);
		CommonMethods::cleanPictureBox(this->picBoxOriginalMagnitude_B);
		CommonMethods::cleanPictureBox(this->picBoxOriginalMagnitude_G);
		CommonMethods::cleanPictureBox(this->picBoxOriginalMagnitude_R);
		CommonMethods::cleanPictureBox(this->picBoxEnhancedMagnitude_B);
		CommonMethods::cleanPictureBox(this->picBoxEnhancedMagnitude_G);
		CommonMethods::cleanPictureBox(this->picBoxEnhancedMagnitude_R);
		CommonMethods::cleanPictureBox(this->picBoxOriginalHistogram);
		CommonMethods::cleanPictureBox(this->picBoxEnhancedHistogram);
		CommonMethods::cleanPictureBox(this->picBoxOutputEnhancedImage);

		System::String^ selectedImagePath = this->listBoxImagePath->SelectedItem->ToString();
		CommonMethods::loadImagePathToPictureBox(this->picBoxOriginalImage, selectedImagePath);
	}

	private: System::Void btnProcess_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->listBoxImagePath->SelectedIndex < 0)
		{
			MessageBox::Show("Please select an image from the list.", "No Image Selected", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}
		System::String^ selectedImagePath = this->listBoxImagePath->SelectedItem->ToString();
		std::string stdSelectedImagePath = CommonMethods::convertSystemStringToStdString(selectedImagePath);
		processImage(stdSelectedImagePath);

	}
	private: void processImage(std::string stdSelectedImagePath) {
		// Read image
		cv::Mat originalColorImage = cv::imread(stdSelectedImagePath, cv::IMREAD_COLOR);
		if (originalColorImage.empty()) {
			System::Windows::Forms::MessageBox::Show("Failed to load image.", "Error", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
			return;
		}

		// Convert to grayscale
		cv::Mat grayImg;
		cv::cvtColor(originalColorImage, grayImg, cv::COLOR_BGR2GRAY);


		// Convert to float 64F
		grayImg.convertTo(grayImg, CV_32F);

		// Compute spatial clarity metrics
		// Brightness Estimation (muy)
		double brightnessEstimation = cv::mean(grayImg)[0];
		txtBrightnessEstimation->Text = brightnessEstimation.ToString("F2");

		// Structural Sharpness (v): mean absolute value of Laplacian
		cv::Mat laplacianKernel = (cv::Mat_<double>(3, 3) << 0, -1, 0,
			-1, 4, -1,
			0, -1, 0);
		cv::Mat laplacianImg;
		cv::filter2D(grayImg, laplacianImg, CV_32F, laplacianKernel);

		double structuralSharpness = cv::mean(cv::abs(laplacianImg))[0];
		txtStructuralSharpness->Text = structuralSharpness.ToString("F2");

		double sharpnessThreshold = static_cast<double>(nudSharpnessThreshold->Value);

		// Split original color image to B, G, R channel
		std::vector<cv::Mat> bgrChannels;
		cv::split(originalColorImage, bgrChannels);
		cv::Mat B_channel = bgrChannels[0];
		cv::Mat G_channel = bgrChannels[1];
		cv::Mat R_channel = bgrChannels[2];

		// Convert each channel to float
		B_channel.convertTo(B_channel, CV_32F);
		G_channel.convertTo(G_channel, CV_32F);
		R_channel.convertTo(R_channel, CV_32F);

		// Compute original magnitude for each channel
		cv::Mat original_B_ChannelMagnitude = computeMagnitudeAndPhase(B_channel)[0];
		cv::Mat original_G_ChannelMagnitude = computeMagnitudeAndPhase(G_channel)[0];
		cv::Mat original_R_ChannelMagnitude = computeMagnitudeAndPhase(R_channel)[0];

		double minVal, maxVal;
		cv::minMaxLoc(original_B_ChannelMagnitude, &minVal, &maxVal);
		System::Diagnostics::Debug::WriteLine("Original B Magnitude Range Min: " + minVal + ", Max: " + maxVal);
		cv::minMaxLoc(original_G_ChannelMagnitude, &minVal, &maxVal);
		System::Diagnostics::Debug::WriteLine("Original G Magnitude Range Min: " + minVal + ", Max: " + maxVal);
		cv::minMaxLoc(original_R_ChannelMagnitude, &minVal, &maxVal);
		System::Diagnostics::Debug::WriteLine("Original R Magnitude Range Min: " + minVal + ", Max: " + maxVal);

		// Compute original phase for each channel
		cv::Mat original_B_ChannelPhase = computeMagnitudeAndPhase(B_channel)[1];
		cv::Mat original_G_ChannelPhase = computeMagnitudeAndPhase(G_channel)[1];
		cv::Mat original_R_ChannelPhase = computeMagnitudeAndPhase(R_channel)[1];

		// Display original magnitude and phase for each channel
		/*cv::imshow("original_B_ChannelMagnitude", normalizePhaseAndMagnitudeForDisplay(original_B_ChannelMagnitude));
		cv::imshow("original_G_ChannelMagnitude", normalizePhaseAndMagnitudeForDisplay(original_G_ChannelMagnitude));
		cv::imshow("original_R_ChannelMagnitude", normalizePhaseAndMagnitudeForDisplay(original_R_ChannelMagnitude));

		cv::imshow("original_B_ChannelPhase", normalizePhaseAndMagnitudeForDisplay(original_B_ChannelPhase));
		cv::imshow("original_G_ChannelPhase", normalizePhaseAndMagnitudeForDisplay(original_G_ChannelPhase));
		cv::imshow("original_R_ChannelPhase", normalizePhaseAndMagnitudeForDisplay(original_R_ChannelPhase));*/

		CommonMethods::loadCvMatToPictureBox(normalizePhaseAndMagnitudeForDisplay(original_B_ChannelMagnitude), this->picBoxOriginalMagnitude_B);
		CommonMethods::loadCvMatToPictureBox(normalizePhaseAndMagnitudeForDisplay(original_G_ChannelMagnitude), this->picBoxOriginalMagnitude_G);
		CommonMethods::loadCvMatToPictureBox(normalizePhaseAndMagnitudeForDisplay(original_R_ChannelMagnitude), this->picBoxOriginalMagnitude_R);

		cv::Mat originalHistogram = CommonMethods::getHistogramMatrix(originalColorImage);
		CommonMethods::loadCvMatToPictureBox(originalHistogram, this->picBoxOriginalHistogram);


		// If structural sharpness > sharpnessThreshold -> apply gaussian smoothing for each channel
		if (structuralSharpness > sharpnessThreshold) {
			const double sigma = 1.2;
			const int gaussKernelSize = 5;
			cv::Mat colorImageGaussianBlur = cv::Mat(originalColorImage.size(), originalColorImage.type());

			cv::GaussianBlur(B_channel, B_channel, cv::Size(gaussKernelSize, gaussKernelSize), sigma);
			cv::GaussianBlur(G_channel, G_channel, cv::Size(gaussKernelSize, gaussKernelSize), sigma);
			cv::GaussianBlur(G_channel, G_channel, cv::Size(gaussKernelSize, gaussKernelSize), sigma);
		}

		if (brightnessEstimation >= 70) { // Bright image
			System::Windows::Forms::MessageBox::Show("Bright image. Don't apply enhanced magnitude SVD", "Information", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Information);
			this->lbMessage->Text = "Bright image. Don't apply enhanced magnitude SVD";
			return;
		}

		this->lbMessage->Text = "Dark image. Applied enhanced magnitude SVD";

		// Enhance magnitude using SVD for each channel
		double svdGainFactor = static_cast<double>(nudSVDGainFactor->Value);
		cv::Mat enhancedMagnitude_B_channel = enhanceMagnitudeSVD(original_B_ChannelMagnitude, svdGainFactor);
		cv::Mat enhancedMagnitude_G_channel = enhanceMagnitudeSVD(original_G_ChannelMagnitude, svdGainFactor);
		cv::Mat enhancedMagnitude_R_channel = enhanceMagnitudeSVD(original_R_ChannelMagnitude, svdGainFactor);

		cv::minMaxLoc(enhancedMagnitude_B_channel, &minVal, &maxVal);
		System::Diagnostics::Debug::WriteLine("Enhanced B Magnitude Range Min: " + minVal + ", Max: " + maxVal);
		cv::minMaxLoc(enhancedMagnitude_G_channel, &minVal, &maxVal);
		System::Diagnostics::Debug::WriteLine("Enhanced G Magnitude Range Min: " + minVal + ", Max: " + maxVal);
		cv::minMaxLoc(enhancedMagnitude_R_channel, &minVal, &maxVal);
		System::Diagnostics::Debug::WriteLine("Enhanced R Magnitude Range Min: " + minVal + ", Max: " + maxVal);


		/*cv::imshow("enhancedMagnitude_B_channel", normalizePhaseAndMagnitudeForDisplay(enhancedMagnitude_B_channel));
		cv::imshow("enhancedMagnitude_G_channel", normalizePhaseAndMagnitudeForDisplay(enhancedMagnitude_G_channel));
		cv::imshow("enhancedMagnitude_R_channel", normalizePhaseAndMagnitudeForDisplay(enhancedMagnitude_R_channel));*/

		CommonMethods::loadCvMatToPictureBox(normalizePhaseAndMagnitudeForDisplay(enhancedMagnitude_B_channel), this->picBoxEnhancedMagnitude_B);
		CommonMethods::loadCvMatToPictureBox(normalizePhaseAndMagnitudeForDisplay(enhancedMagnitude_G_channel), this->picBoxEnhancedMagnitude_G);
		CommonMethods::loadCvMatToPictureBox(normalizePhaseAndMagnitudeForDisplay(enhancedMagnitude_R_channel), this->picBoxEnhancedMagnitude_R);

		// Smooth phase spectrum
		cv::Mat smoothPhaseSpectrum_B_channel = smoothPhaseSpectrum(original_B_ChannelPhase);
		cv::Mat smoothPhaseSpectrum_G_channel = smoothPhaseSpectrum(original_G_ChannelPhase);
		cv::Mat smoothPhaseSpectrum_R_channel = smoothPhaseSpectrum(original_R_ChannelPhase);

		// Recombine magnitude and phase
		// Build complex spectra for each color channel
		/*cv::Mat complex_B = buildComplexSpectrum(enhancedMagnitude_B_channel,
			original_B_ChannelPhase);

		cv::Mat complex_G = buildComplexSpectrum(enhancedMagnitude_G_channel,
			original_G_ChannelPhase);

		cv::Mat complex_R = buildComplexSpectrum(enhancedMagnitude_R_channel,
			original_R_ChannelPhase);*/

		cv::Mat complex_B = buildComplexSpectrum(enhancedMagnitude_B_channel,
			smoothPhaseSpectrum_B_channel);

		cv::Mat complex_G = buildComplexSpectrum(enhancedMagnitude_G_channel,
			smoothPhaseSpectrum_G_channel);

		cv::Mat complex_R = buildComplexSpectrum(enhancedMagnitude_R_channel,
			smoothPhaseSpectrum_R_channel);

		// Apply inverse DFT for each channel
		/*cv::Mat spatial_B, spatial_G, spatial_R;*/

		/*cv::dft(complex_B, spatial_B, cv::DFT_INVERSE | cv::DFT_REAL_OUTPUT | cv::DFT_SCALE);
		cv::dft(complex_G, spatial_G, cv::DFT_INVERSE | cv::DFT_REAL_OUTPUT | cv::DFT_SCALE);
		cv::dft(complex_R, spatial_R, cv::DFT_INVERSE | cv::DFT_REAL_OUTPUT | cv::DFT_SCALE);*/

		cv::Mat spatial_B = inverseDFT(complex_B, originalColorImage);
		cv::Mat spatial_G = inverseDFT(complex_G, originalColorImage);
		cv::Mat spatial_R = inverseDFT(complex_R, originalColorImage);

		// Normalize and merge back to BGR
		cv::Mat B_out, G_out, R_out;

		spatial_B.convertTo(B_out, CV_8U);
		spatial_G.convertTo(G_out, CV_8U);
		spatial_R.convertTo(R_out, CV_8U);

		std::vector<cv::Mat> channels = { B_out, G_out, R_out };
		cv::Mat finalResult;
		cv::merge(channels, finalResult);

		finalResult = applyBilateralFilter(finalResult);
		cv::Mat enhancedImageHistogram = CommonMethods::getHistogramMatrix(finalResult);

		CommonMethods::loadCvMatToPictureBox(finalResult, this->picBoxOutputEnhancedImage);
		CommonMethods::loadCvMatToPictureBox(enhancedImageHistogram, this->picBoxEnhancedHistogram);
	}

	private: cv::Mat applyBilateralFilter(const cv::Mat& mat) {
		int diameter = static_cast<int>(this->nudBilateralFilterDiameter->Value);
		double sigmaColor = static_cast<double>(this->nudBilateralFilterSigmaColor->Value);
		double sigmaSpace = static_cast<double>(this->nudBilateralFilterSigmaSpace->Value);

		cv::Mat dst;
		cv::bilateralFilter(mat, dst, diameter, sigmaColor, sigmaSpace, cv::BORDER_DEFAULT);
		//cv::medianBlur(mat, dst, diameter);

		// Define a sharpening kernel
		cv::Mat kernel = (cv::Mat_<float>(3, 3) <<
			0, -1, 0,
			-1, 5, -1,
			0, -1, 0);

		cv::Mat sharpened_image;
		cv::filter2D(dst, sharpened_image, -1, kernel);

		return dst;
	}

	private: cv::Mat inverseDFT(const cv::Mat& complexI, const cv::Mat& originalImage)
	{
		cv::Mat inverse;
		cv::idft(complexI, inverse, cv::DFT_REAL_OUTPUT | cv::DFT_SCALE);

		// Crop back to original size
		inverse = inverse(cv::Rect(0, 0, originalImage.cols, originalImage.rows));

		return inverse;
	}

	private: cv::Mat buildComplexSpectrum(const cv::Mat& magnitude, const cv::Mat& phase)
	{
		cv::Mat real, imag;

		// Convert magnitude + phase into cartesian (real and imag)
		cv::polarToCart(magnitude, phase, real, imag);

		// Pack into CV_32FC2: [real, imag]
		cv::Mat complexImg;
		cv::Mat channels[] = { real, imag };
		cv::merge(channels, 2, complexImg);

		return complexImg;
	}

	private: cv::Mat smoothPhaseSpectrum(const cv::Mat& phase) {
		float highFreqDamping = 0.1f;
		// Step 1: Convert phase -> cos/sin (unit circle)
		cv::Mat mag = cv::Mat::ones(phase.size(), phase.type());
		cv::Mat phase_cos, phase_sin;
		cv::polarToCart(mag, phase, phase_cos, phase_sin);

		// Step 2: Apply light Gaussian blur with very small sigma
		cv::Mat smooth_cos, smooth_sin;
		cv::GaussianBlur(phase_cos, smooth_cos, cv::Size(5, 5), 31.0);
		cv::GaussianBlur(phase_sin, smooth_sin, cv::Size(5, 5), 31.0);

		// Step 3: Mix original and smoothed vectors
		// This dampens high-frequency noise slightly but preserves edges
		smooth_cos = (1.0f - highFreqDamping) * phase_cos + highFreqDamping * smooth_cos;
		smooth_sin = (1.0f - highFreqDamping) * phase_sin + highFreqDamping * smooth_sin;

		// Step 4: Normalize vectors
		cv::Mat magNorm;
		cv::magnitude(smooth_cos, smooth_sin, magNorm);
		magNorm += 1e-8f;
		smooth_cos /= magNorm;
		smooth_sin /= magNorm;

		// Step 5: Convert back to phase
		cv::Mat dummy_mag, smooth_phase;
		cv::cartToPolar(smooth_cos, smooth_sin, dummy_mag, smooth_phase);

		return smooth_phase;
	}

	private: cv::Mat enhanceMagnitudeSVD(const cv::Mat& originaChannelMagnitude, double svdGainFactor) {
		cv::Mat U, W, Vt, W_enhance;

		cv::SVD::compute(originaChannelMagnitude, W, U, Vt, cv::SVD::FULL_UV);
		W_enhance = createSVDSigmaEnhance(U, W, Vt, svdGainFactor);
		cv::Mat enhancedChannelMagnitude = U * W_enhance * Vt;

		return enhancedChannelMagnitude;
	}

	private: cv::Mat createSVDSigmaEnhance(const cv::Mat& U, const cv::Mat& W, const cv::Mat& Vt, const double svdGainFactor) {
		cv::Mat W_enhance = cv::Mat::zeros(U.cols, Vt.rows, CV_32F);

		for (int i = 0; i < W.rows; i++) {
			W_enhance.at<float>(i, i) = W.at<float>(i) * svdGainFactor;
			//W_enhance.at<float>(i, i) = 1;
		}

		return W_enhance;
	}
	private: std::vector<cv::Mat> computeMagnitudeAndPhase(const cv::Mat& channel) {
		// Convert input to float
		cv::Mat floatChannel;
		channel.convertTo(floatChannel, CV_32F);

		// Expand to optimal size
		cv::Mat padded;
		int m = cv::getOptimalDFTSize(floatChannel.rows);
		int n = cv::getOptimalDFTSize(floatChannel.cols);

		cv::copyMakeBorder(floatChannel, padded, 0, m - floatChannel.rows, 0, n - floatChannel.cols,
			cv::BORDER_CONSTANT, cv::Scalar::all(0));

		// Create complex matrix
		cv::Mat planes[] = { cv::Mat_<float>(padded), cv::Mat::zeros(padded.size(), CV_32F) };
		cv::Mat complexMat;
		cv::merge(planes, 2, complexMat);

		// DFT
		cv::dft(complexMat, complexMat);

		cv::split(complexMat, planes);

		cv::Mat real = planes[0];
		cv::Mat imag = planes[1];

		cv::Mat magI;
		cv::magnitude(real, imag, magI);
		cv::Mat phaseI;
		cv::phase(real, imag, phaseI);

		//shiftDFT(magI);
		//shiftDFT(phaseI);

		return { magI, phaseI };
	}

	private: cv::Mat normalizePhaseAndMagnitudeForDisplay(const cv::Mat& mat) {
		cv::Mat matClone = mat.clone();

		matClone += cv::Scalar::all(1);                    // switch to logarithmic scale
		cv::log(matClone, matClone);

		shiftDFT(matClone);

		cv::Mat result;
		cv::normalize(matClone, result, 0, 1, cv::NORM_MINMAX);
		return result;
	}

		   // Shift zero-frequency component to center
	private: void shiftDFT(cv::Mat& magI) {
		// Crop the image
		int newRows = magI.rows;
		int newCols = magI.cols;

		if (newRows % 2 != 0) {
			newRows -= 1;
		}

		if (newCols % 2 != 0) {
			newCols -= 1;
		}

		magI = magI(cv::Rect(0, 0, newCols, newRows));

		int cx = magI.cols / 2;
		int cy = magI.rows / 2;

		cv::Mat q0(magI, cv::Rect(0, 0, cx, cy));   // Top-Left
		cv::Mat q1(magI, cv::Rect(cx, 0, cx, cy));  // Top-Right
		cv::Mat q2(magI, cv::Rect(0, cy, cx, cy));  // Bottom-Left
		cv::Mat q3(magI, cv::Rect(cx, cy, cx, cy)); // Bottom-Right

		cv::Mat tmp;

		// Swap quadrants (Top-Left with Bottom-Right)
		q0.copyTo(tmp);
		q3.copyTo(q0);
		tmp.copyTo(q3);

		// Swap quadrants (Top-Right with Bottom-Left)
		q1.copyTo(tmp);
		q2.copyTo(q1);
		tmp.copyTo(q2);
	}

		   // Helper: prepare for display (8-bit)
	private: cv::Mat prepareForDisplay(const cv::Mat& input) {
		cv::Mat displayMat;
		input.convertTo(displayMat, CV_8U);
		return displayMat;
	}


	}; // class FormFourierTransform
} // namespace DigitalImageProcessingCLR
