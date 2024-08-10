#include <bits/stdc++.h>
using namespace std;

int decimalToBinary(int n)
{
    int mask = 0;
    int count = 0;
    while (n > 0)
    {
        int bit = n & 1;
        mask = mask + (bit * pow(10, count++));
        n = n >> 1;
    }
    return mask;
}

int binaryToDecimal ( int n ) {
    int dec = 0;
    int count = 0;
    while ( n>0)
    {
        int bit = n%10;
        dec = dec + (bit * pow(2, count++));
        n/=10;
    }
    return dec;
}

int main()
{

    // create a function to give the binary representation of a number

    int n;
    cin >> n;
    cout << decimalToBinary(n) << endl;
    cout << binaryToDecimal(decimalToBinary(n)) << endl;

    return 0;
}