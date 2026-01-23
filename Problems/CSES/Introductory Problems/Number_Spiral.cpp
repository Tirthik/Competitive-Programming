#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void solve()
{
    ll y; ll x;
    cin >> y >> x;
    if (y == x) cout << x * x - x + 1 << endl;
    else if (y < x)
    {
        if (x % 2 == 0)
        {
            cout << (x - 1) * (x - 1) + y << endl;
        }
        else
        {
            cout << x * x - y + 1 << endl;
        }
    }
    else
    {
        if (y % 2 == 0)
        {
            cout << y * y - x + 1 << endl;
        }
        else
        {
            cout << (y - 1) * (y - 1) + x << endl;
        }
    }
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) 
    {
        solve();
    }
}