#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>

using namespace std;
using namespace cv;

int main()
{
	Mat img = imread("./image/wallhaven-205542.jpg");
	imshow("ԭʼͼ��", img);

	Mat logo = imread("./image/One_Piece_72_pix.png");
	imshow("ˮӡͼ��", logo);

	Mat imageWatermark(img, Rect(img.cols - logo.cols - 10, img.rows - logo.rows - 10, logo.cols, logo.rows));
	logo.copyTo(imageWatermark);

	imshow("���ͼ��", img);
	imwrite("./image/wallhaven-205542-watermark.jpg", img);

	waitKey(0);
	return 0;
}