#include "Common.h"
#include <filesystem>
#include <algorithm>
#include <chrono>
namespace DigitalImageProcessingCLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for FormSVDBackgroundSubtraction
	/// </summary>
	public ref class FormSVDBackgroundSubtraction : public System::Windows::Forms::Form
	{
	public:
		FormSVDBackgroundSubtraction(void)
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
		~FormSVDBackgroundSubtraction()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnLoadImagePath;
	protected:


	private: System::Windows::Forms::ListBox^ listBoxImagePath;
	private: System::Windows::Forms::PictureBox^ picBoxOriginalImage;
	private: System::Windows::Forms::PictureBox^ picBoxBackground;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btnExtractBackground;

	private: System::Windows::Forms::ToolTip^ toolTip1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtNumOfFrames;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtTimeTaken;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::PictureBox^ picBoxForeground;

	private: System::Windows::Forms::Label^ label6;










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
			this->picBoxBackground = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btnExtractBackground = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtNumOfFrames = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtTimeTaken = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->picBoxForeground = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxBackground))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxForeground))->BeginInit();
			this->SuspendLayout();
			// 
			// btnLoadImagePath
			// 
			this->btnLoadImagePath->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLoadImagePath->Location = System::Drawing::Point(18, 12);
			this->btnLoadImagePath->Name = L"btnLoadImagePath";
			this->btnLoadImagePath->Size = System::Drawing::Size(130, 47);
			this->btnLoadImagePath->TabIndex = 0;
			this->btnLoadImagePath->Text = L"Load Frames";
			this->btnLoadImagePath->UseVisualStyleBackColor = true;
			this->btnLoadImagePath->Click += gcnew System::EventHandler(this, &FormSVDBackgroundSubtraction::btnLoadImagePath_Click);
			// 
			// listBoxImagePath
			// 
			this->listBoxImagePath->FormattingEnabled = true;
			this->listBoxImagePath->Location = System::Drawing::Point(18, 71);
			this->listBoxImagePath->Name = L"listBoxImagePath";
			this->listBoxImagePath->Size = System::Drawing::Size(269, 654);
			this->listBoxImagePath->TabIndex = 1;
			this->listBoxImagePath->SelectedIndexChanged += gcnew System::EventHandler(this, &FormSVDBackgroundSubtraction::listBoxImagePath_SelectedIndexChanged);
			this->listBoxImagePath->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormSVDBackgroundSubtraction::listBoxImagePath_MouseMove);
			// 
			// picBoxOriginalImage
			// 
			this->picBoxOriginalImage->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxOriginalImage->Location = System::Drawing::Point(334, 71);
			this->picBoxOriginalImage->Name = L"picBoxOriginalImage";
			this->picBoxOriginalImage->Size = System::Drawing::Size(322, 281);
			this->picBoxOriginalImage->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxOriginalImage->TabIndex = 2;
			this->picBoxOriginalImage->TabStop = false;
			// 
			// picBoxBackground
			// 
			this->picBoxBackground->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxBackground->Location = System::Drawing::Point(864, 71);
			this->picBoxBackground->Name = L"picBoxBackground";
			this->picBoxBackground->Size = System::Drawing::Size(322, 281);
			this->picBoxBackground->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxBackground->TabIndex = 2;
			this->picBoxBackground->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(330, 39);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(102, 20);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Input frame";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(860, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Background";
			// 
			// btnExtractBackground
			// 
			this->btnExtractBackground->BackColor = System::Drawing::Color::LimeGreen;
			this->btnExtractBackground->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnExtractBackground->ForeColor = System::Drawing::Color::White;
			this->btnExtractBackground->Location = System::Drawing::Point(693, 177);
			this->btnExtractBackground->Name = L"btnExtractBackground";
			this->btnExtractBackground->Size = System::Drawing::Size(126, 64);
			this->btnExtractBackground->TabIndex = 0;
			this->btnExtractBackground->Text = L"Extract Background";
			this->btnExtractBackground->UseVisualStyleBackColor = false;
			this->btnExtractBackground->Click += gcnew System::EventHandler(this, &FormSVDBackgroundSubtraction::btnExtractBackground_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(6, 41);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(131, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Num of frames:";
			// 
			// txtNumOfFrames
			// 
			this->txtNumOfFrames->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNumOfFrames->Location = System::Drawing::Point(166, 38);
			this->txtNumOfFrames->Name = L"txtNumOfFrames";
			this->txtNumOfFrames->ReadOnly = true;
			this->txtNumOfFrames->Size = System::Drawing::Size(58, 26);
			this->txtNumOfFrames->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(29, 108);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(102, 20);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Time taken:";
			// 
			// txtTimeTaken
			// 
			this->txtTimeTaken->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtTimeTaken->Location = System::Drawing::Point(166, 105);
			this->txtTimeTaken->Name = L"txtTimeTaken";
			this->txtTimeTaken->ReadOnly = true;
			this->txtTimeTaken->Size = System::Drawing::Size(58, 26);
			this->txtTimeTaken->TabIndex = 5;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(230, 108);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(72, 20);
			this->label5->TabIndex = 4;
			this->label5->Text = L"minutes";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->txtTimeTaken);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->txtNumOfFrames);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Location = System::Drawing::Point(866, 436);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(320, 289);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			// 
			// picBoxForeground
			// 
			this->picBoxForeground->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->picBoxForeground->Location = System::Drawing::Point(334, 444);
			this->picBoxForeground->Name = L"picBoxForeground";
			this->picBoxForeground->Size = System::Drawing::Size(322, 281);
			this->picBoxForeground->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->picBoxForeground->TabIndex = 2;
			this->picBoxForeground->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(330, 412);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(102, 20);
			this->label6->TabIndex = 3;
			this->label6->Text = L"Foreground";
			// 
			// FormSVDBackgroundSubtraction
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1223, 746);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->picBoxBackground);
			this->Controls->Add(this->picBoxForeground);
			this->Controls->Add(this->picBoxOriginalImage);
			this->Controls->Add(this->listBoxImagePath);
			this->Controls->Add(this->btnExtractBackground);
			this->Controls->Add(this->btnLoadImagePath);
			this->Name = L"FormSVDBackgroundSubtraction";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormSVDBackgroundSubtraction";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxOriginalImage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxBackground))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picBoxForeground))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void btnLoadImagePath_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ oFD = gcnew OpenFileDialog();
		listBoxImagePath->Items->Clear();
		CommonMethods::loadImagePathToListBox(oFD, listBoxImagePath);
	}
	private: System::Void listBoxImagePath_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		CommonMethods::showTooltipInListBoxItem(listBoxImagePath, toolTip1, e);
	}
	private: System::Void listBoxImagePath_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		System::String^ selectedImagePath = listBoxImagePath->SelectedItem->ToString();
		CommonMethods::loadImagePathToPictureBox(picBoxOriginalImage, selectedImagePath);
	}
	private: System::Void btnExtractBackground_Click(System::Object^ sender, System::EventArgs^ e) {
		processImage();
	}
		   // extract background via Fast SVD per channel of Scene Background Initialization (SBI) dataset
	private: void processImage() {
		auto startTime = std::chrono::high_resolution_clock::now();
		// get list of image paths from listbox
		std::vector<std::string> imagePaths = getImagePaths();

		std::vector<cv::Mat> listMatFrames = getListMatFrames(imagePaths);
		int numOfFrames = static_cast<int>(listMatFrames.size());
		txtNumOfFrames->Text = numOfFrames.ToString();

		if (numOfFrames <= 0) {
			MessageBox::Show("No images loaded!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// ensure consistent size & channels: drop frames that do not match the first one
		cv::Size frameSize = listMatFrames[0].size();
		int channels = listMatFrames[0].channels();
		std::vector<cv::Mat> consistentFrames;

		for (const auto& f : listMatFrames) {
			if (f.size() == frameSize && f.channels() == channels) {
				consistentFrames.push_back(f);
			}
		}
		if (consistentFrames.empty()) {
			MessageBox::Show("No compatible frames (size/channel mismatch).", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		// use only consistent frames
		listMatFrames = std::move(consistentFrames);
		numOfFrames = static_cast<int>(listMatFrames.size());
		txtNumOfFrames->Text = numOfFrames.ToString();

		// compute background via Fast SVD per channel and merge
		cv::Mat backgroundImage;
		bool success = computeBackgroundPerChannelByFastSVD(listMatFrames, backgroundImage);

		auto endTime = std::chrono::high_resolution_clock::now();
		auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime);
		double timeTakenInMinutes = static_cast<double>(duration.count()) / 60000.0;
		txtTimeTaken->Text = timeTakenInMinutes.ToString("F2");

		if (success) {
			CommonMethods::loadCvMatToPictureBox(backgroundImage, picBoxBackground);
			extractForeground(listMatFrames, backgroundImage);
			MessageBox::Show("Background extraction completed!", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Background extraction failed.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	
	private: void extractForeground(const std::vector<cv::Mat>& listMatFrames, const cv::Mat& backgroundImage) {
		// extractForeground
		// -----------------
		// Purpose:
		//   Compute a foreground visualization by subtracting a computed background image
		//   from the first input frame. The result is a mask of pixels that differ from
		//   the background (likely moving/foreground objects). The visualization shows
		//   the original frame colors only at foreground locations.
		//
		// Inputs:
		//   - listMatFrames: vector of BGR color frames (cv::Mat). The first frame
		//     (index 0) is used as the reference to extract foreground.
		//   - backgroundImage: computed background image (cv::Mat) with the same size
		//     and type as frames in listMatFrames.
		//
		// Behavior / algorithm:
		//   1. Validate that there is at least one frame and that the first frame's
		//      size/type matches the background. If not matching, the method falls
		//      back to simply showing the first frame in the foreground PictureBox.
		//   2. Compute absolute per-channel difference between the first frame and
		//      the background: diffColor = abs(firstFrame - backgroundImage).
		//   3. Convert the per-channel difference to a single-channel grayscale image
		//      by cvtColor(..., cv::COLOR_BGR2GRAY). This collapses per-channel
		//      differences into a single magnitude per pixel.
		//   4. Threshold the grayscale difference to produce a binary foreground mask
		//      (fgMask). Pixels with difference greater than 'threshVal' are considered
		//      foreground. The threshold is a tunable parameter.
		//   5. Apply small morphological operations (opening then dilation) to reduce
		//      salt-and-pepper noise and to slightly enlarge detected foreground
		//      regions. Kernel size and morphology sequence are tunable.
		//   6. Create a visualization by copying the original color pixels where the
		//      binary mask is set; elsewhere the visualization is black. This colored
		//      foreground image is loaded into 'picBoxForeground'.
		//
		// Outputs / UI effects:
		//   - Displays the foreground visualization in the form's 'picBoxForeground'.
		//
		// Notes / tuning:
		//   - 'threshVal' controls sensitivity. Increase to ignore small differences
		//     (e.g., lighting noise), decrease to detect subtle motion.
		//   - The morphological kernel size controls noise removal and smoothing.
		//   - For noisy backgrounds or lighting changes, consider computing an
		//     adaptive threshold or using more advanced foreground refinement
		//     (connected component filtering, contour area filtering, temporal
		//     consistency checks).
		//   - This function assumes BGR 8-bit input images and a background of the
		//     same type. If using float CV_32F computation for background, convert
		//     appropriately before calling this routine.
		if (!listMatFrames.empty() && listBoxImagePath->SelectedIndex >= 0) {
			cv::Mat firstFrame = CommonMethods::readCVMatFromFilePath(listBoxImagePath->SelectedItem->ToString());
			// ensure same size/type
			if (firstFrame.size() == backgroundImage.size() && firstFrame.type() == backgroundImage.type()) {
				cv::Mat diffColor;
				cv::absdiff(firstFrame, backgroundImage, diffColor);

				cv::Mat diffGray;
				cv::cvtColor(diffColor, diffGray, cv::COLOR_BGR2GRAY);

				// threshold to get foreground mask
				cv::Mat fgMask;
				const int threshVal = 80;
				cv::threshold(diffGray, fgMask, threshVal, 255, cv::THRESH_BINARY);

				// optional morphology to clean noise
				cv::Mat kernel = cv::getStructuringElement(cv::MORPH_ELLIPSE, cv::Size(3, 3));
				cv::morphologyEx(fgMask, fgMask, cv::MORPH_OPEN, kernel);
				cv::morphologyEx(fgMask, fgMask, cv::MORPH_DILATE, kernel);

				// create visualization: keep original colors where mask is set
				cv::Mat foregroundVis = cv::Mat::zeros(firstFrame.size(), firstFrame.type());
				firstFrame.copyTo(foregroundVis, fgMask);

				CommonMethods::loadCvMatToPictureBox(foregroundVis, picBoxForeground);
			}
			else {
				// fallback: just show the first frame in foreground box
				CommonMethods::loadCvMatToPictureBox(listMatFrames[0], picBoxForeground);
			}
		}
	}

	private: bool computeBackgroundPerChannelByFastSVD(const std::vector<cv::Mat>& frames, cv::Mat& backgroundImage) {
		/*
		 Purpose:
		   Compute a low-rank approximation of the static background from a set
		   of color frames. The method processes each channel independently
		   (B, G, R) and uses an incremental SVD update (Brand-style) to estimate
		   a compact subspace that represents background appearance. The final
		   background per-channel is obtained by projecting the running mean onto
		   the learned subspace. Channels are merged to produce the color
		   background image returned in 'backgroundImage'.
		
		 Inputs:
		   - frames: vector of cv::Mat color images (assumed same size and type).
		   - backgroundImage (output): will contain the merged BGR background image
		     (CV_8U) on success.
		
		 Algorithm overview (Brand incremental SVD style):
		   1. For each channel c:
		      a. Vectorize the channel of each frame into column vectors x_i (p x 1)
		         where p = rows*cols. Work in CV_32F for numerical stability.
		      b. Initialize by performing SVD on a small initial data matrix
		         built from the first 'initCount' frames to obtain an initial
		         subspace basis U and diagonal singular values Sigma.
		      c. For each remaining frame, compute the projection of the new
		         vector x onto the current basis U, compute the residual r = x - U*proj
		         and its norm. If residual is non-negligible add its normalized
		         direction to the augmented basis and form a small K matrix that
		         encodes the update. Compute SVD(K) (tiny SVD) and use it to update
		         U and Sigma while truncating to the desired target rank.
		      d. After all frames are processed, compute the background vector by
		         projecting the running mean of channel vectors onto the learned
		         basis: background = U * (U^T * mean).
		   2. Reshape background vectors into channel Mats, convert to 8-bit and
		      merge channels to form the final color background image.
		
		 Returns:
		   - true on success, false on failure (e.g., empty input).
		
		 Tuning parameters and notes:
		   - targetRank: number of basis vectors to keep for each channel. Lower
		     values increase robustness to foreground (treat foreground as
		     residual) but may oversmooth background details. Default in this
		     implementation is 1 (simple background mean-like behavior).
		   - eps: small threshold to test whether the residual is significant.
		   - All intermediate computations are CV_32F. The final background is
		     converted to CV_8U for display.
		   - Complexity per channel: O(p * targetRank * numFrames) for the
		     incremental updates (plus small SVDs of size ~targetRank). Memory
		     usage is O(p * targetRank) for the basis U. This is efficient when
		     targetRank is small (typical for background modeling).
		
		*/
		if (frames.empty()) {
			return false;
		}

		// (Implementation unchanged) assume same size/type, process per-channel
		int rows = frames[0].rows;
		int cols = frames[0].cols;
		int channels = frames[0].channels();
		int numFrames = static_cast<int>(frames.size());

		const int targetRank = 1; // adjust as needed
		const float eps = 1e-6f;

		std::vector<cv::Mat> backgroundChannels;
		backgroundChannels.reserve(channels);
		int p = 0; // number of pixels per channel (rows*cols)
		cv::Mat meanVec; // running mean vector of pixel intensities
		int initCount = 0; // number of initial frames used for initial SVD
		cv::Mat dataInit; // initial data matrix (pixels x initCount)
		cv::Mat ch; // temporary extracted channel image
		cv::Mat col; // temporary column reference into dataInit
		cv::Mat U; // left singular vectors (p x r)
		cv::Mat W; // singular values (vector)
		cv::Mat Vt; // right singular vectors (r x r)
		int r = 0; // current rank of subspace
		cv::Mat Sigma; // diagonal matrix of singular values
		int processed = 0; // number of processed frames so far
		cv::Mat x; // flattened vector of current frame
		cv::Mat proj; // projection of x into subspace
		cv::Mat recon; // reconstruction of x from subspace
		cv::Mat residual; // residual = x - recon
		cv::Mat U_perp; // normalized residual vector (orthogonal direction)
		float rnorm = 0.0f; // L2 norm of residual
		int curRank = 0; // current subspace dimension
		int Ksize = 0; // size of augmented K matrix (for incremental SVD)
		cv::Mat K; // small auxiliary matrix used for SVD update
		cv::Mat Ku, Kw, Kvt; // SVD of K
		int keep = 0; // number of singular vectors to retain after update
		cv::Mat Ku_r; // truncated Ku
		cv::Mat Kw_r; // truncated Kw
		cv::Mat U_aug; // augmented U (includes new direction)
		cv::Mat U_new; // updated U after SVD
		cv::Mat Sigma_new; // updated Sigma
		cv::Mat Sigma_trim; // trimmed Sigma (for rank truncation)
		cv::Mat backgroundVec; // vectorized background estimate
		cv::Mat backgroundChannel; // background image per channel

		for (int c = 0; c < channels; c++) {
			p = rows * cols; // total pixels for this channel

			// compute mean vector (float) and optionally initialize with first few frames
			meanVec = cv::Mat::zeros(p, 1, CV_32F);

			// Number of frames used to initialize SVD
			// Should be at least rank+1 (Brand's recommendation)
			initCount = std::min<int>(numFrames, std::max<int>(1, targetRank + 1));

			// Build initial data matrix from first initCount frames
			dataInit = cv::Mat(p, initCount, CV_32F);
			for (int i = 0; i < initCount; ++i) {
				cv::extractChannel(frames[i], ch, c); // extract channel c
				ch.convertTo(ch, CV_32F); // convert to float
				col = dataInit.col(i); // reference i-th column
				ch.reshape(1, p).copyTo(col); // flatten image -> column vector
				meanVec += col; // accumulate for mean
			}
			// compute initial mean
			meanVec /= static_cast<float>(initCount); 

			// initial SVD on small matrix
			cv::SVD::compute(dataInit, W, U, Vt, cv::SVD::MODIFY_A);

			// keep only top-r components
			r = std::min<int>(targetRank, W.rows); // initial rank to keep
			if (r <= 0) {
				r = 1; // ensure at least one component
			}

			// Truncate U and create Sigma matrix
			U = U.colRange(0, r).clone(); // p x r
			Sigma = cv::Mat::zeros(r, r, CV_32F);
			for (int i = 0; i < r; i++) {
				Sigma.at<float>(i, i) = W.at<float>(i, 0);
			}

			processed = initCount; // processed initial frames

			// incremental svd update for remaining frames
			// process remaining frames incrementally using Brand's method
			for (int idx = initCount; idx < numFrames; idx++) {
				// Flatten current channel frame
				cv::extractChannel(frames[idx], ch, c);
				ch.convertTo(ch, CV_32F);
				x = ch.reshape(1, p); // p x 1

				// update running mean (numerically stable form)
				meanVec = (meanVec * static_cast<float>(processed) + x) / static_cast<float>(processed + 1);

				// project new sample onto current subspace
				if (!U.empty()) {
					proj = U.t() * x; // r x 1 projection coefficients
				}
				else {
					proj = cv::Mat::zeros(0, 1, CV_32F);
				}

				// Reconstruct x from subspace and compute residual
				recon = U.empty() ? cv::Mat::zeros(p, 1, CV_32F) : U * proj;
				residual = x - recon;
				rnorm = static_cast<float>(cv::norm(residual, cv::NORM_L2));

				// Compute orthogonal component if residual significant
				if (rnorm > eps) {
					U_perp = residual / rnorm; // p x 1, normalized orthogonal direction
				}

				// build small K matrix
				curRank = U.cols; // current rank r
				Ksize = curRank + (rnorm > eps ? 1 : 0); // size of augmented K

				// build small matrix k for svd update
				K = cv::Mat::zeros(Ksize, Ksize, CV_32F);
				// top-left: Sigma (r x r)
				// Copy old singular values into top-left block
				for (int i = 0; i < curRank; i++) {
					for (int j = 0; j < curRank; j++) {
						K.at<float>(i, j) = Sigma.at<float>(i, j);
					}
				}

				// top-right: proj (r x 1)
				// Add projections (cross-terms)
				for (int i = 0; i < curRank; i++) {
					K.at<float>(i, curRank) = proj.rows > 0 ? proj.at<float>(i, 0) : 0.0f;
				}

				// Bottom-right element = residual norm
				if (rnorm > eps) {
					K.at<float>(Ksize - 1, Ksize - 1) = rnorm;
				}

				// SVD of small K
				cv::SVD::compute(K, Kw, Ku, Kvt, cv::SVD::MODIFY_A);

				// truncate to targetRank
				keep = std::min<int>(targetRank, Kw.rows);
				Ku_r = Ku.colRange(0, keep).clone(); // (curRank + maybe1) x keep
				Kw_r = cv::Mat::zeros(keep, keep, CV_32F);
				for (int i = 0; i < keep; i++) {
					Kw_r.at<float>(i, i) = Kw.at<float>(i, 0);
				}

				// build augmented U matrix [U, U_perp]
				if (rnorm > eps) {
					// concatenate U and U_perp
					U_aug = cv::Mat(p, curRank + 1, CV_32F);
					if (curRank > 0) {
						U.copyTo(U_aug.colRange(0, curRank));
					}
					U_perp.copyTo(U_aug.col(curRank));
				}
				else {
					U_aug = U.clone();
				}

				// update U = U_aug * Ku_r (p x keep)
				U_new = U_aug * Ku_r;
				// update Sigma
				Sigma_new = Kw_r;

				// ensure sizes: keep columns = keep
				U = U_new.clone();
				Sigma = Sigma_new.clone();

				// if we grew larger than targetRank, keep only first targetRank columns
				if (U.cols > targetRank) {
					U = U.colRange(0, targetRank).clone();
					Sigma_trim = cv::Mat::zeros(targetRank, targetRank, CV_32F);
					for (int i = 0; i < targetRank; i++) {
						Sigma_trim.at<float>(i, i) = Sigma.at<float>(i, i);
					}
					Sigma = Sigma_trim;
				}

				processed++;
			}

			// After processing all frames, compute background as projection of meanVec onto subspace U
			if (!U.empty()) {
				cv::Mat coeffs = U.t() * meanVec; // k x 1
				backgroundVec = U * coeffs; // p x 1
			}
			else {
				backgroundVec = meanVec.clone();
			}

			// Reshape vector back into 2D image form
			cv::Mat backgroundChannel = backgroundVec.reshape(1, rows);

			// clamp and convert to 8-bit
			cv::Mat backgroundChannel8;
			backgroundChannel.convertTo(backgroundChannel8, CV_8U);
			backgroundChannels.push_back(backgroundChannel8);
		}

		// merge channels to form the background image
		cv::merge(backgroundChannels, backgroundImage);

		return true;
	}

	private: std::vector<std::string> getImagePaths() {
		std::vector<std::string> imagePaths;
		System::String^ imagePath;
		std::string stdImagePath;

		for (int i = 0; i < listBoxImagePath->Items->Count; i++) {
			imagePath = listBoxImagePath->Items[i]->ToString();
			stdImagePath = CommonMethods::convertSystemStringToStdString(imagePath);
			imagePaths.push_back(stdImagePath);
		}

		std::sort(imagePaths.begin(), imagePaths.end());

		return imagePaths;
	}

	private: std::vector<cv::Mat> getListMatFrames(const std::vector<std::string>& imagePaths) {
		// read images from image paths
		std::vector<cv::Mat> listMatFrames;
		cv::Mat mat;

		for (const auto& path : imagePaths) {
			mat = cv::imread(path, cv::IMREAD_COLOR);
			if (!mat.empty()) {
				listMatFrames.push_back(mat);
			}
		}

		return listMatFrames;
	}

	}; // class FormSVDBackgroundSubtraction

} // namespace DigitalImageProcessingCLR
