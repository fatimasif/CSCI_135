/*
Author: Fatima Asif
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E5.6, HW

Write a function string middle(string str) that returns a string
contaning the middle character in str if the length of str is odd,
or the two middle characters if the length is even.
For example, middle('middle') returns 'dd'.
*/

#include <iostream>
#include <string>
using namespace std;

string middle(string str){      // creating the middle function that takes in a string as a parameter 
    int length = str.length();  // assigning a variable that holds the length of the string
    if(length % 2 == 0){        // checking to see if the length of the word is even or odd
        return str.substr(length/2-1, 2);   // if even, finding the two middle letters
    }
    else{
        return str.substr(length/2, 1);     // if odd, finding the middle letter
    }
}

    // testing the function in main
int main(){
    string word;    // creating a variable that stores the users input as the word
    cout << "Please enter a word." << endl;
    cin >> word;
    cout << middle(word) << endl;   // running the function

    return 0;
}