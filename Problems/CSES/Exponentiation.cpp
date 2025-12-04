#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    if (b == 0) 
    {
        cout << 1 << endl;
        return;
    }
    int ans = 1;
    int mod = 1000000007;
    while (b > 0)
    {
        if (b % 2 == 1) ans = ans * a % mod;
        a = a * a % mod;
        b /= 2;
    }
    cout << ans << endl;
}
int32_t main() 
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