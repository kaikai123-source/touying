#include<opencv2\opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main() {
	Mat dst;
	Mat src = imread("D:\\1.png",1);
	const Point2f src_pt[] = {
		Point2f(150,150),
		Point2f(150,300),
		Point2f(350,300),
		Point2f(350,150)
	};
	const Point2f dst_pt[]{
		Point2f(200,150),
		Point2f(200,300),
		Point2f(340,270),
		Point2f(340,180)
	};
	 Mat perspective_matrix = getPerspectiveTransform(src_pt, dst_pt);
	warpPerspective(src, dst, perspective_matrix, src.size());
	imshow("src", src);
	imshow("dts", dst);
	waitKey(0);



}