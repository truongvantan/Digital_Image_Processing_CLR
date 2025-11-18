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
	private: System::Windows::Forms::PictureBox^ picBoxOriginalMagnitude;
	private: System::Windows::Forms::PictureBox^ picBoxOriginalImage;
	private: System::Windows::Forms::ListBox^ listBoxImagePath;
	private: System::Windows::Forms::Button^ btnLoadImagePath;
	private: System::Windows::Forms::OpenFileDialog^ oFD;
	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ picBoxOriginalPhase;
	private: System::Windows::Forms::PictureBox^ picBoxOutputMagnitudeEnhace;
	private: System::Windows::Forms::NumericUpDown^ nudSmoothingFactor;
	private: System::Windows::Forms::PictureBox^ picBoxOutputPhaseRefined;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::PictureBox^ picBoxOutputEnhanceImage;
	private: System::Windows::Forms::Label^ label7;

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
			this->picBoxOriginalMagnitude = (gcnew System::Windows::Forms::PictureBox());
			this->picBoxOriginalImage = (gcnew System::Windows::Forms::PictureBox());
			this->listBoxImagePath = (gcnew System::Windows::Forms::ListBox());
			this->btnLoadImagePath = (gcnew System::Windows::Forms::Button());
			this->oFD = (gcnew System::Windows::Forms::OpenFileDialog());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->picBoxOriginalPhase = (gcnew System::Windows::Forms::PictureBox());
			this->picBoxOutputMagnitudeEnhace = (gcnew System::Windows::Forms::PictureBox());
			this->nudSmoothingFactor = (gcnew System::Windows::Forms::NumericUpDown());
			this->picBoxOutputPhaseRefined = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->picBoxOutputEnhanceImage = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalMagnitude))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalPhase))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOutputMagnitudeEnhace))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudSmoothingFactor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOutputPhaseRefined))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOutputEnhanceImage))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(710, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(159, 20);
			this->label2->TabIndex = 12;
			this->label2->Text = L"Original Magnitude";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(342, 51);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(125, 20);
			this->label1->TabIndex = 13;
			this->label1->Text = L"Original Image";
			// 
			// picBoxOriginalMagnitude
			// 
			this->picBoxOriginalMagnitude->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalMagnitude->Location = System::Drawing::Point(714, 74);
			this->picBoxOriginalMagnitude->Name = L"picBoxOriginalMagnitude";
			this->picBoxOriginalMagnitude->Size = System::Drawing::Size(280, 293);
			this->picBoxOriginalMagnitude->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalMagnitude->TabIndex = 8;
			this->picBoxOriginalMagnitude->TabStop = false;
			// 
			// picBoxOriginalImage
			// 
			this->picBoxOriginalImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalImage->Location = System::Drawing::Point(346, 74);
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
			this->listBoxImagePath->Size = System::Drawing::Size(286, 485);
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
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(23, 610);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(128, 13);
			this->label5->TabIndex = 17;
			this->label5->Text = L"Smoothing Factor (alpha):";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1062, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(125, 20);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Original Phase";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(710, 445);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(229, 20);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Output Magnitude Enhance";
			// 
			// picBoxOriginalPhase
			// 
			this->picBoxOriginalPhase->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalPhase->Location = System::Drawing::Point(1066, 74);
			this->picBoxOriginalPhase->Name = L"picBoxOriginalPhase";
			this->picBoxOriginalPhase->Size = System::Drawing::Size(280, 293);
			this->picBoxOriginalPhase->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalPhase->TabIndex = 10;
			this->picBoxOriginalPhase->TabStop = false;
			// 
			// picBoxOutputMagnitudeEnhace
			// 
			this->picBoxOutputMagnitudeEnhace->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOutputMagnitudeEnhace->Location = System::Drawing::Point(714, 468);
			this->picBoxOutputMagnitudeEnhace->Name = L"picBoxOutputMagnitudeEnhace";
			this->picBoxOutputMagnitudeEnhace->Size = System::Drawing::Size(280, 293);
			this->picBoxOutputMagnitudeEnhace->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOutputMagnitudeEnhace->TabIndex = 11;
			this->picBoxOutputMagnitudeEnhace->TabStop = false;
			// 
			// nudSmoothingFactor
			// 
			this->nudSmoothingFactor->DecimalPlaces = 2;
			this->nudSmoothingFactor->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->nudSmoothingFactor->Location = System::Drawing::Point(170, 608);
			this->nudSmoothingFactor->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudSmoothingFactor->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 131072 });
			this->nudSmoothingFactor->Name = L"nudSmoothingFactor";
			this->nudSmoothingFactor->Size = System::Drawing::Size(61, 20);
			this->nudSmoothingFactor->TabIndex = 18;
			this->nudSmoothingFactor->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 131072 });
			// 
			// picBoxOutputPhaseRefined
			// 
			this->picBoxOutputPhaseRefined->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOutputPhaseRefined->Location = System::Drawing::Point(1066, 468);
			this->picBoxOutputPhaseRefined->Name = L"picBoxOutputPhaseRefined";
			this->picBoxOutputPhaseRefined->Size = System::Drawing::Size(280, 293);
			this->picBoxOutputPhaseRefined->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOutputPhaseRefined->TabIndex = 10;
			this->picBoxOutputPhaseRefined->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(1062, 445);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(239, 20);
			this->label6->TabIndex = 14;
			this->label6->Text = L"Phase Spectrum Refinement";
			// 
			// picBoxOutputEnhanceImage
			// 
			this->picBoxOutputEnhanceImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOutputEnhanceImage->Location = System::Drawing::Point(346, 468);
			this->picBoxOutputEnhanceImage->Name = L"picBoxOutputEnhanceImage";
			this->picBoxOutputEnhanceImage->Size = System::Drawing::Size(280, 293);
			this->picBoxOutputEnhanceImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOutputEnhanceImage->TabIndex = 9;
			this->picBoxOutputEnhanceImage->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(342, 445);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(135, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Enhance Image";
			// 
			// FormFourierTransform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1486, 851);
			this->Controls->Add(this->nudSmoothingFactor);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picBoxOriginalMagnitude);
			this->Controls->Add(this->picBoxOutputEnhanceImage);
			this->Controls->Add(this->picBoxOriginalImage);
			this->Controls->Add(this->listBoxImagePath);
			this->Controls->Add(this->btnLoadImagePath);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->picBoxOutputPhaseRefined);
			this->Controls->Add(this->picBoxOriginalPhase);
			this->Controls->Add(this->picBoxOutputMagnitudeEnhace);
			this->Name = L"FormFourierTransform";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormFourierTransform";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalMagnitude))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalPhase))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOutputMagnitudeEnhace))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudSmoothingFactor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOutputPhaseRefined))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOutputEnhanceImage))->EndInit();
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
		System::String^ selectedImagePath = this->listBoxImagePath->SelectedItem->ToString();
		CommonMethods::loadImagePathToPictureBox(picBoxOriginalImage, selectedImagePath);
		std::string stdSelectedImagePath = CommonMethods::convertSystemStringToStdString(selectedImagePath);
		processImage(stdSelectedImagePath);
	}
	private: void processImage(std::string stdSelectedImagePath) {
		// read image
		cv::Mat img = cv::imread(stdSelectedImagePath, cv::IMREAD_COLOR);

		if (img.empty()) {
			MessageBox::Show("Failed to load image.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// Convert to float for DFT
		//cv::Mat imgFloat;
		//img.convertTo(imgFloat, CV_32F);

		// split channels
		std::vector<cv::Mat> bgrChannels;
		cv::split(img, bgrChannels);

		cv::Mat B_channel = bgrChannels[0];
		cv::Mat G_channel = bgrChannels[1];
		cv::Mat R_channel = bgrChannels[2];

		// compute DFT and magnitude spectrum each channel
		cv::Mat B_magnitude = computeDFTMagnitude(B_channel);
		cv::Mat G_magnitude = computeDFTMagnitude(G_channel);
		cv::Mat R_magnitude = computeDFTMagnitude(R_channel);

		// Merge the processed channels back
		cv::Mat outputMagnitudeImage = getOuputMergeBGRChannelsForDisplay(B_magnitude, G_magnitude, R_magnitude);
		CommonMethods::loadCvMatToPictureBox(outputMagnitudeImage, this->picBoxOriginalMagnitude);

		// compute phase spectrum each channel
		cv::Mat B_phase = computeDFTPhase(B_channel);
		cv::Mat G_phase = computeDFTPhase(G_channel);
		cv::Mat R_phase = computeDFTPhase(R_channel);

		// Merge the processed channels back
		cv::Mat outputPhaseImage = getOuputMergeBGRChannelsForDisplay(B_phase, G_phase, R_phase);
		CommonMethods::loadCvMatToPictureBox(outputPhaseImage, this->picBoxOriginalPhase);

		// magnitude spectrum enhancement using SVD each channel
		cv::Mat B_svdMag = magnitudeEnhancementSVD(B_magnitude);
		cv::Mat G_svdMag = magnitudeEnhancementSVD(G_magnitude);
		cv::Mat R_svdMag = magnitudeEnhancementSVD(R_magnitude);

		// Merge the processed channels back
		cv::Mat outputSVDEnhancedMagnitudeImage = getOuputMergeBGRChannelsForDisplay(B_svdMag, G_svdMag, R_svdMag);
		CommonMethods::loadCvMatToPictureBox(outputSVDEnhancedMagnitudeImage, this->picBoxOutputMagnitudeEnhace);

		// Phase Spectrum Refinement for Sharpness each channel
		cv::Mat B_refinedPhase = refinePhase(B_phase);
		cv::Mat G_refinedPhase = refinePhase(G_phase);
		cv::Mat R_refinedPhase = refinePhase(R_phase);

		// Merge the processed channels back
		cv::Mat outputRefinedPhaseImage = getOuputMergeBGRChannelsForDisplay(B_refinedPhase, G_refinedPhase, R_refinedPhase);
		CommonMethods::loadCvMatToPictureBox(outputRefinedPhaseImage, this->picBoxOutputPhaseRefined);

		// Image Reconstruction
		// The enhanced magnitude and phase spectrums are used to reconstruct the final image through the Inverse Discrete Fourier Transform(IDFT)
		cv::Mat B_reconstructed = applyIDFTMagnitudeAndPhase(B_svdMag, B_refinedPhase);
		cv::Mat G_reconstructed = applyIDFTMagnitudeAndPhase(G_svdMag, G_refinedPhase);
		cv::Mat R_reconstructed = applyIDFTMagnitudeAndPhase(R_svdMag, R_refinedPhase);

		// DEBUG: Check the reconstructed channels
		double B_min, B_max, G_min, G_max, R_min, R_max;
		cv::minMaxLoc(B_reconstructed, &B_min, &B_max);
		cv::minMaxLoc(G_reconstructed, &G_min, &G_max);
		cv::minMaxLoc(R_reconstructed, &R_min, &R_max);

		// Print or display these values to see what's happening
		System::Diagnostics::Debug::WriteLine("B channel range: " + B_min + " to " + B_max);
		System::Diagnostics::Debug::WriteLine("G channel range: " + G_min + " to " + G_max);
		System::Diagnostics::Debug::WriteLine("R channel range: " + R_min + " to " + R_max);

		// Merge the processed channels back
		cv::Mat outputReconstructedImage = getOuputMergeBGRChannelsForReconstruction(B_reconstructed, G_reconstructed, R_reconstructed);
		CommonMethods::loadCvMatToPictureBox(outputReconstructedImage, this->picBoxOutputEnhanceImage);
	}
	private: cv::Mat applyIDFTMagnitudeAndPhase(const cv::Mat& matMagnitude, const cv::Mat& matPhase) {
		// Make copies and convert to proper type
		cv::Mat mag, phase;
		matMagnitude.convertTo(mag, CV_32F);
		matPhase.convertTo(phase, CV_32F);

		// DEBUG: Check input ranges
		double mag_min, mag_max, phase_min, phase_max;
		cv::minMaxLoc(mag, &mag_min, &mag_max);
		cv::minMaxLoc(phase, &phase_min, &phase_max);
		System::Diagnostics::Debug::WriteLine("Input mag range: " + mag_min + " to " + mag_max);
		System::Diagnostics::Debug::WriteLine("Input phase range: " + phase_min + " to " + phase_max);

		// Remove any normalization from enhanced magnitude - we need actual values for reconstruction
		// The enhanced magnitude might be normalized to [0,1] but we need the actual magnitude values
		// Try scaling it back up
		mag = mag * 1000.0f; // Adjust this scaling factor as needed

		// Rearrange quadrants back to original position
		int cx = mag.cols / 2;
		int cy = mag.rows / 2;

		cv::Mat q0(mag, cv::Rect(0, 0, cx, cy));
		cv::Mat q1(mag, cv::Rect(cx, 0, cx, cy));
		cv::Mat q2(mag, cv::Rect(0, cy, cx, cy));
		cv::Mat q3(mag, cv::Rect(cx, cy, cx, cy));

		cv::Mat tmp;
		q0.copyTo(tmp); q3.copyTo(q0); tmp.copyTo(q3);
		q1.copyTo(tmp); q2.copyTo(q1); tmp.copyTo(q2);

		// Do the same for phase
		cv::Mat q0p(phase, cv::Rect(0, 0, cx, cy));
		cv::Mat q1p(phase, cv::Rect(cx, 0, cx, cy));
		cv::Mat q2p(phase, cv::Rect(0, cy, cx, cy));
		cv::Mat q3p(phase, cv::Rect(cx, cy, cx, cy));

		q0p.copyTo(tmp); q3p.copyTo(q0p); tmp.copyTo(q3p);
		q1p.copyTo(tmp); q2p.copyTo(q1p); tmp.copyTo(q2p);

		// Convert from polar to Cartesian coordinates
		cv::Mat realPart, imagPart;
		cv::polarToCart(mag, phase, realPart, imagPart);

		// Merge real and imaginary parts into a complex matrix
		cv::Mat complexI;
		cv::Mat planes[] = { realPart, imagPart };
		cv::merge(planes, 2, complexI);

		// Apply Inverse DFT
		cv::Mat idftResult;
		cv::idft(complexI, idftResult, cv::DFT_SCALE | cv::DFT_REAL_OUTPUT);

		// Crop to original size (remove padding)
		cv::Mat cropped = idftResult(cv::Rect(0, 0, matMagnitude.cols, matMagnitude.rows));

		// DEBUG: Check IDFT result range
		double idft_min, idft_max;
		cv::minMaxLoc(cropped, &idft_min, &idft_max);
		System::Diagnostics::Debug::WriteLine("IDFT result range: " + idft_min + " to " + idft_max);



		return cropped;
	}
	private: cv::Mat refinePhase(const cv::Mat& matPhase) {
		// refined using an adaptive smoothing function
		// P'(u,v) = alpha*P(u,v) + (1-alpha)*mean(P(u,v))

		cv::Mat matPhaseClone = matPhase.clone();
		double alpha = static_cast<double>(this->nudSmoothingFactor->Value);

		cv::Scalar meanPhase = cv::mean(matPhaseClone);
		cv::Mat matPhaseRefined = alpha * matPhaseClone + (1 - alpha) * meanPhase[0];

		// Keep phase in reasonable range for display
		cv::normalize(matPhaseRefined, matPhaseRefined, 0, 1, cv::NORM_MINMAX);

		return matPhaseRefined;
	}

	private: cv::Mat magnitudeEnhancementSVD(const cv::Mat& matMagnitude) {
		cv::Mat matMagnitudeClone = matMagnitude.clone();

		cv::Mat magFloat;
		matMagnitudeClone.convertTo(magFloat, CV_32F);

		cv::Mat U, S, Vt;
		cv::SVD::compute(magFloat, S, U, Vt);

		// Calculate adaptive weighting factor
		double Smax = S.at<float>(0);
		double Smin = S.at<float>(S.rows - 1);
		double lambda = (Smax - Smin) / Smax;

		// Enhanced magnitude: M'(u,v) = M(u,v) + lambda * Smax
		cv::Mat matMagnitudeEnhanced = magFloat + (lambda * Smax);

		// Log scaling
		cv::Mat displayMag = matMagnitudeEnhanced.clone();
		displayMag += cv::Scalar::all(1);
		cv::log(displayMag, displayMag);
		cv::normalize(displayMag, displayMag, 0, 1, cv::NORM_MINMAX);

		return displayMag;

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

		// swap quadrants (Top-Left with Bottom-Right)
		q0.copyTo(tmp);
		q3.copyTo(q0);
		tmp.copyTo(q3);

		// swap quadrant (Top-Right with Bottom-Left)
		q1.copyTo(tmp);
		q2.copyTo(q1);
		tmp.copyTo(q2);

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

	private: cv::Mat computeDFTPhase(const cv::Mat& channel) {
		cv::Mat real = getRealAndImaginaryDFT(channel)[0];
		cv::Mat imag = getRealAndImaginaryDFT(channel)[1];

		cv::Mat phaseI;
		cv::phase(real, imag, phaseI);

		// Rearrange quadrants
		shiftDFT(phaseI);
		cv::normalize(phaseI, phaseI, 0, 255, cv::NORM_MINMAX);

		return phaseI;
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
	private: cv::Mat getOuputMergeBGRChannels(const cv::Mat& bChannel, const cv::Mat& gChannel, const cv::Mat& rChannel) {
		std::vector<cv::Mat> processedChannels = { bChannel, gChannel, rChannel };
		cv::Mat outputImage;
		cv::merge(processedChannels, outputImage);

		// Convert to 8-bit for display
		outputImage.convertTo(outputImage, CV_8UC3, 255.0);

		return outputImage;
	}
	private: cv::Mat getOuputMergeBGRChannelsForReconstruction(const cv::Mat& bChannel, const cv::Mat& gChannel, const cv::Mat& rChannel) {
		std::vector<cv::Mat> processedChannels = { bChannel, gChannel, rChannel };
		cv::Mat outputImage;
		cv::merge(processedChannels, outputImage);

		// Take absolute values to remove negatives, then normalize
		cv::Mat absImage = cv::abs(outputImage);
		cv::normalize(absImage, absImage, 0, 255, cv::NORM_MINMAX);
		absImage.convertTo(outputImage, CV_8UC3);

		return outputImage;
	}
	private: cv::Mat getOuputMergeBGRChannelsForDisplay(const cv::Mat& bChannel, const cv::Mat& gChannel, const cv::Mat& rChannel) {
		std::vector<cv::Mat> processedChannels = { bChannel, gChannel, rChannel };
		cv::Mat outputImage;
		cv::merge(processedChannels, outputImage);

		// Convert to 8-bit for display with proper normalization
		cv::normalize(outputImage, outputImage, 0, 255, cv::NORM_MINMAX);
		outputImage.convertTo(outputImage, CV_8UC3);

		return outputImage;
	}
	}; // class FormFourierTransform
} // namespace DigitalImageProcessingCLR
