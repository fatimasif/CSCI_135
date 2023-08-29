/*
Author: Fatima Asif
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E4.8, HW

Write a program that reads a word and prints each character of the word on a 
separate line. For example, if the user provides the input "Harry", the program prints
H
a
r
r
y
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;    // creating a variable to store the user input 
    cout << "Enter a name: " << endl;
    cin >> name;    // taking in the user input and storing it in the name variable

        // using a for loop to go through each letter in the name inputted and printing it out 
    for(int i = 0; i < name.length(); i++){     // name.length takes in the length of the name (letters) and runs the for loop for each letter
        cout << name[i] << endl;    // this will print each letter of the name line by line
    }


return 0;
}