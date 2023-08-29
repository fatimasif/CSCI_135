/*
Author: Fatima Asif
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E9.5, HW

Implement a class Rectangle. Provide a constructor to construct a rectangle with a 
given width and height, member functions float get_perimeter() and float get_area()
that compute the perimeter and area, and a member function void resize(double factor)
that resizes the rectangle by multiplying the width and height by the given float factor.
*/

#include <iostream>
using namespace std;

class Rectangle {
public:
    float width;
    float height;

    Rectangle(float w, float h) {
        width = w;
        height = h;
    }

    float get_perimeter() {
        return 2 * (width + height);
    }

    float get_area() {
        return width * height;
    }

    void resize(double factor) {
        width *= factor;
        height *= factor;
    }
};
