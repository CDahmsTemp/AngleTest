// Line.h

#ifndef LINE_H
#define LINE_H

#include<opencv2/opencv.hpp>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Line {
public:
    // member variables ///////////////////////////////////////////////////////////////////////////////////////////
    cv::Point point1;
    cv::Point point2;

    // function prototypes ////////////////////////////////////////////////////////////////////////////////////////
    Line::Line();
    Line::Line(cv::Point point1, cv::Point point2);
    cv::Point Line::getCenterPoint();
    double Line::getAngle();
    double Line::getLength();
    double Line::radiansToDegrees(double angleInRadians);

    // operator overloads /////////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////////////////////////////
    bool operator == (const Line& otherLine) const {

        // comparison of objects by properties, seems to work better
        if (this->point1 == otherLine.point1 && this->point2 == otherLine.point2) return true;
        else return false;

        // comparision of objects directly (by address), does not seem to work as well or in all cases
        //if (this == &otherLine) return true;
        //else return false;
    }

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////
    bool operator != (const Line& otherLine) const {

        if (this->point1 == otherLine.point1 && this->point2 == otherLine.point2) return false;
        else return true;

        //if (this != &otherLine) return true;
        //else return false;
    }

};

#endif      // end LINE_H

