#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i ++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());
    int ans = 0;
    for (int i = 0; i < n; i ++)
    {
        if (x[i] <= ans + 1) ans += x[i];
        else break;
    }
    cout << ans + 1 << endl;
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