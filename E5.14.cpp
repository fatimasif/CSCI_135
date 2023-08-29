/*
Author: Fatima Asif
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E5.14, HW

Write a function void sort2(int& a, int& b) that swaps the value of a and b, 
if a is greater than b and otherwise leaves a and b unchanged. 
For example: int u = 2; int v = 3; int w = 4; int x = 1; sort2(u, v);
// u is still 2, v is still 3
// sort2(w, x);
// w is now 1, x is now 4
*/

#include <iostream>

void sort2(int& a, int& b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

int main() {
    // Test 1: a is greater than b
    int a = 5;
    int b = 3;
    sort2(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;

    // Test 2: b is greater than a
    int c = 1;
    int d = 4;
    sort2(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;

    // Test 3: a and b are equal
    int e = 2;
    int f = 2;
    sort2(e, f);
    std::cout << "e = " << e << ", f = " << f << std::endl;

    return 0;
}
