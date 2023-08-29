
/*
Author: Fatima Asif
Course: CSCI-135
Instructor: M. Zamansky
Assignment: month.cpp, Lab-01

Write a program month.cpp that asks the user to input the year and the month (1-12) 
and prints the number of days in that month (taking into account leap years). 
You may not use switch case or arrays even if you know these language constructs.
*/

#include <iostream>
using namespace std;

    // to see if the year is a leap year or not
bool leap_year(int year) // holds true or false values
{
    if ( year % 4 != 0){
    return false;
}
else if( year % 100 != 0){
    return true;
}
else if( year % 400 != 0){
    return false;
}
else{
    return true;
}
}

int main()
{
    // creating variables
int year;
int month;
    // storing users input in the variables
cout << "Please input a year." << endl;
cin >> year;
cout << "Please input a month." << endl;
cin >> month;

    // if statement for the number of days in a month
if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
    cout << "31 days" << endl;
}
else if(month == 4 || month == 6 || month == 9 || month == 11){
  cout << "30 days" << endl;  
}
else if (month == 2 && leap_year(year)){
   cout << "29 days" << endl;
}
else if(month == 2){
    cout << "28 days" << endl;
}

}