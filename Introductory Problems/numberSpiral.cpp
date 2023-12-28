/*A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:

    1  2  9  10  25
    4  3  8  11  24
    5  6  7  12  23
    16 15 14 13  22
    17 18 19 20  21

Your task is to find out the number in row 
y and column x.*/

#include<bits/stdc++.h>
#include <iostream>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--) {
        ll x,y,val,ans;
        cin>>x>>y;
        val = max(x,y) -1;
        if(val%2!=0) {
            if(x<y) {
                ans = val*val + x;
                cout<<ans<<endl;
            }
            else{
                ans = val*val + 2*val - y + 2;
                cout<<ans<<endl;
            }
        }
        else{
            if(x<y) {
                ans = val*val + 2*val - x + 2;
                cout<<ans<<endl;
            }
            else{
                ans = val*val + y;
                cout<<ans<<endl;
            }
        }
    }
    return 0;
}