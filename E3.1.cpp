
/*
Author: Fatima Asif
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E3.1, HW

Write a program that reads an integer and prints whether it is 
negative, zero, or positive
*/

#include <iostream>
using namespace std;

int main()
{
        // creating an integer variable and storing the users input inside it
    int integer;
    cout << "Please input an integer." << endl;
    cin >> integer;


        // creating an if-else statement that runs to check if the integer is positive or negative
    if(integer < 0){    // checking to see if the integer is less than zero
        cout << "This is a negative integer." << endl;
    }
    else if(integer == 0){      // checking to see if the integer is equal to zero
        cout << "This integer is zero." << endl;
    }
    else{       // final statment which will run if the first two statements are false
        cout << "This is a positive integer." << endl;
    }

    return 0;

    }

