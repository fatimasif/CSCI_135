/*
Author: Fatima Asif
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E7.16, HW

Define a structure point. A point has an x- and a y- coordinate. Write a function double distance(Point a, Point b) 
that computes the distance from a to b. Write a program that reads the coordinates of the points, calls your function, and displays the result.
*/

#include <iostream>
#include <cmath>
using namespace std;

    // define a structure point
class Point {
public:
    double x; 
    double y; 
};

    // computes distance from a to b
double distance(Point a, Point b) {
        // using the distance formula
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

    // program that calls the function and displays the result
int main() {
    Point p1, p2;
    cout << "Point 1 coordinates: " << endl;
    cin >> p1.x >> p1.y;
    cout << "Point 2 coordinates: " << endl;
    cin >> p2.x >> p2.y;
    cout << distance(p1, p2) << endl; 
    return 0;
}