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
	/// Summary for FormFourierTransformBasic
	/// </summary>
	public ref class FormFourierTransformBasic : public System::Windows::Forms::Form
	{
	public:
		FormFourierTransformBasic(void)
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
		~FormFourierTransformBasic()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnLoadImagePath;
	protected:
	private: System::Windows::Forms::ListBox^ listBoxImagePath;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ picBoxMagnitudeBlueChannel;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ picBoxMagnitudeRedChannel;

	private: System::Windows::Forms::PictureBox^ picBoxMagnitudeGreenChannel;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ picBoxPhaseRedChannel;

	private: System::Windows::Forms::PictureBox^ picBoxPhaseGreenChannel;

	private: System::Windows::Forms::PictureBox^ picBoxPhaseBlueChannel;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ picBoxResultPhaseOnly;

	private: System::Windows::Forms::PictureBox^ picBoxResultInverseDFTImage;


	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ nudCutoffFactor;
	private: System::Windows::Forms::Button^ btnProcess;
	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::PictureBox^ picBoxResultEdgeColor;
	private: System::Windows::Forms::OpenFileDialog^ oFD;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::PictureBox^ picBoxOriginalImage;

	private: System::Windows::Forms::Label^ label10;
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
			this->btnLoadImagePath = (gcnew System::Windows::Forms::Button());
			this->listBoxImagePath = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->picBoxMagnitudeRedChannel = (gcnew System::Windows::Forms::PictureBox());
			this->picBoxMagnitudeGreenChannel = (gcnew System::Windows::Forms::PictureBox());
			this->picBoxMagnitudeBlueChannel = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->picBoxPhaseRedChannel = (gcnew System::Windows::Forms::PictureBox());
			this->picBoxPhaseGreenChannel = (gcnew System::Windows::Forms::PictureBox());
			this->picBoxPhaseBlueChannel = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->picBoxResultPhaseOnly = (gcnew System::Windows::Forms::PictureBox());
			this->picBoxResultInverseDFTImage = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->nudCutoffFactor = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnProcess = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->picBoxResultEdgeColor = (gcnew System::Windows::Forms::PictureBox());
			this->oFD = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->picBoxOriginalImage = (gcnew System::Windows::Forms::PictureBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxMagnitudeRedChannel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxMagnitudeGreenChannel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxMagnitudeBlueChannel))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxPhaseRedChannel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxPhaseGreenChannel))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxPhaseBlueChannel))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxResultPhaseOnly))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxResultInverseDFTImage))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudCutoffFactor))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxResultEdgeColor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->BeginInit();
			this->SuspendLayout();
			// 
			// btnLoadImagePath
			// 
			this->btnLoadImagePath->Location = System::Drawing::Point(12, 22);
			this->btnLoadImagePath->Name = L"btnLoadImagePath";
			this->btnLoadImagePath->Size = System::Drawing::Size(96, 41);
			this->btnLoadImagePath->TabIndex = 0;
			this->btnLoadImagePath->Text = L"Load Image";
			this->btnLoadImagePath->UseVisualStyleBackColor = true;
			this->btnLoadImagePath->Click += gcnew System::EventHandler(this, &FormFourierTransformBasic::btnLoadImagePath_Click);
			// 
			// listBoxImagePath
			// 
			this->listBoxImagePath->FormattingEnabled = true;
			this->listBoxImagePath->Location = System::Drawing::Point(12, 81);
			this->listBoxImagePath->Name = L"listBoxImagePath";
			this->listBoxImagePath->Size = System::Drawing::Size(262, 173);
			this->listBoxImagePath->TabIndex = 1;
			this->listBoxImagePath->SelectedIndexChanged += gcnew System::EventHandler(this, &FormFourierTransformBasic::listBoxImagePath_SelectedIndexChanged);
			this->listBoxImagePath->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormFourierTransformBasic::listBoxImagePath_MouseMove);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->picBoxMagnitudeRedChannel);
			this->groupBox1->Controls->Add(this->picBoxMagnitudeGreenChannel);
			this->groupBox1->Controls->Add(this->picBoxMagnitudeBlueChannel);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(325, 81);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(933, 342);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Magnitude";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(667, 35);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(104, 18);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Red Channel";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(342, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Green Channel";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(107, 18);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Blue Channel";
			// 
			// picBoxMagnitudeRedChannel
			// 
			this->picBoxMagnitudeRedChannel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxMagnitudeRedChannel->Location = System::Drawing::Point(670, 56);
			this->picBoxMagnitudeRedChannel->Name = L"picBoxMagnitudeRedChannel";
			this->picBoxMagnitudeRedChannel->Size = System::Drawing::Size(237, 261);
			this->picBoxMagnitudeRedChannel->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxMagnitudeRedChannel->TabIndex = 0;
			this->picBoxMagnitudeRedChannel->TabStop = false;
			// 
			// picBoxMagnitudeGreenChannel
			// 
			this->picBoxMagnitudeGreenChannel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxMagnitudeGreenChannel->Location = System::Drawing::Point(345, 56);
			this->picBoxMagnitudeGreenChannel->Name = L"picBoxMagnitudeGreenChannel";
			this->picBoxMagnitudeGreenChannel->Size = System::Drawing::Size(237, 261);
			this->picBoxMagnitudeGreenChannel->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxMagnitudeGreenChannel->TabIndex = 0;
			this->picBoxMagnitudeGreenChannel->TabStop = false;
			// 
			// picBoxMagnitudeBlueChannel
			// 
			this->picBoxMagnitudeBlueChannel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxMagnitudeBlueChannel->Location = System::Drawing::Point(18, 56);
			this->picBoxMagnitudeBlueChannel->Name = L"picBoxMagnitudeBlueChannel";
			this->picBoxMagnitudeBlueChannel->Size = System::Drawing::Size(237, 261);
			this->picBoxMagnitudeBlueChannel->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxMagnitudeBlueChannel->TabIndex = 0;
			this->picBoxMagnitudeBlueChannel->TabStop = false;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->picBoxPhaseRedChannel);
			this->groupBox2->Controls->Add(this->picBoxPhaseGreenChannel);
			this->groupBox2->Controls->Add(this->picBoxPhaseBlueChannel);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(325, 458);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(933, 342);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Phase";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(667, 35);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 18);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Red Channel";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(342, 35);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 18);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Green Channel";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 35);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 18);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Blue Channel";
			// 
			// picBoxPhaseRedChannel
			// 
			this->picBoxPhaseRedChannel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxPhaseRedChannel->Location = System::Drawing::Point(670, 56);
			this->picBoxPhaseRedChannel->Name = L"picBoxPhaseRedChannel";
			this->picBoxPhaseRedChannel->Size = System::Drawing::Size(237, 261);
			this->picBoxPhaseRedChannel->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxPhaseRedChannel->TabIndex = 0;
			this->picBoxPhaseRedChannel->TabStop = false;
			// 
			// picBoxPhaseGreenChannel
			// 
			this->picBoxPhaseGreenChannel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxPhaseGreenChannel->Location = System::Drawing::Point(345, 56);
			this->picBoxPhaseGreenChannel->Name = L"picBoxPhaseGreenChannel";
			this->picBoxPhaseGreenChannel->Size = System::Drawing::Size(237, 261);
			this->picBoxPhaseGreenChannel->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxPhaseGreenChannel->TabIndex = 0;
			this->picBoxPhaseGreenChannel->TabStop = false;
			// 
			// picBoxPhaseBlueChannel
			// 
			this->picBoxPhaseBlueChannel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxPhaseBlueChannel->Location = System::Drawing::Point(18, 56);
			this->picBoxPhaseBlueChannel->Name = L"picBoxPhaseBlueChannel";
			this->picBoxPhaseBlueChannel->Size = System::Drawing::Size(237, 261);
			this->picBoxPhaseBlueChannel->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxPhaseBlueChannel->TabIndex = 0;
			this->picBoxPhaseBlueChannel->TabStop = false;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->picBoxResultPhaseOnly);
			this->groupBox3->Controls->Add(this->picBoxResultInverseDFTImage);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(1298, 82);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(307, 718);
			this->groupBox3->TabIndex = 3;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Result";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(41, 412);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(94, 18);
			this->label8->TabIndex = 1;
			this->label8->Text = L"Phase Only";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(41, 35);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(149, 18);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Inverse DFT Image";
			// 
			// picBoxResultPhaseOnly
			// 
			this->picBoxResultPhaseOnly->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxResultPhaseOnly->Location = System::Drawing::Point(44, 433);
			this->picBoxResultPhaseOnly->Name = L"picBoxResultPhaseOnly";
			this->picBoxResultPhaseOnly->Size = System::Drawing::Size(237, 261);
			this->picBoxResultPhaseOnly->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxResultPhaseOnly->TabIndex = 0;
			this->picBoxResultPhaseOnly->TabStop = false;
			// 
			// picBoxResultInverseDFTImage
			// 
			this->picBoxResultInverseDFTImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxResultInverseDFTImage->Location = System::Drawing::Point(44, 56);
			this->picBoxResultInverseDFTImage->Name = L"picBoxResultInverseDFTImage";
			this->picBoxResultInverseDFTImage->Size = System::Drawing::Size(237, 261);
			this->picBoxResultInverseDFTImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxResultInverseDFTImage->TabIndex = 0;
			this->picBoxResultInverseDFTImage->TabStop = false;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label9);
			this->groupBox4->Controls->Add(this->nudCutoffFactor);
			this->groupBox4->Location = System::Drawing::Point(12, 591);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(262, 140);
			this->groupBox4->TabIndex = 8;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Parameters";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(14, 46);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(74, 13);
			this->label9->TabIndex = 5;
			this->label9->Text = L" Cutoff Factor:";
			// 
			// nudCutoffFactor
			// 
			this->nudCutoffFactor->DecimalPlaces = 2;
			this->nudCutoffFactor->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 65536 });
			this->nudCutoffFactor->Location = System::Drawing::Point(94, 44);
			this->nudCutoffFactor->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			this->nudCutoffFactor->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->nudCutoffFactor->Name = L"nudCutoffFactor";
			this->nudCutoffFactor->Size = System::Drawing::Size(55, 20);
			this->nudCutoffFactor->TabIndex = 4;
			this->nudCutoffFactor->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 500, 0, 0, 65536 });
			// 
			// btnProcess
			// 
			this->btnProcess->BackColor = System::Drawing::Color::DarkGreen;
			this->btnProcess->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProcess->ForeColor = System::Drawing::Color::White;
			this->btnProcess->Location = System::Drawing::Point(12, 748);
			this->btnProcess->Name = L"btnProcess";
			this->btnProcess->Size = System::Drawing::Size(262, 52);
			this->btnProcess->TabIndex = 7;
			this->btnProcess->Text = L"Process";
			this->btnProcess->UseVisualStyleBackColor = false;
			this->btnProcess->Click += gcnew System::EventHandler(this, &FormFourierTransformBasic::btnProcess_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label11);
			this->groupBox5->Controls->Add(this->picBoxResultEdgeColor);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(1632, 317);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(307, 341);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Result";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(41, 35);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(93, 18);
			this->label11->TabIndex = 1;
			this->label11->Text = L"Edge Color";
			// 
			// picBoxResultEdgeColor
			// 
			this->picBoxResultEdgeColor->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxResultEdgeColor->Location = System::Drawing::Point(44, 56);
			this->picBoxResultEdgeColor->Name = L"picBoxResultEdgeColor";
			this->picBoxResultEdgeColor->Size = System::Drawing::Size(237, 261);
			this->picBoxResultEdgeColor->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxResultEdgeColor->TabIndex = 0;
			this->picBoxResultEdgeColor->TabStop = false;
			// 
			// oFD
			// 
			this->oFD->FileName = L"openFileDialog1";
			// 
			// picBoxOriginalImage
			// 
			this->picBoxOriginalImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalImage->Location = System::Drawing::Point(12, 303);
			this->picBoxOriginalImage->Name = L"picBoxOriginalImage";
			this->picBoxOriginalImage->Size = System::Drawing::Size(262, 261);
			this->picBoxOriginalImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalImage->TabIndex = 0;
			this->picBoxOriginalImage->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(17, 274);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(116, 18);
			this->label10->TabIndex = 1;
			this->label10->Text = L"Original Image";
			// 
			// FormFourierTransformBasic
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2003, 834);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->btnProcess);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->picBoxOriginalImage);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->listBoxImagePath);
			this->Controls->Add(this->btnLoadImagePath);
			this->Name = L"FormFourierTransformBasic";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormFourierTransformBasic";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxMagnitudeRedChannel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxMagnitudeGreenChannel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxMagnitudeBlueChannel))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxPhaseRedChannel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxPhaseGreenChannel))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxPhaseBlueChannel))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxResultPhaseOnly))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxResultInverseDFTImage))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudCutoffFactor))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxResultEdgeColor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->EndInit();
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
		System::String^ selectedImagePath = this->listBoxImagePath->SelectedItem->ToString();
		//CommonMethods::loadImagePathToPictureBox(this->picBoxOriginalImage, selectedImagePath);

		std::string stdSelectedImagePath = CommonMethods::convertSystemStringToStdString(selectedImagePath);

		cv::Mat originalImage = cv::imread(stdSelectedImagePath);

		if (originalImage.empty()) {
			MessageBox::Show("Failed to load image: " + selectedImagePath, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		CommonMethods::loadCvMatToPictureBox(originalImage, this->picBoxOriginalImage);
	}
	private: System::Void btnProcess_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->listBoxImagePath->SelectedIndex == -1) {
			MessageBox::Show("Please select an image from the list.", "No Image Selected", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			return;
		}

		System::String^ selectedImagePath = this->listBoxImagePath->SelectedItem->ToString();
		std::string stdSelectedImagePath = CommonMethods::convertSystemStringToStdString(selectedImagePath);

		cv::Mat img = cv::imread(stdSelectedImagePath, cv::IMREAD_COLOR);

		if (img.empty()) {
			MessageBox::Show("Failed to load image: " + selectedImagePath, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		float cutoffRadius = static_cast<float>(this->nudCutoffFactor->Value);

		// Split channels
		std::vector<cv::Mat> channels;
		cv::split(img, channels);
		cv::Mat B_Channel = channels[0];
		cv::Mat G_Channel = channels[1];
		cv::Mat R_Channel = channels[2];

		// compute magnitude for each channel
		cv::Mat B_Magnitude = computeDFTMagnitude(B_Channel);
		cv::Mat G_Magnitude = computeDFTMagnitude(G_Channel);
		cv::Mat R_Magnitude = computeDFTMagnitude(R_Channel);

		// compute phase for each channel
		cv::Mat B_Phase = computeDFTPhase(B_Channel);
		cv::Mat G_Phase = computeDFTPhase(G_Channel);
		cv::Mat R_Phase = computeDFTPhase(R_Channel);

		// calculate inverse DFT reconstruction
		cv::Mat resultInverseDFTImage = reconstructColorImageDFT(img);

		// calculate phase-only reconstruction
		cv::Mat resultPhaseOnlyImage;
		std::vector<cv::Mat> phaseOnlyReconstructionChannels = { phaseOnlyReconstruction(B_Channel), phaseOnlyReconstruction(G_Channel), phaseOnlyReconstruction(R_Channel) };
		cv::merge(phaseOnlyReconstructionChannels, resultPhaseOnlyImage);


		// Apply HPF to each channel
		for (int i = 0; i < channels.size(); i++)
		{
			channels[i] = highPassEdgesDFT(channels[i], cutoffRadius);
		}

		// Merge back
		cv::Mat edgesColor;
		cv::merge(channels, edgesColor);


		// load image to picture box
		CommonMethods::loadCvMatToPictureBox(B_Magnitude, this->picBoxMagnitudeBlueChannel);
		CommonMethods::loadCvMatToPictureBox(G_Magnitude, this->picBoxMagnitudeGreenChannel);
		CommonMethods::loadCvMatToPictureBox(R_Magnitude, this->picBoxMagnitudeRedChannel);
		CommonMethods::loadCvMatToPictureBox(B_Phase, this->picBoxPhaseBlueChannel);
		CommonMethods::loadCvMatToPictureBox(G_Phase, this->picBoxPhaseGreenChannel);
		CommonMethods::loadCvMatToPictureBox(R_Phase, this->picBoxPhaseRedChannel);
		CommonMethods::loadCvMatToPictureBox(resultInverseDFTImage, this->picBoxResultInverseDFTImage);
		CommonMethods::loadCvMatToPictureBox(resultPhaseOnlyImage, this->picBoxResultPhaseOnly);
		CommonMethods::loadCvMatToPictureBox(edgesColor, this->picBoxResultEdgeColor);


	}
		   // Shift zero-frequency component to center
	private: void shiftDFT(cv::Mat& magI) {
		// Crop the image so that the number of rows and columns is even.
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

		cv::Mat q0(magI, cv::Rect(0, 0, cx, cy));   // Top - Left
		cv::Mat q1(magI, cv::Rect(cx, 0, cx, cy));  // Top - Right
		cv::Mat q2(magI, cv::Rect(0, cy, cx, cy));  // Bottom - Left
		cv::Mat q3(magI, cv::Rect(cx, cy, cx, cy)); // Bottom - Right

		cv::Mat tmp;

		q0.copyTo(tmp); q3.copyTo(q0); tmp.copyTo(q3);
		q1.copyTo(tmp); q2.copyTo(q1); tmp.copyTo(q2);

	}
	private: cv::Mat forwardDFT(const cv::Mat& channel)
	{
		cv::Mat floatChannel;
		channel.convertTo(floatChannel, CV_32F);

		cv::Mat padded;
		int m = cv::getOptimalDFTSize(channel.rows);
		int n = cv::getOptimalDFTSize(channel.cols);

		cv::copyMakeBorder(floatChannel, padded,
			0, m - channel.rows,
			0, n - channel.cols,
			cv::BORDER_CONSTANT, cv::Scalar::all(0));

		cv::Mat planes[] = {
			padded.clone(),
			cv::Mat::zeros(padded.size(), CV_32F)
		};

		cv::Mat complexMat;
		cv::merge(planes, 2, complexMat);

		cv::dft(complexMat, complexMat);

		return complexMat;
	}
	private: cv::Mat inverseDFT(const cv::Mat& complexI, int originalWidth, int originalHeight)
	{
		cv::Mat inverse;
		cv::idft(complexI, inverse, cv::DFT_REAL_OUTPUT | cv::DFT_SCALE);

		// Crop back to original size
		inverse = inverse(cv::Rect(0, 0, originalWidth, originalHeight));

		// Convert to 8-bit image
		cv::Mat result8U;
		inverse.convertTo(result8U, CV_8U);

		return result8U;
	}
	private: cv::Mat reconstructColorImageDFT(const cv::Mat& img)
	{
		// Split B,G,R channels
		std::vector<cv::Mat> channels;
		cv::split(img, channels);

		// Forward DFT for each channel
		std::vector<cv::Mat> dftChannels(3);
		for (int i = 0; i < 3; i++) {
			dftChannels[i] = forwardDFT(channels[i]);
		}

		// Inverse DFT for each channel
		std::vector<cv::Mat> reconstructed(3);
		for (int i = 0; i < 3; i++) {
			reconstructed[i] = inverseDFT(dftChannels[i], img.cols, img.rows);
		}

		// Merge back to color image
		cv::Mat finalImage;
		cv::merge(reconstructed, finalImage);
		cv::normalize(finalImage, finalImage, 0, 255, cv::NORM_MINMAX);
		finalImage.convertTo(finalImage, CV_8U);

		return finalImage;
	}
	private: std::vector<cv::Mat> getRealAndImaginaryDFT(const cv::Mat& channel) {
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

		return { real, imag };
	}
	private: cv::Mat computeDFTMagnitude(const cv::Mat& channel) {

		cv::Mat real = getRealAndImaginaryDFT(channel)[0];
		cv::Mat imag = getRealAndImaginaryDFT(channel)[1];

		cv::Mat magI;
		cv::magnitude(real, imag, magI);

		// Switch to logarithmic scale
		magI += cv::Scalar::all(1);
		cv::log(magI, magI);

		// Rearrange quadrants
		shiftDFT(magI);

		cv::normalize(magI, magI, 0, 1, cv::NORM_MINMAX);

		return magI;
	}
	private: cv::Mat computeDFTPhase(const cv::Mat& channel) {
		cv::Mat real = getRealAndImaginaryDFT(channel)[0];
		cv::Mat imag = getRealAndImaginaryDFT(channel)[1];

		cv::Mat phaseI;
		cv::phase(real, imag, phaseI);

		shiftDFT(phaseI);
		cv::normalize(phaseI, phaseI, 0, 1, cv::NORM_MINMAX);

		return phaseI; // Return raw phase values
	}
	private: cv::Mat phaseOnlyReconstruction(const cv::Mat& channel)
	{
		cv::Mat real = getRealAndImaginaryDFT(channel)[0];
		cv::Mat imag = getRealAndImaginaryDFT(channel)[1];

		// Compute phase = atan2(imag, real)
		cv::Mat phase;
		cv::phase(real, imag, phase);

		// set all magnitudes = 1
		cv::Mat newReal(real.size(), CV_32F);
		cv::Mat newImag(imag.size(), CV_32F);
		float phi = 0.0f;

		for (int y = 0; y < phase.rows; y++)
		{
			for (int x = 0; x < phase.cols; x++)
			{
				phi = phase.at<float>(y, x);
				newReal.at<float>(y, x) = std::cos(phi);
				newImag.at<float>(y, x) = std::sin(phi);
			}
		}

		// Merge back to complex matrix
		cv::Mat newComplex;
		cv::Mat newPlanes[2] = { newReal, newImag };
		cv::merge(newPlanes, 2, newComplex);

		// Inverse DFT
		cv::Mat inverse;
		cv::idft(newComplex, inverse, cv::DFT_REAL_OUTPUT | cv::DFT_SCALE);

		// Crop back to original size
		inverse = inverse(cv::Rect(0, 0, channel.cols, channel.rows));

		// Normalize for display
		cv::Mat result8u;
		cv::normalize(inverse, result8u, 0, 255, cv::NORM_MINMAX);
		result8u.convertTo(result8u, CV_8U);

		return result8u;
	}
	private: std::vector<cv::Mat> lowPassFilterDFT(const cv::Mat& channel, float cutoffRadius)
	{

		cv::Mat real = getRealAndImaginaryDFT(channel)[0];
		cv::Mat imag = getRealAndImaginaryDFT(channel)[1];

		shiftDFT(real);
		shiftDFT(imag);

		// create low-pass mask
		cv::Mat mask = cv::Mat::zeros(real.size(), CV_32F);

		int cx = real.cols / 2;
		int cy = real.rows / 2;
		float dist = 0.0f;

		for (int y = 0; y < real.rows; y++)
		{
			for (int x = 0; x < real.cols; x++)
			{
				dist = std::sqrt((x - cx) * (x - cx) + (y - cy) * (y - cy));

				if (dist <= cutoffRadius) {
					mask.at<float>(y, x) = 1.0f;
				}
			}
		}

		// Apply mask to real + imag
		real = real.mul(mask);
		imag = imag.mul(mask);

		// Compute magnitude for visualization
		cv::Mat magnitude;
		cv::magnitude(real, imag, magnitude);

		// Optionally zero out low frequencies (inside cutoff) for display
		for (int y = 0; y < magnitude.rows; y++)
		{
			for (int x = 0; x < magnitude.cols; x++)
			{
				dist = std::sqrt((x - cx) * (x - cx) + (y - cy) * (y - cy));
				if (dist > cutoffRadius) {
					magnitude.at<float>(y, x) = 0.0f;
				}
			}
		}

		cv::log(magnitude + 1, magnitude); // Log scale for display
		cv::normalize(magnitude, magnitude, 0, 1, cv::NORM_MINMAX);


		// Shift back before inverse DFT
		shiftDFT(real);
		shiftDFT(imag);

		// Merge real + imaginary back into complex matrix
		cv::Mat filteredComplex;
		cv::Mat filteredPlanes[2] = { real, imag };
		cv::merge(filteredPlanes, 2, filteredComplex);

		// Inverse DFT
		cv::Mat inverse;
		cv::idft(filteredComplex, inverse, cv::DFT_REAL_OUTPUT | cv::DFT_SCALE);

		// Crop to original size
		inverse = inverse(cv::Rect(0, 0, channel.cols, channel.rows));

		// Normalize to 8-bit for display
		cv::Mat result8u;
		cv::normalize(inverse, result8u, 0, 255, cv::NORM_MINMAX);
		result8u.convertTo(result8u, CV_8U);

		return { result8u, magnitude };
	}
	private: std::vector<cv::Mat> highPassFilterDFT(const cv::Mat& channel, float cutoffRadius)
	{
		cv::Mat real = getRealAndImaginaryDFT(channel)[0];
		cv::Mat imag = getRealAndImaginaryDFT(channel)[1];

		// Shift DFT to center
		shiftDFT(real);
		shiftDFT(imag);

		// create high-pass mask
		cv::Mat mask = cv::Mat::zeros(real.size(), CV_32F);
		int cx = real.cols / 2;
		int cy = real.rows / 2;
		float dist = 0.0f;

		for (int y = 0; y < real.rows; y++)
		{
			for (int x = 0; x < real.cols; x++)
			{
				dist = std::sqrt((x - cx) * (x - cx) + (y - cy) * (y - cy));
				if (dist >= cutoffRadius) {
					mask.at<float>(y, x) = 1.0f;
				}
			}
		}

		// Apply mask
		real = real.mul(mask);
		imag = imag.mul(mask);

		// Compute magnitude for visualization (black low frequencies)
		cv::Mat magnitude;
		cv::magnitude(real, imag, magnitude);

		// remove low frequencies (inside cutoff) for display
		for (int y = 0; y < magnitude.rows; y++)
		{
			for (int x = 0; x < magnitude.cols; x++)
			{
				dist = std::sqrt((x - cx) * (x - cx) + (y - cy) * (y - cy));
				if (dist < cutoffRadius) {
					magnitude.at<float>(y, x) = 0.0f;
				}
			}
		}

		cv::log(magnitude + 1, magnitude); // Log scale for display
		cv::normalize(magnitude, magnitude, 0, 1, cv::NORM_MINMAX);


		// Shift back before inverse DFT
		shiftDFT(real);
		shiftDFT(imag);

		// Merge back and inverse DFT
		cv::Mat filteredComplex;
		cv::Mat filteredPlanes[2] = { real, imag };
		cv::merge(filteredPlanes, 2, filteredComplex);

		cv::Mat inverse;
		cv::idft(filteredComplex, inverse, cv::DFT_REAL_OUTPUT | cv::DFT_SCALE);

		// Crop to original size
		inverse = inverse(cv::Rect(0, 0, channel.cols, channel.rows));

		// Normalize for display
		cv::Mat result8u;
		cv::normalize(inverse, result8u, 0, 255, cv::NORM_MINMAX);
		result8u.convertTo(result8u, CV_8U);

		return { result8u, magnitude };
	}
	private: cv::Mat highPassEdgesDFT(const cv::Mat& channel, float cutoffRadius)
	{
		std::vector<cv::Mat> planes = getRealAndImaginaryDFT(channel);
		cv::Mat real = planes[0];
		cv::Mat imag = planes[1];

		// Shift DFT to center
		shiftDFT(real);
		shiftDFT(imag);

		// Create high-pass mask
		cv::Mat mask = cv::Mat::zeros(real.size(), CV_32F);
		int cx = real.cols / 2;
		int cy = real.rows / 2;

		for (int y = 0; y < real.rows; y++) {
			for (int x = 0; x < real.cols; x++) {
				if (std::sqrt((x - cx) * (x - cx) + (y - cy) * (y - cy)) >= cutoffRadius) {
					mask.at<float>(y, x) = 1.0f;
				}
			}
		}

		// Apply mask
		real = real.mul(mask);
		imag = imag.mul(mask);

		// Shift back before inverse DFT
		shiftDFT(real);
		shiftDFT(imag);

		cv::Mat complexFiltered;
		cv::Mat filteredPlanes[2] = { real, imag };
		cv::merge(filteredPlanes, 2, complexFiltered);

		// Inverse DFT
		cv::Mat inverse;
		cv::idft(complexFiltered, inverse, cv::DFT_REAL_OUTPUT | cv::DFT_SCALE);

		// Crop to original size
		inverse = inverse(cv::Rect(0, 0, channel.cols, channel.rows));

		// Take absolute value to highlight edges
		cv::Mat edgeImage = cv::abs(inverse);

		// Normalize and convert to 8-bit
		cv::normalize(edgeImage, edgeImage, 0, 255, cv::NORM_MINMAX);
		edgeImage.convertTo(edgeImage, CV_8U);

		// Optional: threshold to make edges pure white
		cv::threshold(edgeImage, edgeImage, 50, 255, cv::THRESH_BINARY);

		return edgeImage;
	}
	};
}
