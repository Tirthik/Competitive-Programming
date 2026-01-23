#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> h(n), s(n);
    multimap<int, int> mmp;
    for (int i = 0; i < n ; i ++)
    {
        cin >> h[i];
    }
    for (int i = 0; i < n ; i ++)
    {
        cin >> s[i];
        mmp.insert({h[i], s[i]});
    }
    vector<int> dp(x + 1);
    dp[0] = 0;
    for (auto &p : mmp)
    {
        for (int c = x; c >= p.first; c --)
        {
            dp[c] = max(dp[c], dp[c - p.first] + p.second);
        }
    }
    cout << dp[x] << endl;
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