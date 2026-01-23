#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i ++)
    {
        cout << i * i * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2) << endl;
    }
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--) 
    {
        solve();
    }
}