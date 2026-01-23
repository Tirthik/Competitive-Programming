#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> c = {1, 2, 3, 4, 5, 6};
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    for (int i = 1; i <= n; i ++)
    {
        for (int j : c)
        {
            if (i - j >= 0) dp[i] = (dp[i] + dp[i - j]) % 1000000007;
        }
    }
    cout << dp[n] % 1000000007 << endl;
}
int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--) 
    {
        solve();
    }
}   