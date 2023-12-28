/*Your task is to count for k=1,2,…,n the number of ways two knights can be placed on a k×k chessboard so that they do not attack each other.*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int num = 1;
    while (num <= t)
    {
        int n = num;
        long long int ans = (1ll * n * n * (1ll * n * n - 1)) / 2;
        int cnt = 0;
        if (n == 1 || n == 2)
            cnt = 0;
        else if (n == 3)
            cnt = 16;
        else
        {
            cnt += 4 * 2 + 8 * 3 + (4 * n - 4 - 12) * 4;
            n = n - 2;
            cnt += 4 * 4 + (4 * n - 4 - 4) * 6;
            n = n - 2;
            cnt += 8 * n * n;
        }
        cout << ans - cnt / 2 << endl;
        num++;
    }
    return 0;
}