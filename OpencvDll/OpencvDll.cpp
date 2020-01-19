// OpencvDll.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "OpencvDll.h"
#include <opencv2/opencv.hpp>



using namespace cv;
using namespace std;

int AddNum(int a, int b) {

	string resultspath = "1250x400.bmp";

	Mat img;
	img = imread(resultspath, IMREAD_COLOR);
	namedWindow("1", WINDOW_NORMAL);

	imshow("1", img);

	return img.rows + 20;
}

