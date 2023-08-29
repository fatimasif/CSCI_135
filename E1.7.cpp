/*
Author: Fatima Asif
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E1.7, Three Items, HW

Write a program that asks the user for three items, 
such as the name of your three best friends or favorite movies,
and prints them on three seperate lines
*/

#include <iostream>
using namespace std;

int main()
{
        // variables to store each friends name
    string best_friend1; // string stores the variable as names
    string best_friend2;
    string best_friend3;

        // taking in the users input and storing it in the variables
    cout << "Think of your three best friends. What is your first best friends name?" << endl;
    cin >> best_friend1;
    cout << "What is your second best friends name?" << endl;
    cin >> best_friend2;
    cout << "What is your third best friends name?" << endl;
    cin >> best_friend3;

        // printing out the users three best friends on seperate lines
    cout << best_friend1 << endl; // endl creates seperate lines
    cout << best_friend2 << endl;
    cout << best_friend3 << endl;


}
