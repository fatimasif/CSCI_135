/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: smaller.cpp, Lab-01

Write a program smaller.cpp that asks the user to input two integer
numbers and prints out the smaller of the two.
*/

#include <iostream>
using namespace std;

int main()
{
   // declaring variables
 int num1;
 int num2;
   // storing the users input in the variables
 cout << "Input a number!" << endl;
 cin >> num1;
 cout << "Input a second number!" << endl;
 cin >> num2;
   // comparing the numbers in an if-else statement
 if (num1 > num2){
    cout << num2 << " is the smaller number." << endl;
 } 
 else{
    cout << num1 << " is the smaller number." << endl;
 }

}