/*
Author: Fatima Asif
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E3.5, HW

Write a program that reads three numbers and prints “increasing” if they are in
increasing order, “decreasing” if they are in decreasing order, and “neither” other-
wise. Here, “increasing” means “strictly increasing”, with each value larger than its
predecessor. The sequence 3 4 4 would not be considered increasing.
*/

#include <iostream>
using namespace std;

int main()
{
        // creating variables for the three numbers 
    double number1;
    double number2;
    double number3;

        // taking in the user input
    cout << "Please enter a number: " << endl;
    cin >> number1;
    cout << "Please enter a number: " << endl;
    cin >> number2;
    cout << "Please enter a number: " << endl;
    cin >> number3;

        // creating an if statement to see if the numbers are increasing or decreasing
    if(number1 < number2 && number2 < number3){
        cout << "The numbers are in increasing order." << endl;
    }
    else if(number1 > number2 && number2 > number3){
        cout << "The numbers are in decreasing order." << endl;
    }
    else{
        cout << "The numbers you input are neither in increasing or decreasing order." << endl;
    }

    return 0;

}