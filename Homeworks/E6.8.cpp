/*
Author: Fatima Asif
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E6.8, HW

Write a function: bool equal(int a[], int a_size, int b[], int b_size) that checks 
whether two arrays have the same elements in the same order
*/

#include <iostream>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size) {
        // check to see if the arrays have the same size
    if(a_size == b_size) { 
            // check the order of each array
        for(int i = 0; i < a_size; i++) { 
                // ccheck the elements of each array and if they don't match return false
            if(a[i] != b[i]) { 
                return false; 
            }
        }
            // if all elements are the same
        return true; 
        // return false if not the same size
    } else {
        return false; 
    }
}

// bool equal(int a[], int a_size, int b[], int b_size) {
//         // if the arrays have different sizes, they are not equal
//     if (a_size != b_size) {
//         return false;
//     }
    
//         // compare the elements of the arrays
//     for (int i = 0; i < a_size; i++) {
//         if (a[i] != b[i]) {
//             return false;
//         }
//     }
    
//         // if all elements are the same, the arrays are equal
//     return true;
// }


