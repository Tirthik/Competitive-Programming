#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> pos(n + 1);
    for (int i = 0; i < n; i ++)
    {
        int x;
        cin >> x;
        pos[x] = i;
    }
    int ans = 1;
    for (int i = 1; i < n; i ++)
    {
        if (pos[i + 1] < pos[i]) ans += 1;
    }
    cout << ans << endl;
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