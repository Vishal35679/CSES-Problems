/*You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required?*/

#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll n;
    cin>>n;
    ll arr[n];
    ll move=0;
    for(ll i=0; i<n; i++) {
        cin>>arr[i];
    }
    for(ll i=1; i<n; i++) {
        if(arr[i] >= arr[i-1]) continue;
        else{
            ll diff = arr[i-1] - arr[i];
            move+= diff;
            arr[i] = arr[i-1];
        }
    }
    cout<<move<<endl;
    return 0;
}