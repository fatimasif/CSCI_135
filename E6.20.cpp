/*
Author: Fatima Asif
Course: CSCI-135
Instructor: Genady Maryash
Assignment: E6.20, HW

Write a function vector <int> merge_sorted (vector <int> a, vector <int> b)
that merges two vectors, producing a new sorted vector. Keep an index into each vector
indicating how much of it has been processed already. Each time, append the smallest unprocessed element
from either vector, then advance the index. For example, if a is 1 4 9 16 and b is 4 7 9 9 11,
vthe merge_sorted returns the vector 1 4 4 7 9 9 9 11 16
*/

#include <vector>

using namespace std;

vector<int> merge_sorted(vector<int> a, vector<int> b) {
    vector<int> result;
    int i = 0, j = 0;
        // Loop until we have processed all elements in both vectors
    while (i < a.size() && j < b.size()) {
            // Append the smallest unprocessed element from either vector
        if (a[i] <= b[j]) {
            result.push_back(a[i]);
            i++;
        } else {
            result.push_back(b[j]);
            j++;
        }
    }
        // Append any remaining elements from vector a (if any)
    while (i < a.size()) {
        result.push_back(a[i]);
        i++;
    }
        // Append any remaining elements from vector b (if any)
    while (j < b.size()) {
        result.push_back(b[j]);
        j++;
    }
    return result;
}
