#include <bits/stdc++.h>
using namespace std;

// 5
// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5
// int main () {

//     int n;
//     cin >> n;

//     for ( int i = 1 ; i <= n; i++)
//     {
//         for ( int j = 0; j<n; j++)
//         {
//             cout << i << " " ;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// 1 2 3 4 5
// int main () {
//     int n ;
//     cin >> n;

//     for ( int i = 0; i<n; i++)
//     {
//         for ( int j = 1; j<=n; j++)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 5
// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20
// 21 22 23 24 25
// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << (i * n) + j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 4
// *
// * *
// * * *
// * * * *
// int main () {

//     int n;
//     cin >> n;

//     for ( int i = 1; i<= n; i++)
//     {
//         for ( int j = 1; j<=i;j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 4
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// int main()
// {

//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << i << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// int main () {

//     int n;
//     cin >> n;

//     int count = 1;

//     for ( int i = 1; i <= n; i++)
//     {
//         for ( int j = 1; j <= i; j++)
//         {
//             cout << count << " ";
//             count++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 4
// 1
// 2 3
// 3 4 5
// 4 5 6 7
// int main () {

//     int n;
//     cin >> n;

//     for ( int i = 1; i<=n; i++)
//     {
//         for ( int j = i; j <= (2*i)-1; j++)
//         {
//             cout << j << ' ';
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 5
// 1
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
// int main()
// {

//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = i; j >= 1; j--)
//         {
//             cout << j << ' ';
//         }
//         cout << endl;
//     }

//     return 0;
// }

// 4
// A A A A
// B B B B
// C C C C
// D D D D
// int main()
// {
//     // My Approach
//     // char alphabets[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

//     // int n;
//     // cin >> n;

//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < n; j++)
//     //     {
//     //         cout << alphabets[i] << " ";
//     //     }
//     //     cout << endl;
//     // }

//     // Babbar's Approach
//     int n;
//     cin >> n;

//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << ch << " ";
//         }
//         ch++;
//         cout << endl;
//     }

//     return 0;
// }

// 4
// D
// C D
// B C D
// A B C D
// int main()
// {

//     char ch = 'A';
//     int n;
//     cin >> n;
//     ch += (n - 1);

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << char(ch + j - 1) << " ";
//         }
//         cout << endl;
//         ch--;
//     }
//     return 0;
// }

// 4
//       *
//     * *
//   * * *
// * * * *
// int main () {

//     int n;
//     cin >> n;

//     for ( int i = 1 ; i<=n ; i++)
//     {
//         for ( int j = 1; j<=(n-i); j++)
//         {
//             cout << "  ";
//         }

//         for ( int j = 1; j<=i;j++)
//         {
//             cout << "* ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// 4
// * * * *
// * * *
// * *
// *
// int main () {

//     int n;
//     cin >> n;

//     for ( int i = 1; i<=n; i++)
//     {
//         for ( int j = 1; j <= (n-i+1); j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// 4
// 1 2 3 4
//   2 3 4
//     3 4
//       4
// int main()
// {

//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i - 1; ++j)
//         {
//             if( i == 1)
//             {
//                 break;
//             }
//             cout << "  ";
//         }
//         for ( int j = i; j<= n; j++ )
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// 4
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1
// int main()
// {

//     int n;
//     cin >> n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= (n - i); j++)
//         {
//             cout << "  ";
//         }
//         for (int k = 1; k <= i; k++)
//         {
//             cout << k << " ";
//         }

//         for (int l = i - 1; l >= 1; l--)
//         {
//             if ( i == 1)
//             {
//                 break;
//             }
//             cout << l << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// 5
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1
// int main () {

//     int n;
//     cin >> n;

//     for ( int i = 1; i<=n; i++)
//     {
//         for ( int j = 1; j<=(n-i+1); j++)
//         {
//             cout << j << " ";
//         }
//         for ( int k=1; k<=i-1;k++)
//         {
//             cout << "* * ";
//         }
//         // for ( int k=1; k<=i-1;k++)
//         // {
//         //     cout << "* ";
//         // }
//         for (int m = (n-i+1); m>=1;m--)
//         {
//             cout << m << " ";
//         }
//         cout << endl;

//     }

//     return 0;
// }


