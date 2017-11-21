// Main.cpp

#include<opencv2/opencv.hpp>

#include<iostream>
#include<conio.h>           // may have to modify this line if not using Windows

#include"Line.h"

//  constants //////////////////////////////////////////////////////////////////////////////////////////////
const cv::Scalar SCALAR_BLACK = cv::Scalar(0.0, 0.0, 0.0);
const cv::Scalar SCALAR_WHITE = cv::Scalar(255.0, 255.0, 255.0);
const cv::Scalar SCALAR_BLUE = cv::Scalar(255.0, 0.0, 0.0);
const cv::Scalar SCALAR_GREEN = cv::Scalar(0.0, 200.0, 0.0);
const cv::Scalar SCALAR_RED = cv::Scalar(0.0, 0.0, 255.0);

// function prototypes ////////////////////////////////////////////////////////////////////////////
// 3 test functions
void testNeg90ToPos90Function(cv::Mat &imgLines);
void testNeg180ToPos180Function(cv::Mat &imgLines);
void test0To360Function(cv::Mat &imgLines);

double getLineAngleNeg90ToPos90(Line line);
double getLineAngleNeg180ToPos180(Line line);
double getLineAngle0To360(Line line);

double radiansToDegrees(double radians);

///////////////////////////////////////////////////////////////////////////////////////////////////
int main() {

    cv::Mat imgLines(650, 900, CV_8UC3, SCALAR_BLACK);

    // to test the functions below, un-comment any one of these 3 lines:
    //testNeg90ToPos90Function(imgLines);
    //testNeg180ToPos180Function(imgLines);
    test0To360Function(imgLines);

    cv::imshow("imgLines", imgLines);

    std::cout << "\n" << "done !!" << "\n\n";

    cv::waitKey();

    return(0);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void testNeg90ToPos90Function(cv::Mat &imgLines) {
    // line 1
    Line line1(cv::Point(300, 300), cv::Point(500, 300));
    cv::line(imgLines, line1.point1, line1.point2, SCALAR_WHITE, 2);
    std::cout << "line 1 angle = " << getLineAngleNeg90ToPos90(line1) << "\n\n";

    // line 2
    Line line2(cv::Point(300, 300), cv::Point(500, 400));
    cv::line(imgLines, line2.point1, line2.point2, SCALAR_WHITE, 2);
    std::cout << "line 2 angle = " << getLineAngleNeg90ToPos90(line2) << "\n\n";

    // line 3
    Line line3(cv::Point(300, 300), cv::Point(500, 500));
    cv::line(imgLines, line3.point1, line3.point2, SCALAR_WHITE, 2);
    std::cout << "line 3 angle = " << getLineAngleNeg90ToPos90(line3) << "\n\n";

    // line 4
    Line line4(cv::Point(300, 300), cv::Point(400, 500));
    cv::line(imgLines, line4.point1, line4.point2, SCALAR_WHITE, 2);
    std::cout << "line 4 angle = " << getLineAngleNeg90ToPos90(line4) << "\n\n";

    // line 5
    Line line5(cv::Point(300, 300), cv::Point(300, 500));
    cv::line(imgLines, line5.point1, line5.point2, SCALAR_WHITE, 2);
    std::cout << "line 5 angle = " << getLineAngleNeg90ToPos90(line5) << "\n\n";

    // line 6
    Line line6(cv::Point(300, 300), cv::Point(200, 500));
    cv::line(imgLines, line6.point1, line6.point2, SCALAR_WHITE, 2);
    std::cout << "line 6 angle = " << getLineAngleNeg90ToPos90(line6) << "\n\n";

    // line 7
    Line line7(cv::Point(300, 300), cv::Point(100, 500));
    cv::line(imgLines, line7.point1, line7.point2, SCALAR_WHITE, 2);
    std::cout << "line 7 angle = " << getLineAngleNeg90ToPos90(line7) << "\n\n";

    // line 8
    Line line8(cv::Point(300, 300), cv::Point(100, 400));
    cv::line(imgLines, line8.point1, line8.point2, SCALAR_WHITE, 2);
    std::cout << "line 8 angle = " << getLineAngleNeg90ToPos90(line8) << "\n\n";

    // line 9
    Line line9(cv::Point(300, 300), cv::Point(100, 300));
    cv::line(imgLines, line9.point1, line9.point2, SCALAR_WHITE, 2);
    std::cout << "line 9 angle = " << getLineAngleNeg90ToPos90(line9) << "\n\n";

    // line 10
    Line line10(cv::Point(300, 300), cv::Point(100, 200));
    cv::line(imgLines, line10.point1, line10.point2, SCALAR_WHITE, 2);
    std::cout << "line 10 angle = " << getLineAngleNeg90ToPos90(line10) << "\n\n";

    // line 11
    Line line11(cv::Point(300, 300), cv::Point(100, 100));
    cv::line(imgLines, line11.point1, line11.point2, SCALAR_WHITE, 2);
    std::cout << "line 11 angle = " << getLineAngleNeg90ToPos90(line11) << "\n\n";

    // line 12
    Line line12(cv::Point(300, 300), cv::Point(200, 100));
    cv::line(imgLines, line12.point1, line12.point2, SCALAR_WHITE, 2);
    std::cout << "line 12 angle = " << getLineAngleNeg90ToPos90(line12) << "\n\n";

    // line 13
    Line line13(cv::Point(300, 300), cv::Point(300, 100));
    cv::line(imgLines, line13.point1, line13.point2, SCALAR_WHITE, 2);
    std::cout << "line 13 angle = " << getLineAngleNeg90ToPos90(line13) << "\n\n";

    // line 14
    Line line14(cv::Point(300, 300), cv::Point(400, 100));
    cv::line(imgLines, line14.point1, line14.point2, SCALAR_WHITE, 2);
    std::cout << "line 14 angle = " << getLineAngleNeg90ToPos90(line14) << "\n\n";

    // line 15
    Line line15(cv::Point(300, 300), cv::Point(500, 100));
    cv::line(imgLines, line15.point1, line15.point2, SCALAR_WHITE, 2);
    std::cout << "line 15 angle = " << getLineAngleNeg90ToPos90(line15) << "\n\n";

    // line 16
    Line line16(cv::Point(300, 300), cv::Point(500, 200));
    cv::line(imgLines, line16.point1, line16.point2, SCALAR_WHITE, 2);
    std::cout << "line 16 angle = " << getLineAngleNeg90ToPos90(line16) << "\n\n";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void testNeg180ToPos180Function(cv::Mat &imgLines) {
    // line 1
    Line line1(cv::Point(300, 300), cv::Point(500, 300));
    cv::line(imgLines, line1.point1, line1.point2, SCALAR_WHITE, 2);
    std::cout << "line 1 angle = " << getLineAngleNeg180ToPos180(line1) << "\n\n";

    // line 2
    Line line2(cv::Point(300, 300), cv::Point(500, 400));
    cv::line(imgLines, line2.point1, line2.point2, SCALAR_WHITE, 2);
    std::cout << "line 2 angle = " << getLineAngleNeg180ToPos180(line2) << "\n\n";

    // line 3
    Line line3(cv::Point(300, 300), cv::Point(500, 500));
    cv::line(imgLines, line3.point1, line3.point2, SCALAR_WHITE, 2);
    std::cout << "line 3 angle = " << getLineAngleNeg180ToPos180(line3) << "\n\n";

    // line 4
    Line line4(cv::Point(300, 300), cv::Point(400, 500));
    cv::line(imgLines, line4.point1, line4.point2, SCALAR_WHITE, 2);
    std::cout << "line 4 angle = " << getLineAngleNeg180ToPos180(line4) << "\n\n";

    // line 5
    Line line5(cv::Point(300, 300), cv::Point(300, 500));
    cv::line(imgLines, line5.point1, line5.point2, SCALAR_WHITE, 2);
    std::cout << "line 5 angle = " << getLineAngleNeg180ToPos180(line5) << "\n\n";

    // line 6
    Line line6(cv::Point(300, 300), cv::Point(200, 500));
    cv::line(imgLines, line6.point1, line6.point2, SCALAR_WHITE, 2);
    std::cout << "line 6 angle = " << getLineAngleNeg180ToPos180(line6) << "\n\n";

    // line 7
    Line line7(cv::Point(300, 300), cv::Point(100, 500));
    cv::line(imgLines, line7.point1, line7.point2, SCALAR_WHITE, 2);
    std::cout << "line 7 angle = " << getLineAngleNeg180ToPos180(line7) << "\n\n";

    // line 8
    Line line8(cv::Point(300, 300), cv::Point(100, 400));
    cv::line(imgLines, line8.point1, line8.point2, SCALAR_WHITE, 2);
    std::cout << "line 8 angle = " << getLineAngleNeg180ToPos180(line8) << "\n\n";

    // line 9
    Line line9(cv::Point(300, 300), cv::Point(100, 300));
    cv::line(imgLines, line9.point1, line9.point2, SCALAR_WHITE, 2);
    std::cout << "line 9 angle = " << getLineAngleNeg180ToPos180(line9) << "\n\n";

    // line 10
    Line line10(cv::Point(300, 300), cv::Point(100, 200));
    cv::line(imgLines, line10.point1, line10.point2, SCALAR_WHITE, 2);
    std::cout << "line 10 angle = " << getLineAngleNeg180ToPos180(line10) << "\n\n";

    // line 11
    Line line11(cv::Point(300, 300), cv::Point(100, 100));
    cv::line(imgLines, line11.point1, line11.point2, SCALAR_WHITE, 2);
    std::cout << "line 11 angle = " << getLineAngleNeg180ToPos180(line11) << "\n\n";

    // line 12
    Line line12(cv::Point(300, 300), cv::Point(200, 100));
    cv::line(imgLines, line12.point1, line12.point2, SCALAR_WHITE, 2);
    std::cout << "line 12 angle = " << getLineAngleNeg180ToPos180(line12) << "\n\n";

    // line 13
    Line line13(cv::Point(300, 300), cv::Point(300, 100));
    cv::line(imgLines, line13.point1, line13.point2, SCALAR_WHITE, 2);
    std::cout << "line 13 angle = " << getLineAngleNeg180ToPos180(line13) << "\n\n";

    // line 14
    Line line14(cv::Point(300, 300), cv::Point(400, 100));
    cv::line(imgLines, line14.point1, line14.point2, SCALAR_WHITE, 2);
    std::cout << "line 14 angle = " << getLineAngleNeg180ToPos180(line14) << "\n\n";

    // line 15
    Line line15(cv::Point(300, 300), cv::Point(500, 100));
    cv::line(imgLines, line15.point1, line15.point2, SCALAR_WHITE, 2);
    std::cout << "line 15 angle = " << getLineAngleNeg180ToPos180(line15) << "\n\n";

    // line 16
    Line line16(cv::Point(300, 300), cv::Point(500, 200));
    cv::line(imgLines, line16.point1, line16.point2, SCALAR_WHITE, 2);
    std::cout << "line 16 angle = " << getLineAngleNeg180ToPos180(line16) << "\n\n";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void test0To360Function(cv::Mat &imgLines) {
    // line 1
    Line line1(cv::Point(300, 300), cv::Point(500, 300));
    cv::line(imgLines, line1.point1, line1.point2, SCALAR_WHITE, 2);
    std::cout << "line 1 angle = " << getLineAngle0To360(line1) << "\n\n";

    // line 2
    Line line2(cv::Point(300, 300), cv::Point(500, 400));
    cv::line(imgLines, line2.point1, line2.point2, SCALAR_WHITE, 2);
    std::cout << "line 2 angle = " << getLineAngle0To360(line2) << "\n\n";

    // line 3
    Line line3(cv::Point(300, 300), cv::Point(500, 500));
    cv::line(imgLines, line3.point1, line3.point2, SCALAR_WHITE, 2);
    std::cout << "line 3 angle = " << getLineAngle0To360(line3) << "\n\n";

    // line 4
    Line line4(cv::Point(300, 300), cv::Point(400, 500));
    cv::line(imgLines, line4.point1, line4.point2, SCALAR_WHITE, 2);
    std::cout << "line 4 angle = " << getLineAngle0To360(line4) << "\n\n";

    // line 5
    Line line5(cv::Point(300, 300), cv::Point(300, 500));
    cv::line(imgLines, line5.point1, line5.point2, SCALAR_WHITE, 2);
    std::cout << "line 5 angle = " << getLineAngle0To360(line5) << "\n\n";

    // line 6
    Line line6(cv::Point(300, 300), cv::Point(200, 500));
    cv::line(imgLines, line6.point1, line6.point2, SCALAR_WHITE, 2);
    std::cout << "line 6 angle = " << getLineAngle0To360(line6) << "\n\n";

    // line 7
    Line line7(cv::Point(300, 300), cv::Point(100, 500));
    cv::line(imgLines, line7.point1, line7.point2, SCALAR_WHITE, 2);
    std::cout << "line 7 angle = " << getLineAngle0To360(line7) << "\n\n";

    // line 8
    Line line8(cv::Point(300, 300), cv::Point(100, 400));
    cv::line(imgLines, line8.point1, line8.point2, SCALAR_WHITE, 2);
    std::cout << "line 8 angle = " << getLineAngle0To360(line8) << "\n\n";

    // line 9
    Line line9(cv::Point(300, 300), cv::Point(100, 300));
    cv::line(imgLines, line9.point1, line9.point2, SCALAR_WHITE, 2);
    std::cout << "line 9 angle = " << getLineAngle0To360(line9) << "\n\n";

    // line 10
    Line line10(cv::Point(300, 300), cv::Point(100, 200));
    cv::line(imgLines, line10.point1, line10.point2, SCALAR_WHITE, 2);
    std::cout << "line 10 angle = " << getLineAngle0To360(line10) << "\n\n";

    // line 11
    Line line11(cv::Point(300, 300), cv::Point(100, 100));
    cv::line(imgLines, line11.point1, line11.point2, SCALAR_WHITE, 2);
    std::cout << "line 11 angle = " << getLineAngle0To360(line11) << "\n\n";

    // line 12
    Line line12(cv::Point(300, 300), cv::Point(200, 100));
    cv::line(imgLines, line12.point1, line12.point2, SCALAR_WHITE, 2);
    std::cout << "line 12 angle = " << getLineAngle0To360(line12) << "\n\n";

    // line 13
    Line line13(cv::Point(300, 300), cv::Point(300, 100));
    cv::line(imgLines, line13.point1, line13.point2, SCALAR_WHITE, 2);
    std::cout << "line 13 angle = " << getLineAngle0To360(line13) << "\n\n";

    // line 14
    Line line14(cv::Point(300, 300), cv::Point(400, 100));
    cv::line(imgLines, line14.point1, line14.point2, SCALAR_WHITE, 2);
    std::cout << "line 14 angle = " << getLineAngle0To360(line14) << "\n\n";

    // line 15
    Line line15(cv::Point(300, 300), cv::Point(500, 100));
    cv::line(imgLines, line15.point1, line15.point2, SCALAR_WHITE, 2);
    std::cout << "line 15 angle = " << getLineAngle0To360(line15) << "\n\n";

    // line 16
    Line line16(cv::Point(300, 300), cv::Point(500, 200));
    cv::line(imgLines, line16.point1, line16.point2, SCALAR_WHITE, 2);
    std::cout << "line 16 angle = " << getLineAngle0To360(line16) << "\n\n";
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double getLineAngleNeg90ToPos90(Line line) {
    double deltaY = (double)(line.point2.y - line.point1.y);
    double deltaX = (double)(line.point2.x - line.point1.x);
    double angle = radiansToDegrees(atan(deltaY / deltaX));

    return(angle);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double getLineAngleNeg180ToPos180(Line line) {
    double deltaY = (double)(line.point2.y - line.point1.y);
    double deltaX = (double)(line.point2.x - line.point1.x);
    double angle = radiansToDegrees(atan(deltaY / deltaX));

    // correction to -180 to +180 degrees
    if (deltaX < 0.0 && deltaY >= 0.0) {
        angle += 180.0;
    } else if (deltaX < 0.0 && deltaY < 0.0) {
        angle -= 180.0;
    }
    

    return(angle);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double getLineAngle0To360(Line line) {
    double deltaY = (double)line.point2.y - (double)line.point1.y;
    double deltaX = (double)line.point2.x - (double)line.point1.x;

    // correction to 0 to 360 degrees
    double angle = radiansToDegrees(atan(deltaY / deltaX));
    if (deltaX < 0.0) {
        angle += 180.0;
    } else if (deltaY < 0.0) {
        angle += 360.0;
    }

    return(angle);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double radiansToDegrees(double radians) {
    return(radians * (180.0 / CV_PI));
}

