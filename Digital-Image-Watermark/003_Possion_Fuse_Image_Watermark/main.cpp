#include <iostream>
#include <opencv2/opencv.hpp>
#include <string>

using namespace std;
using namespace cv;

int main()
{
	Mat img = imread("./image/wallhaven-4895.jpg");
	imshow("ԭʼͼ��", img);

	Mat logo = imread("./image/timg.jpg");
	imshow("ˮӡͼ��", logo);

	Mat mask = imread("./image/mask.jpg",0);
	imshow("��ģͼ��", mask);

	Mat result;
	Point center(100, 450);
	seamlessClone(logo, img, mask, center, result, NORMAL_CLONE);
	imshow("���ͼ��", result);
	imwrite("./image/wallhaven-4895-watermark.jpg", result);

	waitKey(0);
	return 0;
}