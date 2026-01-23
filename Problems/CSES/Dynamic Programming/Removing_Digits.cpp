#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin>> n;
    vector<int> dp(n + 1, INT_MAX); //dp[i] represents minimum no. of steps to make i into 0
    dp[0] = 0;
    for (int i = 1; i < 10; i ++)
    {
        dp[i] = 1;
    }
    for (int i = 10; i <= n; i ++)
    {
        string s = to_string(i);
        for (char c : s)
        {
            dp[i] = min(dp[i], dp[i - (int)(c - '0')] + 1);
        }
    }
    cout << dp[n];
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