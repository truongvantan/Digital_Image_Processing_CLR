#pragma once
#include "LogTransform.h"
#include "GammaTransform.h"
#include "OpenCV_Temp.h"
#include "FormSVD.h"
#include "FormSVDBackgroundSubtraction.h"
#include "FormAffineTransform.h"
#include "FormSVDExtractBackgroundBasic.h"
#include "FormSVDCompressImage.h"
//#include "FourierTransform.h"
#include "FormFourierTransform.h"
#include "FormFFTComputeMagnitudeAndPhase.h"
#include "FormFourierTransformBasic.h"

namespace DigitalImageProcessingCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ gammaTransformToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ logTransformToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ alphaBetaTransformToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openCVTempToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ decompositionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sVDToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sVDBackgroundSubtractionToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ affineTransformToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sVDExtractBackgroundBasicToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ sVDCompressImageToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fourierTransformToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fourierTransformToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ computeMagnitudeAndPhaseToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ fFTColorImageToolStripMenuItem;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->gammaTransformToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->logTransformToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->alphaBetaTransformToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openCVTempToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fourierTransformToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->decompositionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sVDToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sVDBackgroundSubtractionToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sVDExtractBackgroundBasicToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->sVDCompressImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->affineTransformToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fourierTransformToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->computeMagnitudeAndPhaseToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fFTColorImageToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripMenuItem1,
					this->decompositionToolStripMenuItem, this->affineTransformToolStripMenuItem, this->fourierTransformToolStripMenuItem1
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1344, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->gammaTransformToolStripMenuItem,
					this->logTransformToolStripMenuItem, this->alphaBetaTransformToolStripMenuItem, this->openCVTempToolStripMenuItem, this->fourierTransformToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(73, 20);
			this->toolStripMenuItem1->Text = L"Transform";
			// 
			// gammaTransformToolStripMenuItem
			// 
			this->gammaTransformToolStripMenuItem->Name = L"gammaTransformToolStripMenuItem";
			this->gammaTransformToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->gammaTransformToolStripMenuItem->Text = L"Gamma Transform";
			this->gammaTransformToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::gammaTransformToolStripMenuItem_Click);
			// 
			// logTransformToolStripMenuItem
			// 
			this->logTransformToolStripMenuItem->Name = L"logTransformToolStripMenuItem";
			this->logTransformToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->logTransformToolStripMenuItem->Text = L"Log Transform";
			this->logTransformToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::logTransformToolStripMenuItem_Click);
			// 
			// alphaBetaTransformToolStripMenuItem
			// 
			this->alphaBetaTransformToolStripMenuItem->Name = L"alphaBetaTransformToolStripMenuItem";
			this->alphaBetaTransformToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->alphaBetaTransformToolStripMenuItem->Text = L"Alpha Beta Transform";
			// 
			// openCVTempToolStripMenuItem
			// 
			this->openCVTempToolStripMenuItem->Name = L"openCVTempToolStripMenuItem";
			this->openCVTempToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->openCVTempToolStripMenuItem->Text = L"OpenCV Temp";
			this->openCVTempToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::openCVTempToolStripMenuItem_Click);
			// 
			// fourierTransformToolStripMenuItem
			// 
			this->fourierTransformToolStripMenuItem->Name = L"fourierTransformToolStripMenuItem";
			this->fourierTransformToolStripMenuItem->Size = System::Drawing::Size(188, 22);
			this->fourierTransformToolStripMenuItem->Text = L"Fourier Transform";
			this->fourierTransformToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::fourierTransformToolStripMenuItem_Click);
			// 
			// decompositionToolStripMenuItem
			// 
			this->decompositionToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->sVDToolStripMenuItem,
					this->sVDBackgroundSubtractionToolStripMenuItem, this->sVDExtractBackgroundBasicToolStripMenuItem, this->sVDCompressImageToolStripMenuItem
			});
			this->decompositionToolStripMenuItem->Name = L"decompositionToolStripMenuItem";
			this->decompositionToolStripMenuItem->Size = System::Drawing::Size(100, 20);
			this->decompositionToolStripMenuItem->Text = L"Decomposition";
			// 
			// sVDToolStripMenuItem
			// 
			this->sVDToolStripMenuItem->Name = L"sVDToolStripMenuItem";
			this->sVDToolStripMenuItem->Size = System::Drawing::Size(230, 22);
			this->sVDToolStripMenuItem->Text = L"SVD Change Light";
			this->sVDToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::sVDToolStripMenuItem_Click);
			// 
			// sVDBackgroundSubtractionToolStripMenuItem
			// 
			this->sVDBackgroundSubtractionToolStripMenuItem->Name = L"sVDBackgroundSubtractionToolStripMenuItem";
			this->sVDBackgroundSubtractionToolStripMenuItem->Size = System::Drawing::Size(230, 22);
			this->sVDBackgroundSubtractionToolStripMenuItem->Text = L"SVD Background Subtraction";
			this->sVDBackgroundSubtractionToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::sVDBackgroundSubtractionToolStripMenuItem_Click);
			// 
			// sVDExtractBackgroundBasicToolStripMenuItem
			// 
			this->sVDExtractBackgroundBasicToolStripMenuItem->Name = L"sVDExtractBackgroundBasicToolStripMenuItem";
			this->sVDExtractBackgroundBasicToolStripMenuItem->Size = System::Drawing::Size(230, 22);
			this->sVDExtractBackgroundBasicToolStripMenuItem->Text = L"SVD Extract Background Basic";
			this->sVDExtractBackgroundBasicToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::sVDExtractBackgroundBasicToolStripMenuItem_Click);
			// 
			// sVDCompressImageToolStripMenuItem
			// 
			this->sVDCompressImageToolStripMenuItem->Name = L"sVDCompressImageToolStripMenuItem";
			this->sVDCompressImageToolStripMenuItem->Size = System::Drawing::Size(230, 22);
			this->sVDCompressImageToolStripMenuItem->Text = L"SVD Compress Image";
			this->sVDCompressImageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::sVDCompressImageToolStripMenuItem_Click);
			// 
			// affineTransformToolStripMenuItem
			// 
			this->affineTransformToolStripMenuItem->Name = L"affineTransformToolStripMenuItem";
			this->affineTransformToolStripMenuItem->Size = System::Drawing::Size(105, 20);
			this->affineTransformToolStripMenuItem->Text = L"AffineTransform";
			this->affineTransformToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::affineTransformToolStripMenuItem_Click);
			// 
			// fourierTransformToolStripMenuItem1
			// 
			this->fourierTransformToolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->computeMagnitudeAndPhaseToolStripMenuItem,
					this->fFTColorImageToolStripMenuItem
			});
			this->fourierTransformToolStripMenuItem1->Name = L"fourierTransformToolStripMenuItem1";
			this->fourierTransformToolStripMenuItem1->Size = System::Drawing::Size(113, 20);
			this->fourierTransformToolStripMenuItem1->Text = L"Fourier Transform";
			// 
			// computeMagnitudeAndPhaseToolStripMenuItem
			// 
			this->computeMagnitudeAndPhaseToolStripMenuItem->Name = L"computeMagnitudeAndPhaseToolStripMenuItem";
			this->computeMagnitudeAndPhaseToolStripMenuItem->Size = System::Drawing::Size(242, 22);
			this->computeMagnitudeAndPhaseToolStripMenuItem->Text = L"Compute Magnitude and Phase";
			this->computeMagnitudeAndPhaseToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::computeMagnitudeAndPhaseToolStripMenuItem_Click);
			// 
			// fFTColorImageToolStripMenuItem
			// 
			this->fFTColorImageToolStripMenuItem->Name = L"fFTColorImageToolStripMenuItem";
			this->fFTColorImageToolStripMenuItem->Size = System::Drawing::Size(242, 22);
			this->fFTColorImageToolStripMenuItem->Text = L"FFT Color Image";
			this->fFTColorImageToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::fFTColorImageToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1344, 759);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MainForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void logTransformToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Open log transform form
		LogTransform^ logTransformForm = gcnew LogTransform();
		logTransformForm->Show();
	}
	private: System::Void gammaTransformToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Open gamma transform form
		GammaTransform^ gammaTransformForm = gcnew GammaTransform();
		gammaTransformForm->Show();
	}
	private: System::Void openCVTempToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		// Open OpenCV Temp form
		OpenCV_Temp^ openCVTempForm = gcnew OpenCV_Temp();
		openCVTempForm->Show();
	}
	private: System::Void sVDToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FormSVD^ formSVD = gcnew FormSVD();
		formSVD->Show();
	}
	private: System::Void sVDBackgroundSubtractionToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FormSVDBackgroundSubtraction^ form = gcnew FormSVDBackgroundSubtraction();
		form->Show();
	}
	private: System::Void affineTransformToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FormAffineTransform^ form = gcnew FormAffineTransform();
		form->Show();
	}
	private: System::Void sVDExtractBackgroundBasicToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FormSVDExtractBackgroundBasic^ form = gcnew FormSVDExtractBackgroundBasic();
		form->Show();
	}
	private: System::Void sVDCompressImageToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FormSVDCompressImage^ form = gcnew FormSVDCompressImage();
		form->Show();
	}
	private: System::Void fourierTransformToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FormFourierTransform^ form = gcnew FormFourierTransform();
		form->Show();
	}
	private: System::Void computeMagnitudeAndPhaseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FormFFTComputeMagnitudeAndPhase^ form = gcnew FormFFTComputeMagnitudeAndPhase();
		form->Show();
	}
	private: System::Void fFTColorImageToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		FormFourierTransformBasic^ form = gcnew FormFourierTransformBasic();
		form->Show();
	}
}; // class MainForm
} // namespace DigitalImageProcessingCLR
