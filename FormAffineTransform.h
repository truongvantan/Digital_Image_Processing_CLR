#pragma once
#define _USE_MATH_DEFINES
#include "Common.h"
#include <cmath>

namespace DigitalImageProcessingCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//cv::Mat origin;
	/// <summary>
	/// Summary for FormAffineTransform
	/// </summary>
	public ref class FormAffineTransform : public System::Windows::Forms::Form
	{
	public:
		FormAffineTransform(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->MouseWheel += gcnew MouseEventHandler(this, &FormAffineTransform::OnMouseWheelScrolled);
			this->picBoxOriginalImage->MouseEnter += gcnew EventHandler(this, &FormAffineTransform::OnMouseEnterPictureBox);
			origin = new cv::Mat();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormAffineTransform()
		{
			if (components)
			{
				delete components;
			}
			if (origin != nullptr) {
				delete origin;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^ oFD;
	private: System::Windows::Forms::Button^ btnLoadImage;
	private: System::Windows::Forms::ListBox^ listBoxImagePath;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ picBoxOriginalImage;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::PictureBox^ picBoxShearing;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::PictureBox^ picBoxScaling;

	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::PictureBox^ picBoxRotation;

	private: System::Windows::Forms::GroupBox^ groupBox5;
	private: System::Windows::Forms::PictureBox^ picBoxTranslation;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Button^ btnApplyAffineTransform;
	private: System::Windows::Forms::NumericUpDown^ nudTx;
	private: System::Windows::Forms::NumericUpDown^ nudTy;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::NumericUpDown^ nudScaleY;

	private: System::Windows::Forms::NumericUpDown^ nudScaleX;
	private: System::Windows::Forms::NumericUpDown^ nudRotationDegree;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ nudShearingY;
	private: System::Windows::Forms::NumericUpDown^ nudShearingX;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::NumericUpDown^ nudRotationCenterY;
	private: System::Windows::Forms::NumericUpDown^ nudRotationCenterX;
	private: System::Windows::Forms::GroupBox^ groupBox6;
	private: System::Windows::Forms::PictureBox^ picBoxCombineAllTransform;
















	private: System::ComponentModel::IContainer^ components;
	private:
		cv::Mat* origin;
		double gAngleDegree = 0.0;
	private: System::Windows::Forms::Button^ btnRotate;

	private:
		double scaleFactor = 1.0;

		void OnMouseWheelScrolled(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			if (e->Delta > 0) {
				scaleFactor *= 1.1;
			}
			else {
				scaleFactor /= 1.1;
			}
			std::cout << "scale factor: " << scaleFactor << std::endl;
			nudScaleX->Text = CommonMethods::convertStdStringToSystemString(std::to_string(scaleFactor));
			nudScaleY->Text = CommonMethods::convertStdStringToSystemString(std::to_string(scaleFactor));
			applyScaling1(origin);
		}
		void OnMouseEnterPictureBox(System::Object^ sender, System::EventArgs^ e) {
			this->picBoxOriginalImage->Focus();
		}

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
			this->oFD = (gcnew System::Windows::Forms::OpenFileDialog());
			this->btnLoadImage = (gcnew System::Windows::Forms::Button());
			this->listBoxImagePath = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnApplyAffineTransform = (gcnew System::Windows::Forms::Button());
			this->picBoxOriginalImage = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->nudShearingY = (gcnew System::Windows::Forms::NumericUpDown());
			this->picBoxShearing = (gcnew System::Windows::Forms::PictureBox());
			this->nudShearingX = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->nudScaleY = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudScaleX = (gcnew System::Windows::Forms::NumericUpDown());
			this->picBoxScaling = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->btnRotate = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->picBoxRotation = (gcnew System::Windows::Forms::PictureBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->nudRotationDegree = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudRotationCenterY = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->nudRotationCenterX = (gcnew System::Windows::Forms::NumericUpDown());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->nudTy = (gcnew System::Windows::Forms::NumericUpDown());
			this->nudTx = (gcnew System::Windows::Forms::NumericUpDown());
			this->picBoxTranslation = (gcnew System::Windows::Forms::PictureBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->picBoxCombineAllTransform = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudShearingY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxShearing))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudShearingX))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudScaleY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudScaleX))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxScaling))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxRotation))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRotationDegree))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRotationCenterY))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRotationCenterX))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudTy))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudTx))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxTranslation))->BeginInit();
			this->groupBox6->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxCombineAllTransform))->BeginInit();
			this->SuspendLayout();
			// 
			// btnLoadImage
			// 
			this->btnLoadImage->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLoadImage->Location = System::Drawing::Point(28, 17);
			this->btnLoadImage->Name = L"btnLoadImage";
			this->btnLoadImage->Size = System::Drawing::Size(134, 40);
			this->btnLoadImage->TabIndex = 0;
			this->btnLoadImage->Text = L"Load Image";
			this->btnLoadImage->UseVisualStyleBackColor = true;
			this->btnLoadImage->Click += gcnew System::EventHandler(this, &FormAffineTransform::btnLoadImage_Click);
			// 
			// listBoxImagePath
			// 
			this->listBoxImagePath->FormattingEnabled = true;
			this->listBoxImagePath->Location = System::Drawing::Point(31, 75);
			this->listBoxImagePath->Name = L"listBoxImagePath";
			this->listBoxImagePath->Size = System::Drawing::Size(307, 797);
			this->listBoxImagePath->TabIndex = 1;
			this->listBoxImagePath->SelectedValueChanged += gcnew System::EventHandler(this, &FormAffineTransform::listBoxImagePath_SelectedValueChanged);
			this->listBoxImagePath->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormAffineTransform::listBoxImagePath_MouseMove);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btnApplyAffineTransform);
			this->groupBox1->Controls->Add(this->picBoxOriginalImage);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->groupBox4);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->groupBox5);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(367, 73);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1446, 798);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Affine Transform";
			// 
			// btnApplyAffineTransform
			// 
			this->btnApplyAffineTransform->BackColor = System::Drawing::Color::Green;
			this->btnApplyAffineTransform->ForeColor = System::Drawing::Color::White;
			this->btnApplyAffineTransform->Location = System::Drawing::Point(89, 549);
			this->btnApplyAffineTransform->Name = L"btnApplyAffineTransform";
			this->btnApplyAffineTransform->Size = System::Drawing::Size(203, 60);
			this->btnApplyAffineTransform->TabIndex = 11;
			this->btnApplyAffineTransform->Text = L"Apply Affine Transform";
			this->btnApplyAffineTransform->UseVisualStyleBackColor = false;
			this->btnApplyAffineTransform->Click += gcnew System::EventHandler(this, &FormAffineTransform::btnApplyAffineTransform_Click);
			// 
			// picBoxOriginalImage
			// 
			this->picBoxOriginalImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalImage->Location = System::Drawing::Point(18, 212);
			this->picBoxOriginalImage->Name = L"picBoxOriginalImage";
			this->picBoxOriginalImage->Size = System::Drawing::Size(325, 308);
			this->picBoxOriginalImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalImage->TabIndex = 5;
			this->picBoxOriginalImage->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(18, 189);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Original Image";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->nudShearingY);
			this->groupBox4->Controls->Add(this->picBoxShearing);
			this->groupBox4->Controls->Add(this->nudShearingX);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Controls->Add(this->label7);
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(983, 417);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(445, 375);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Shearing";
			// 
			// nudShearingY
			// 
			this->nudShearingY->DecimalPlaces = 2;
			this->nudShearingY->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->nudShearingY->Location = System::Drawing::Point(350, 231);
			this->nudShearingY->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1005, 0, 0, 131072 });
			this->nudShearingY->Name = L"nudShearingY";
			this->nudShearingY->Size = System::Drawing::Size(69, 26);
			this->nudShearingY->TabIndex = 12;
			this->nudShearingY->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 131072 });
			// 
			// picBoxShearing
			// 
			this->picBoxShearing->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxShearing->Location = System::Drawing::Point(6, 39);
			this->picBoxShearing->Name = L"picBoxShearing";
			this->picBoxShearing->Size = System::Drawing::Size(325, 308);
			this->picBoxShearing->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxShearing->TabIndex = 2;
			this->picBoxShearing->TabStop = false;
			// 
			// nudShearingX
			// 
			this->nudShearingX->DecimalPlaces = 2;
			this->nudShearingX->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->nudShearingX->Location = System::Drawing::Point(350, 132);
			this->nudShearingX->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1005, 0, 0, 131072 });
			this->nudShearingX->Name = L"nudShearingX";
			this->nudShearingX->Size = System::Drawing::Size(69, 26);
			this->nudShearingX->TabIndex = 12;
			this->nudShearingX->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 131072 });
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(348, 200);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(83, 18);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Shearing Y:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(347, 100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 18);
			this->label7->TabIndex = 4;
			this->label7->Text = L"Shearing X:";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->nudScaleY);
			this->groupBox3->Controls->Add(this->nudScaleX);
			this->groupBox3->Controls->Add(this->picBoxScaling);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(446, 417);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(445, 375);
			this->groupBox3->TabIndex = 8;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Scaling";
			// 
			// nudScaleY
			// 
			this->nudScaleY->DecimalPlaces = 2;
			this->nudScaleY->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->nudScaleY->Location = System::Drawing::Point(354, 231);
			this->nudScaleY->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->nudScaleY->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->nudScaleY->Name = L"nudScaleY";
			this->nudScaleY->Size = System::Drawing::Size(69, 26);
			this->nudScaleY->TabIndex = 12;
			this->nudScaleY->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 65536 });
			// 
			// nudScaleX
			// 
			this->nudScaleX->DecimalPlaces = 2;
			this->nudScaleX->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->nudScaleX->Location = System::Drawing::Point(354, 132);
			this->nudScaleX->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->nudScaleX->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, System::Int32::MinValue });
			this->nudScaleX->Name = L"nudScaleX";
			this->nudScaleX->Size = System::Drawing::Size(69, 26);
			this->nudScaleX->TabIndex = 12;
			this->nudScaleX->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 65536 });
			// 
			// picBoxScaling
			// 
			this->picBoxScaling->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxScaling->Location = System::Drawing::Point(6, 39);
			this->picBoxScaling->Name = L"picBoxScaling";
			this->picBoxScaling->Size = System::Drawing::Size(325, 308);
			this->picBoxScaling->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxScaling->TabIndex = 2;
			this->picBoxScaling->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(352, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(62, 18);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Scale Y:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(351, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(63, 18);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Scale X:";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->btnRotate);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->picBoxRotation);
			this->groupBox2->Controls->Add(this->label9);
			this->groupBox2->Controls->Add(this->nudRotationDegree);
			this->groupBox2->Controls->Add(this->nudRotationCenterY);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->nudRotationCenterX);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(983, 19);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(445, 375);
			this->groupBox2->TabIndex = 9;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Rotation";
			// 
			// btnRotate
			// 
			this->btnRotate->BackColor = System::Drawing::Color::Green;
			this->btnRotate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnRotate->ForeColor = System::Drawing::Color::White;
			this->btnRotate->Location = System::Drawing::Point(344, 39);
			this->btnRotate->Name = L"btnRotate";
			this->btnRotate->Size = System::Drawing::Size(95, 39);
			this->btnRotate->TabIndex = 11;
			this->btnRotate->Text = L"Rotate 90";
			this->btnRotate->UseVisualStyleBackColor = false;
			this->btnRotate->Click += gcnew System::EventHandler(this, &FormAffineTransform::btnRotate_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(348, 241);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(69, 18);
			this->label10->TabIndex = 4;
			this->label10->Text = L"Center Y:";
			// 
			// picBoxRotation
			// 
			this->picBoxRotation->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxRotation->Location = System::Drawing::Point(6, 39);
			this->picBoxRotation->Name = L"picBoxRotation";
			this->picBoxRotation->Size = System::Drawing::Size(325, 308);
			this->picBoxRotation->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxRotation->TabIndex = 2;
			this->picBoxRotation->TabStop = false;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(349, 174);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(70, 18);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Center X:";
			// 
			// nudRotationDegree
			// 
			this->nudRotationDegree->DecimalPlaces = 2;
			this->nudRotationDegree->Location = System::Drawing::Point(350, 130);
			this->nudRotationDegree->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 360, 0, 0, 0 });
			this->nudRotationDegree->Name = L"nudRotationDegree";
			this->nudRotationDegree->Size = System::Drawing::Size(69, 26);
			this->nudRotationDegree->TabIndex = 12;
			// 
			// nudRotationCenterY
			// 
			this->nudRotationCenterY->Location = System::Drawing::Point(351, 262);
			this->nudRotationCenterY->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 400, 0, 0, 0 });
			this->nudRotationCenterY->Name = L"nudRotationCenterY";
			this->nudRotationCenterY->Size = System::Drawing::Size(73, 26);
			this->nudRotationCenterY->TabIndex = 3;
			this->nudRotationCenterY->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(347, 98);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 18);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Degree:";
			// 
			// nudRotationCenterX
			// 
			this->nudRotationCenterX->Location = System::Drawing::Point(351, 195);
			this->nudRotationCenterX->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 400, 0, 0, 0 });
			this->nudRotationCenterX->Name = L"nudRotationCenterX";
			this->nudRotationCenterX->Size = System::Drawing::Size(73, 26);
			this->nudRotationCenterX->TabIndex = 3;
			this->nudRotationCenterX->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 200, 0, 0, 0 });
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->label3);
			this->groupBox5->Controls->Add(this->label2);
			this->groupBox5->Controls->Add(this->nudTy);
			this->groupBox5->Controls->Add(this->nudTx);
			this->groupBox5->Controls->Add(this->picBoxTranslation);
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(446, 19);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(445, 375);
			this->groupBox5->TabIndex = 10;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Translation";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(351, 214);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(28, 18);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ty:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(352, 147);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Tx:";
			// 
			// nudTy
			// 
			this->nudTy->Location = System::Drawing::Point(354, 235);
			this->nudTy->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->nudTy->Name = L"nudTy";
			this->nudTy->Size = System::Drawing::Size(73, 26);
			this->nudTy->TabIndex = 3;
			this->nudTy->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			// 
			// nudTx
			// 
			this->nudTx->Location = System::Drawing::Point(354, 168);
			this->nudTx->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->nudTx->Name = L"nudTx";
			this->nudTx->Size = System::Drawing::Size(73, 26);
			this->nudTx->TabIndex = 3;
			this->nudTx->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			// 
			// picBoxTranslation
			// 
			this->picBoxTranslation->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxTranslation->Location = System::Drawing::Point(6, 39);
			this->picBoxTranslation->Name = L"picBoxTranslation";
			this->picBoxTranslation->Size = System::Drawing::Size(325, 308);
			this->picBoxTranslation->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxTranslation->TabIndex = 2;
			this->picBoxTranslation->TabStop = false;
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->picBoxCombineAllTransform);
			this->groupBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox6->Location = System::Drawing::Point(1883, 343);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(350, 375);
			this->groupBox6->TabIndex = 9;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Combine All Transform";
			// 
			// picBoxCombineAllTransform
			// 
			this->picBoxCombineAllTransform->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxCombineAllTransform->Location = System::Drawing::Point(6, 39);
			this->picBoxCombineAllTransform->Name = L"picBoxCombineAllTransform";
			this->picBoxCombineAllTransform->Size = System::Drawing::Size(325, 308);
			this->picBoxCombineAllTransform->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxCombineAllTransform->TabIndex = 2;
			this->picBoxCombineAllTransform->TabStop = false;
			// 
			// FormAffineTransform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(2284, 885);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->listBoxImagePath);
			this->Controls->Add(this->btnLoadImage);
			this->Controls->Add(this->groupBox6);
			this->Name = L"FormAffineTransform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormAffineTransform";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudShearingY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxShearing))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudShearingX))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudScaleY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudScaleX))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxScaling))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxRotation))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRotationDegree))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRotationCenterY))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudRotationCenterX))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudTy))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudTx))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxTranslation))->EndInit();
			this->groupBox6->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxCombineAllTransform))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnLoadImage_Click(System::Object^ sender, System::EventArgs^ e) {
		CommonMethods::loadImagePathToListBox(oFD, listBoxImagePath);
	}


	private: System::Void listBoxImagePath_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		CommonMethods::showTooltipInListBoxItem(listBoxImagePath, toolTip1, e);
	}
	private: System::Void listBoxImagePath_SelectedValueChanged(System::Object^ sender, System::EventArgs^ e) {
		System::String^ imagePathSelected = listBoxImagePath->SelectedItem->ToString();
		CommonMethods::loadImagePathToPictureBox(picBoxOriginalImage, imagePathSelected);
	}
	private: System::Void btnApplyAffineTransform_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string originalImagePath = CommonMethods::convertSystemStringToStdString(listBoxImagePath->SelectedItem->ToString());
		cv::Mat originalMat = cv::imread(originalImagePath);

		if (originalMat.empty()) {
			MessageBox::Show("Cannot read image by OpenCV");
			return;
		}

		cv::resize(originalMat, originalMat, cv::Size(400, 400));
		*origin = originalMat.clone();

		applyTranslation(originalMat);
		applyRotation(originalMat);
		applyScaling(originalMat);
		applyShearing(originalMat);
		applyAllTransform(originalMat);
	}
	private: void applyAllTransform(cv::Mat originalMat) {
		//------------------- translation -------------------------
		double tX = Double::Parse(nudTx->Text);
		double tY = Double::Parse(nudTy->Text);
		cv::Mat translationMatrix = getTranslationMatrix(tX, tY);

		//------------------- Rotation -------------------------
		double angleDegree = Double::Parse(nudRotationDegree->Text);
		double cx = Double::Parse(nudRotationCenterX->Text);
		double cy = Double::Parse(nudRotationCenterY->Text);
		cv::Mat rotationMatrix = getRotationMatrix(angleDegree, cx, cy);

		//------------------- Scaling -------------------------
		double scaleX = Double::Parse(nudScaleX->Text);
		double scaleY = Double::Parse(nudScaleY->Text);
		cv::Mat scaleMatrix = getScalingMatrix(scaleX, scaleY);

		//------------------- Shearing -------------------------
		double shX = Double::Parse(nudShearingX->Text);
		double shY = Double::Parse(nudShearingY->Text);

		cv::Mat shearingMatrix = getShearMatrix(shX, shY, originalMat);

		int newWidth = originalMat.cols + (int)std::abs(shX * originalMat.rows);
		int newHeight = originalMat.rows + (int)std::abs(shY * originalMat.cols);

		// Combine into a single affine matrix
		cv::Mat combineTransformMatrix = combineAffine(translationMatrix, rotationMatrix, scaleMatrix, shearingMatrix);

		cv::Mat output = applyAffineManual(originalMat, newHeight, newWidth, combineTransformMatrix);

		CommonMethods::loadCvMatToPictureBox(output, picBoxCombineAllTransform);
	}

	private: void applyTranslation(cv::Mat originalMat) {
		double tX = Double::Parse(nudTx->Text);
		double tY = Double::Parse(nudTy->Text);

		cv::Mat translationMatrix = getTranslationMatrix(tX, tY);

		cv::Mat output = applyAffineManual(originalMat, originalMat.rows, originalMat.cols, translationMatrix);

		CommonMethods::loadCvMatToPictureBox(output, picBoxTranslation);

	}

	private: void applyRotation(cv::Mat originalMat) {
		double angleDegree = Double::Parse(nudRotationDegree->Text);
		/*double cx = originalMat.rows / 2;
		double cy = originalMat.cols / 2;*/

		double cx = Double::Parse(nudRotationCenterX->Text);
		double cy = Double::Parse(nudRotationCenterY->Text);

		cv::Mat rotationMatrix = getRotationMatrix(angleDegree, cx, cy);
		cv::Mat output = applyAffineManual(originalMat, originalMat.rows, originalMat.cols, rotationMatrix);

		CommonMethods::loadCvMatToPictureBox(output, picBoxRotation);

	}

	private: void applyScaling1(cv::Mat* originalMat) {
		/*double scaleX = Double::Parse(nudScaleX->Text);
		double scaleY = Double::Parse(nudScaleY->Text);*/

		double scaleX = scaleFactor;
		double scaleY = scaleFactor;

		cv::Mat scaleMatrix = getScalingMatrix(scaleX, scaleY);
		int rows = originalMat->rows;
		int cols = originalMat->cols;

		cv::Mat output = applyAffineManual1(originalMat, rows, cols, scaleMatrix);

		CommonMethods::loadCvMatToPictureBox(output, picBoxScaling);
	}

	private: void applyScaling(cv::Mat originalMat) {
		/*double scaleX = Double::Parse(nudScaleX->Text);
		double scaleY = Double::Parse(nudScaleY->Text);*/

		double scaleX = scaleFactor;
		double scaleY = scaleFactor;

		cv::Mat scaleMatrix = getScalingMatrix(scaleX, scaleY);

		cv::Mat output = applyAffineManual(originalMat, originalMat.rows, originalMat.cols, scaleMatrix);

		CommonMethods::loadCvMatToPictureBox(output, picBoxScaling);
	}

	private: void applyShearing(cv::Mat originalMat) {
		double shX = Double::Parse(nudShearingX->Text);
		double shY = Double::Parse(nudShearingY->Text);

		cv::Mat shearingMatrix = getShearMatrix(shX, shY, originalMat);

		int newWidth = originalMat.cols + (int)std::abs(shX * originalMat.rows);
		int newHeight = originalMat.rows + (int)std::abs(shY * originalMat.cols);

		cv::Mat output = applyAffineManual(originalMat, newHeight, newWidth, shearingMatrix);



		CommonMethods::loadCvMatToPictureBox(output, picBoxShearing);
	}

	private: cv::Mat applyAffineManual1(const cv::Mat* input, int rows, int cols, const cv::Mat& affineMatrix) {
		//int rows = input.rows;
		//int cols = input.cols;

		cv::Mat output = cv::Mat::zeros(rows, cols, input->type());
		cv::Mat M3x3 = toHomogeneous(affineMatrix);
		cv::Mat Minv = M3x3.inv();

		/*std::cout << "Matrix M3x3:\n" << cv::format(M3x3, cv::Formatter::FMT_NUMPY) << std::endl;
		std::cout << "Matrix Minv:\n" << cv::format(Minv, cv::Formatter::FMT_NUMPY) << std::endl;*/

		double x = 0.0;
		double y = 0.0;

		for (int y2 = 0; y2 < rows; y2++) {
			for (int x2 = 0; x2 < cols; x2++) {
				x = Minv.at<double>(0, 0) * x2 + Minv.at<double>(0, 1) * y2 + Minv.at<double>(0, 2);
				y = Minv.at<double>(1, 0) * x2 + Minv.at<double>(1, 1) * y2 + Minv.at<double>(1, 2);

				int xi = std::round(x);
				int yi = std::round(y);

				if (isInRange(xi, yi, input->cols, input->rows)) {
					output.at<cv::Vec3b>(y2, x2) = input->at<cv::Vec3b>(yi, xi);
				}
			}
		}
		return output;
	}
	private: cv::Mat applyAffineManual(const cv::Mat& input, int rows, int cols, const cv::Mat& affineMatrix) {
		//int rows = input.rows;
		//int cols = input.cols;

		cv::Mat output = cv::Mat::zeros(rows, cols, input.type());
		cv::Mat M3x3 = toHomogeneous(affineMatrix);
		cv::Mat Minv = M3x3.inv();

		//std::cout << "Matrix M3x3:\n" << cv::format(M3x3, cv::Formatter::FMT_NUMPY) << std::endl;
		//std::cout << "Matrix Minv:\n" << cv::format(Minv, cv::Formatter::FMT_NUMPY) << std::endl;

		double x = 0.0;
		double y = 0.0;

		for (int y2 = 0; y2 < rows; y2++) {
			for (int x2 = 0; x2 < cols; x2++) {
				x = Minv.at<double>(0, 0) * x2 + Minv.at<double>(0, 1) * y2 + Minv.at<double>(0, 2);
				y = Minv.at<double>(1, 0) * x2 + Minv.at<double>(1, 1) * y2 + Minv.at<double>(1, 2);

				int xi = std::round(x);
				int yi = std::round(y);

				if (isInRange(xi, yi, input.cols, input.rows)) {
					output.at<cv::Vec3b>(y2, x2) = input.at<cv::Vec3b>(yi, xi);
				}
			}
		}
		return output;
	}
		   // Multiply transformations in this order: T * R * S * Sh
	private: cv::Mat combineAffine(const cv::Mat& T, const cv::Mat& R,
		const cv::Mat& S, const cv::Mat& Sh) {
		cv::Mat Th = toHomogeneous(T);
		cv::Mat Rh = toHomogeneous(R);
		cv::Mat Shh = toHomogeneous(S);
		cv::Mat Shx = toHomogeneous(Sh);

		cv::Mat M = Th * Rh * Shh * Shx; // final 3x3 matrix
		return M(cv::Rect(0, 0, 3, 2)).clone(); // back to 2x3
	}
		   // Create Shearing matrix
	private: cv::Mat getShearMatrix(double shx, double shy, cv::Mat image) {
		double tx = (shx > 0) ? 0 : std::abs(shx * image.rows);
		double ty = (shy > 0) ? 0 : std::abs(shy * image.cols);

		return (cv::Mat_<double>(2, 3) <<
			1, shx, tx,
			shy, 1, ty);
	}
		   // Create Translation matrix
	private: cv::Mat getTranslationMatrix(double tx, double ty) {
		return (cv::Mat_<double>(2, 3) <<
			1, 0, tx,
			0, 1, ty);
	}
		   // Create Rotation matrix (around origin)
	private:  cv::Mat getRotationMatrix(double angleDegrees, double cx, double cy) {
		double theta = angleDegrees * CV_PI / 180.0;
		double cosA = cos(theta);
		double sinA = sin(theta);
		double tX = (1 - cosA) * cx + sinA * cy;
		double tY = cy - cx * sinA - cy * cosA;

		return (cv::Mat_<double>(2, 3) <<
			cosA, -sinA, tX,
			sinA, cosA, tY);
	}
		   // Create Scaling matrix
	private:  cv::Mat getScalingMatrix(double sx, double sy) {
		return (cv::Mat_<double>(2, 3) <<
			sx, 0, 0,
			0, sy, 0);
	}

		   // Clamp coordinate inside image bounds
	private: bool isInRange(int x, int y, int width, int height) {
		return (x >= 0 && x < width && y >= 0 && y < height);
	}

		   // Convert 2x3 affine to 3x3 homogeneous matrix
	private: cv::Mat toHomogeneous(const cv::Mat& A) {
		cv::Mat H = cv::Mat::eye(3, 3, CV_64F);
		A.copyTo(H(cv::Rect(0, 0, 3, 2)));
		return H;
	}

	private: System::Void btnRotate_Click(System::Object^ sender, System::EventArgs^ e) {
		double angleDegree = 90;
		/*double cx = originalMat.rows / 2;
		double cy = originalMat.cols / 2;*/
		gAngleDegree += angleDegree;
		if (gAngleDegree >= 360.0) {
			gAngleDegree = 0.0;
		}
		nudRotationDegree->Text = CommonMethods::convertStdStringToSystemString(std::to_string(gAngleDegree));


		double cx = Double::Parse(nudRotationCenterX->Text);
		double cy = Double::Parse(nudRotationCenterY->Text);

		cv::Mat rotationMatrix = getRotationMatrix(gAngleDegree, cx, cy);
		cv::Mat output = applyAffineManual1(origin, origin->rows, origin->cols, rotationMatrix);

		CommonMethods::loadCvMatToPictureBox(output, picBoxRotation);
	}
	};
}
