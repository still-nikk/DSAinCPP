/*
Write a function that takes the binary representation of a positive integer and returns the number of set bits it has (also known as the Hamming weight).
 */

#include <bits/stdc++.h>
using namespace std;

int noOfSetBits ( int n ) {
    int sum = 0;
    while ( n > 0)
    {
        if ( n&1 )
        {
            sum++;
        }
        n = n >> 1;
    }
    return sum;
}

int main () {

    int n;
    cin >> n;
    int x = noOfSetBits(n);
    cout << x << endl;

    return 0;
}