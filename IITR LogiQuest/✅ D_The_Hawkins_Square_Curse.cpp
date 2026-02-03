#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n; 
    cin >> n;
    if (sqrt(n * (n + 1) / 2.0) == (int)sqrt(n * (n + 1) / 2.0))
    {
        cout << -1 << endl;
        return;
    }
    vector<int > ans(n + 1);
    for (int i = 1; i < n + 1; i ++)
    {
        ans[i] = i;
    }
    int curr = 0;
    for (int i = 1; i < n + 1; i ++)
    {
        curr += ans[i];
        if (sqrt(curr) == (int)sqrt(curr))
        {
            curr += (ans[i + 1] - ans[i]);
            swap(ans[i], ans[i + 1]);
        }
    }
    for (int i = 1; i < n + 1; i ++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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