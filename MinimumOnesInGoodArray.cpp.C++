// A. The Good Array
// time limit per test1 second
// memory limit per test256 megabytes
// You are given two integers n
//  and k
// .

// An array a1,a2,…,an
//  of length n
// , consisting of zeroes and ones is good if for all integers i
//  from 1
//  to n
//  both of the following conditions are satisfied:

// at least ⌈ik⌉
//  of the first i
//  elements of a
//  are equal to 1
// ,
// at least ⌈ik⌉
//  of the last i
//  elements of a
//  are equal to 1
// .
// Here, ⌈ik⌉
//  denotes the result of division of i
//  by k
// , rounded up. For example, ⌈63⌉=2
// , ⌈115⌉=⌈2.2⌉=3
//  and ⌈74⌉=⌈1.75⌉=2
// .

// Find the minimum possible number of ones in a good array.

// Input
// Each test contains multiple test cases. The first line contains a single integer t
//  (1≤t≤104
// ) — the number of test cases.

// The only line of each test case contains two integers n
// , k
//  (2≤n≤100
// , 1≤k≤n
// ) — the length of array and parameter k
//  from the statement.

// Output
// For each test case output one integer — the minimum possible number of ones in a good array.

// It can be shown that under the given constraints at least one good array always exists.

#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int t;
    cout << "Enter number of test cases: ";
    cin >> t; 

    while (t--) {
        int n, k;
        cout << "\nEnter n (length of array) and k (parameter): ";
        cin >> n >> k; 

        int minOnes = (n + k - 1) / k; 
        cout << "Minimum number of ones in a good array: " << minOnes << endl;
    }

    return 0;
}
