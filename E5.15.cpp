/*
Author: Fatima Asif
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E5.15, HW

Write a function sort3(int& a, int& b, int& c) that swaps its three arguments 
to arrange them in sorted order. For example:
int v = 3; int w = 4; int x = 1; sort3(v, w, x); //v is now 1, w is not 3, x is now 4
Hint: use multiple calls to the sort function of Exercise E5.14
*/

#include <iostream>

void sort2(int& a, int& b) {
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

void sort3(int& a, int& b, int& c) {
    sort2(a, b);
    sort2(a, c);
    sort2(b, c);
}

int main() {
    // Test 1: a is the smallest
    int a = 2;
    int b = 5;
    int c = 3;
    sort3(a, b, c);
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    // Test 2: b is the smallest
    int d = 8;
    int e = 3;
    int f = 5;
    sort3(d, e, f);
    std::cout << "d = " << d << ", e = " << e << ", f = " << f << std::endl;

    // Test 3: c is the smallest
    int g = 6;
    int h = 4;
    int i = 1;
    sort3(g, h, i);
    std::cout << "g = " << g << ", h = " << h << ", i = " << i << std::endl;

    // Test 4: all three are equal
    int j = 3;
    int k = 3;
    int l = 3;
    sort3(j, k, l);
    std::cout << "j = " << j << ", k = " << k << ", l = " << l << std::endl;

    return 0;
}
