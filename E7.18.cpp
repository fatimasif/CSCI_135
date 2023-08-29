/*
Author: Fatima Asif
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E7.18, HW

Define a structure Triangle that contains three Point members. 
Write a function that computes the perimeter() of a Triangle.
Write a program that reads the coordinates of the points, calls your function, and displays the result.
*/

#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x; //x coord
    double y; //y coord
};

    // define a structure triangle
struct Triangle {
    Point p1;
    Point p2;
    Point p3;
};

    // computing the perimeter
double perimeter(Triangle tri) {
    double distance1 = sqrt(pow(tri.p1.x - tri.p2.x, 2) + pow(tri.p1.y - tri.p2.y, 2));   // distance between point 1 and point 2
    double distance2 = sqrt(pow(tri.p2.x - tri.p3.x, 2) + pow(tri.p2.y - tri.p3.y, 2));   // distance between point 2 and point 3
    double distance3 = sqrt(pow(tri.p1.x - tri.p3.x, 2) + pow(tri.p1.y - tri.p3.y, 2)); // distance between point 1 and point 3   
    return (distance1 + distance2 + distance3); 
}

    //program that reads coordinates, calls function, and displays result
int main() {
    Triangle tri;
    cout << "First point: ";
    cin >> tri.p1.x >> tri.p1.y;
    cout << "Second point: ";
    cin >> tri.p2.x >> tri.p2.y;
    cout << "Third point: ";
    cin >> tri.p3.x >> tri.p3.y;
    cout << "Perimeter: " << perimeter(tri) << endl;
    return 0;
}