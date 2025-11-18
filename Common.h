#pragma once
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <msclr\marshal_cppstd.h>
#include <vector>

using MatrixUchar2D = std::vector<std::vector<uchar>>;
using MatrixDouble2D = std::vector<std::vector<double>>;

namespace CommonMethods
{
	cv::Mat getHistogramMatrix(cv::Mat img);
	System::Drawing::Bitmap^ getBitmapFromMat(cv::Mat matImage, System::Drawing::Imaging::PixelFormat pixelFormat, size_t sizeMemcpy);
	System::Drawing::Bitmap^ getBitmapFromMat(cv::Mat matImage);
	//System::Drawing::Bitmap^ getBitmapFromMat2(const cv::Mat& cvImage);
	System::Drawing::Bitmap^ getBitmapFromMat2(cv::Mat matImage);
	void loadImagePathToListBox(System::Windows::Forms::OpenFileDialog^ openFileDialog, System::Windows::Forms::ListBox^ listBox);
	void loadImageToPictureBox(cv::Mat mat, System::Windows::Forms::PictureBox^ pictureBox);
	void loadCvMatToPictureBox(cv::Mat mat, System::Windows::Forms::PictureBox^ pictureBox);
	void showTooltipInListBoxItem(System::Windows::Forms::ListBox^ listBox, System::Windows::Forms::ToolTip^ toolTip, System::Windows::Forms::MouseEventArgs^ e);
	std::string convertSystemStringToStdString(System::String^ str);
	System::String^ convertStdStringToSystemString(std::string str);
	void loadImagePathToPictureBox(System::Windows::Forms::PictureBox^ pictureBox, System::String^ imagePath);
	cv::Mat readCVMatFromFilePath(System::String^ imagePath);
	cv::Mat getOuputMergeBGRChannels(const cv::Mat& bChannel, const cv::Mat& gChannel, const cv::Mat& rChannel);
};

