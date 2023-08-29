/*
Author: Fatima Asif
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E2.10, Cost per 100 miles, HW

Write a program that asks the user to input: 
the number of gallons of gas in the tank, 
the fuel efficiency in miles per gallon,
and the price of gas per gallon. 
Then print the cost per 100 miles
and how far the car can go with gas in the tank.
*/

#include <iostream>
using namespace std;

int main()
{
        // declaring variables for user input
    double number_of_gallons; // double is able to hold larger integers
    double fuel_efficiency;
    double price_per_gallon;

        // declaring variables for executing equations
    double price_miles;
    double distance_travel;

        // storing the users input
    cout << "What is the number of gallons of gas in the cars tank?" << endl;
    cin >> number_of_gallons;
    cout << "What is the cars fuel efficiency in miles per gallon?" << endl;
    cin >> fuel_efficiency;
    cout << "What is the price of gas per gallon?" << endl;
    cin >> price_per_gallon;

        // finding the cost per 100 miles
    price_miles = (100.00 / fuel_efficiency * price_per_gallon);
    cout << "The cost of this car traveling 100 miles is " << price_miles << " dollars." << endl;

        // how far the car can go with gas in the tank
    distance_travel = number_of_gallons * fuel_efficiency;
    cout << "The car can travel " << distance_travel << " miles." << endl;

}
