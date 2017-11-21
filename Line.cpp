// Line.cpp

#include "Line.h"

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Line::Line() {
    // empty constructor
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
Line::Line(cv::Point point1, cv::Point point2) {
    this->point1 = point1;
    this->point2 = point2;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// returns an angle in the range -90.0 deg to +90.0 deg, computed using the C++ atan function
double Line::getAngle() {

    // ToDo: refactor this using sin or cosine so angle is 0 deg to 360 deg, not -90 to pos 90

    double opposite = (double)(point2.y - point1.y);
    double adjacent = (double)(point2.x - point1.x);
    double angle = radiansToDegrees(atan(opposite / adjacent));
    return(angle);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
cv::Point Line::getCenterPoint() {
    int averageOfXs = int(double(point1.x + point2.x) / 2.0);
    int averageOfYs = int(double(point1.y + point2.y) / 2.0);

    return cv::Point(averageOfXs, averageOfYs);
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////   
double Line::getLength() {
    double deltaX = abs(point1.x - point2.x);
    double deltaY = abs(point1.y - point2.y);
    return(sqrt(pow(deltaX, 2) + pow(deltaY, 2)));
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
double Line::radiansToDegrees(double angleInRadians) {
    return angleInRadians * (180.0 / CV_PI);
}
