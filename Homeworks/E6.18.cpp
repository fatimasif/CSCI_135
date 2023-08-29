/*
Author: Fatima Asif
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E6.18, HW

Write a function vector <int> append (vector <int> a, vector <int> b) that
appends one vector after another. E.G. if a is 1 4 9 16 and b is 9 7 4 9 11, then append
returns 1 4 9 16 9 7 4 9 11
*/

#include <vector>

using namespace std;

vector<int> append(vector<int> a, vector<int> b) {
        // Loop over the elements of vector b
    for (int i = 0; i < b.size(); i++) {
            // Append each element of b to the end of a using push_back()
        a.push_back(b[i]);
    }
        // Return the concatenated vector a
    return a;
}
