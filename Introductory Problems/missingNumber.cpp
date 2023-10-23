/*You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    for (long long int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (long long int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}