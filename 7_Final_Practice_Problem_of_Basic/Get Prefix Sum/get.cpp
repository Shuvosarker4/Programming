/*
Problem Statement

You will be given an integer array A of size N. You need to print the prefix sum array
of the array A in reverse order.


Input Format
First line will contain N.
Next line of contain the array A.


Constraints
1 <= N <= 10^5
1 <= A[i] <= 10^9; Where 0 <= i < N


Output Format
Output the prefix sum array in reverse order.


Sample Input 0
5
2 4 1 5 3

Sample Output 0
15 12 7 6 2

Explanation
The prefix sum of the given array is: 2 6 7 12 15.
The reverse order is: 15 12 7 6 2.

Sample Input 1
3
1000000000 1000000000 1000000000

Sample Output 1
3000000000 2000000000 1000000000

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Write your code here
    int n;
    cin >> n;
    long long int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long int pre[n];
    pre[0] = a[0];

    for (int i = 1; i < n; i++)
    {
        pre[i] = a[i] + pre[i - 1];
    }

    for (int i = n - 1; i > 0; i--)
    {
        cout << pre[i] << " ";
    }
    cout << pre[0] << endl;

    return 0;
}