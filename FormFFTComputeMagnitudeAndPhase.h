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
	/// Summary for FormFFTComputeMagnitudeAndPhase
	/// </summary>
	public ref class FormFFTComputeMagnitudeAndPhase : public System::Windows::Forms::Form
	{
	public:
		FormFFTComputeMagnitudeAndPhase(void)
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
		~FormFFTComputeMagnitudeAndPhase()
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
	private: System::Windows::Forms::PictureBox^ picBoxOriginalMagnitude;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ picBoxOriginalPhase;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::PictureBox^ picBoxPhaseOnly;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ picBoxResultCutoffLowPass;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ picBoxResultCutoffHighPass;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ picBoxCutoffHighPassMagnitude;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::PictureBox^ picBoxCutoffLowPassMagnitude;


	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::NumericUpDown^ nudCutoffFactor;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btnProcess;
	private: System::Windows::Forms::OpenFileDialog^ oFD;
	private: System::Windows::Forms::ToolTip^ toolTip1;
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
			this->btnLoadImagePath = (gcnew System::Windows::Forms::Button());
			this->listBoxImagePath = (gcnew System::Windows::Forms::ListBox());
			this->picBoxOriginalImage = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->picBoxOriginalMagnitude = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->picBoxOriginalPhase = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->picBoxPhaseOnly = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->picBoxResultCutoffLowPass = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->picBoxResultCutoffHighPass = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->picBoxCutoffHighPassMagnitude = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->picBoxCutoffLowPassMagnitude = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->nudCutoffFactor = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btnProcess = (gcnew System::Windows::Forms::Button());
			this->oFD = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalMagnitude))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalPhase))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxPhaseOnly))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxResultCutoffLowPass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxResultCutoffHighPass))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxCutoffHighPassMagnitude))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxCutoffLowPassMagnitude))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudCutoffFactor))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnLoadImagePath
			// 
			this->btnLoadImagePath->Location = System::Drawing::Point(30, 22);
			this->btnLoadImagePath->Name = L"btnLoadImagePath";
			this->btnLoadImagePath->Size = System::Drawing::Size(93, 39);
			this->btnLoadImagePath->TabIndex = 0;
			this->btnLoadImagePath->Text = L"Load Image";
			this->btnLoadImagePath->UseVisualStyleBackColor = true;
			this->btnLoadImagePath->Click += gcnew System::EventHandler(this, &FormFFTComputeMagnitudeAndPhase::btnLoadImagePath_Click);
			// 
			// listBoxImagePath
			// 
			this->listBoxImagePath->FormattingEnabled = true;
			this->listBoxImagePath->Location = System::Drawing::Point(34, 85);
			this->listBoxImagePath->Name = L"listBoxImagePath";
			this->listBoxImagePath->Size = System::Drawing::Size(263, 264);
			this->listBoxImagePath->TabIndex = 1;
			this->listBoxImagePath->SelectedIndexChanged += gcnew System::EventHandler(this, &FormFFTComputeMagnitudeAndPhase::listBoxImagePath_SelectedIndexChanged);
			this->listBoxImagePath->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormFFTComputeMagnitudeAndPhase::listBoxImagePath_MouseMove);
			// 
			// picBoxOriginalImage
			// 
			this->picBoxOriginalImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalImage->Location = System::Drawing::Point(365, 85);
			this->picBoxOriginalImage->Name = L"picBoxOriginalImage";
			this->picBoxOriginalImage->Size = System::Drawing::Size(265, 264);
			this->picBoxOriginalImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalImage->TabIndex = 2;
			this->picBoxOriginalImage->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(362, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(63, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Input Image";
			// 
			// picBoxOriginalMagnitude
			// 
			this->picBoxOriginalMagnitude->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalMagnitude->Location = System::Drawing::Point(719, 85);
			this->picBoxOriginalMagnitude->Name = L"picBoxOriginalMagnitude";
			this->picBoxOriginalMagnitude->Size = System::Drawing::Size(265, 264);
			this->picBoxOriginalMagnitude->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalMagnitude->TabIndex = 2;
			this->picBoxOriginalMagnitude->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(716, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Magnitude";
			// 
			// picBoxOriginalPhase
			// 
			this->picBoxOriginalPhase->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalPhase->Location = System::Drawing::Point(1065, 85);
			this->picBoxOriginalPhase->Name = L"picBoxOriginalPhase";
			this->picBoxOriginalPhase->Size = System::Drawing::Size(265, 264);
			this->picBoxOriginalPhase->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalPhase->TabIndex = 2;
			this->picBoxOriginalPhase->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(1062, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Phase";
			// 
			// picBoxPhaseOnly
			// 
			this->picBoxPhaseOnly->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxPhaseOnly->Location = System::Drawing::Point(1411, 85);
			this->picBoxPhaseOnly->Name = L"picBoxPhaseOnly";
			this->picBoxPhaseOnly->Size = System::Drawing::Size(265, 264);
			this->picBoxPhaseOnly->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxPhaseOnly->TabIndex = 2;
			this->picBoxPhaseOnly->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1408, 60);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Phase Only";
			// 
			// picBoxResultCutoffLowPass
			// 
			this->picBoxResultCutoffLowPass->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxResultCutoffLowPass->Location = System::Drawing::Point(719, 432);
			this->picBoxResultCutoffLowPass->Name = L"picBoxResultCutoffLowPass";
			this->picBoxResultCutoffLowPass->Size = System::Drawing::Size(265, 264);
			this->picBoxResultCutoffLowPass->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxResultCutoffLowPass->TabIndex = 2;
			this->picBoxResultCutoffLowPass->TabStop = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(716, 407);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 13);
			this->label5->TabIndex = 3;
			this->label5->Text = L"Result Cut Off Low Pass";
			// 
			// picBoxResultCutoffHighPass
			// 
			this->picBoxResultCutoffHighPass->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxResultCutoffHighPass->Location = System::Drawing::Point(1411, 432);
			this->picBoxResultCutoffHighPass->Name = L"picBoxResultCutoffHighPass";
			this->picBoxResultCutoffHighPass->Size = System::Drawing::Size(265, 264);
			this->picBoxResultCutoffHighPass->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxResultCutoffHighPass->TabIndex = 2;
			this->picBoxResultCutoffHighPass->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(1408, 407);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 13);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Result Cut Off High Pass";
			// 
			// picBoxCutoffHighPassMagnitude
			// 
			this->picBoxCutoffHighPassMagnitude->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxCutoffHighPassMagnitude->Location = System::Drawing::Point(1065, 432);
			this->picBoxCutoffHighPassMagnitude->Name = L"picBoxCutoffHighPassMagnitude";
			this->picBoxCutoffHighPassMagnitude->Size = System::Drawing::Size(265, 264);
			this->picBoxCutoffHighPassMagnitude->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxCutoffHighPassMagnitude->TabIndex = 2;
			this->picBoxCutoffHighPassMagnitude->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(1062, 407);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(144, 13);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Cut Off High Pass Magnitude";
			// 
			// picBoxCutoffLowPassMagnitude
			// 
			this->picBoxCutoffLowPassMagnitude->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxCutoffLowPassMagnitude->Location = System::Drawing::Point(365, 432);
			this->picBoxCutoffLowPassMagnitude->Name = L"picBoxCutoffLowPassMagnitude";
			this->picBoxCutoffLowPassMagnitude->Size = System::Drawing::Size(265, 264);
			this->picBoxCutoffLowPassMagnitude->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxCutoffLowPassMagnitude->TabIndex = 2;
			this->picBoxCutoffLowPassMagnitude->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(362, 407);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(142, 13);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Cut Off Low Pass Magnitude";
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
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(14, 46);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(74, 13);
			this->label9->TabIndex = 5;
			this->label9->Text = L" Cutoff Factor:";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->nudCutoffFactor);
			this->groupBox1->Location = System::Drawing::Point(35, 432);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(262, 140);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Parameters";
			// 
			// btnProcess
			// 
			this->btnProcess->BackColor = System::Drawing::Color::DarkGreen;
			this->btnProcess->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProcess->ForeColor = System::Drawing::Color::White;
			this->btnProcess->Location = System::Drawing::Point(35, 644);
			this->btnProcess->Name = L"btnProcess";
			this->btnProcess->Size = System::Drawing::Size(262, 52);
			this->btnProcess->TabIndex = 0;
			this->btnProcess->Text = L"Process";
			this->btnProcess->UseVisualStyleBackColor = false;
			this->btnProcess->Click += gcnew System::EventHandler(this, &FormFFTComputeMagnitudeAndPhase::btnProcess_Click);
			// 
			// oFD
			// 
			this->oFD->FileName = L"openFileDialog1";
			// 
			// FormFFTComputeMagnitudeAndPhase
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1799, 763);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picBoxPhaseOnly);
			this->Controls->Add(this->picBoxOriginalPhase);
			this->Controls->Add(this->picBoxOriginalMagnitude);
			this->Controls->Add(this->picBoxResultCutoffHighPass);
			this->Controls->Add(this->picBoxCutoffHighPassMagnitude);
			this->Controls->Add(this->picBoxCutoffLowPassMagnitude);
			this->Controls->Add(this->picBoxResultCutoffLowPass);
			this->Controls->Add(this->picBoxOriginalImage);
			this->Controls->Add(this->listBoxImagePath);
			this->Controls->Add(this->btnProcess);
			this->Controls->Add(this->btnLoadImagePath);
			this->Name = L"FormFFTComputeMagnitudeAndPhase";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormFFTComputeMagnitudeAndPhase";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalMagnitude))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalPhase))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxPhaseOnly))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxResultCutoffLowPass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxResultCutoffHighPass))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxCutoffHighPassMagnitude))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxCutoffLowPassMagnitude))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudCutoffFactor))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
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
		
		std::string stdSelectedImagePath = CommonMethods::convertSystemStringToStdString(selectedImagePath);

		cv::Mat originalImage = cv::imread(stdSelectedImagePath, cv::IMREAD_GRAYSCALE);

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
		
		cv::Mat img = cv::imread(stdSelectedImagePath, cv::IMREAD_GRAYSCALE);

		if (img.empty()) {
			MessageBox::Show("Failed to load image: " + selectedImagePath, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		float cutoffRadius = static_cast<float>(this->nudCutoffFactor->Value);

		cv::Mat magnitudeImage = computeDFTMagnitude(img);
		cv::Mat phaseImage = computeDFTPhase(img);
		cv::Mat phaseOnly = phaseOnlyReconstruction(img);


		cv::Mat lowPassFiltered = lowPassFilterDFT(img, cutoffRadius)[0];
		cv::Mat lowPassFilteredMagnitude = lowPassFilterDFT(img, cutoffRadius)[1];
		cv::Mat highPassFiltered = highPassEdgesDFT(img, cutoffRadius);
		cv::Mat highPassFilteredMagnitude = highPassFilterDFT(img, cutoffRadius)[1];

		// load image to picture box
		CommonMethods::loadCvMatToPictureBox(magnitudeImage, this->picBoxOriginalMagnitude);
		CommonMethods::loadCvMatToPictureBox(phaseImage, this->picBoxOriginalPhase);
		CommonMethods::loadCvMatToPictureBox(phaseOnly, this->picBoxPhaseOnly);
		CommonMethods::loadCvMatToPictureBox(lowPassFilteredMagnitude, this->picBoxCutoffLowPassMagnitude);
		CommonMethods::loadCvMatToPictureBox(lowPassFiltered, this->picBoxResultCutoffLowPass);
		CommonMethods::loadCvMatToPictureBox(highPassFilteredMagnitude, this->picBoxCutoffHighPassMagnitude);
		CommonMethods::loadCvMatToPictureBox(highPassFiltered, this->picBoxResultCutoffHighPass);

		System::Diagnostics::Debug::WriteLine("phaseImage type: " + phaseImage.type());
		System::Diagnostics::Debug::WriteLine("lowPassFilteredMagnitude type: " + lowPassFilteredMagnitude.type());
		
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
}; // class FormFFTComputeMagnitudeAndPhase
} // namespace DigitalImageProcessingCLR
