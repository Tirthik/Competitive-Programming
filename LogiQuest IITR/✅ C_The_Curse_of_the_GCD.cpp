#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int mod = 1000000007;
    int ans = 1;
    int e = n / 2;
    while (e > 0)
    {
        if (e % 2 == 1) ans = (__int128)ans * k % mod;
        k = (__int128)k * k % mod;
        e /= 2;
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