#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> x(n + 1);
    vector<int> pos(n + 1);
    for (int i = 1; i < n + 1; i ++)
    {
        cin >> x[i];
        pos[x[i]] = i;
    }
    int ans = 1;
    for (int i = 1; i < n; i ++)
    {
        if (pos[i + 1] < pos[i]) ans += 1;
    }
    auto bad = [&](int v) {
        if (v < 1 || v >= n) return false;
        return pos[v] > pos[v + 1];
    };
    for (int i = 0; i < m; i ++)
    {
        int a, b;
        cin >> a >> b;
        int tmpa = x[a], tmpb = x[b];
        set<int> affected;
        affected.insert(tmpa);
        affected.insert(tmpa - 1);
        affected.insert(tmpb);
        affected.insert(tmpb - 1);
        for (int j : affected)
        {
            ans -= bad(j);
        }
        swap(x[a], x[b]);
        swap(pos[tmpa], pos[tmpb]);
        for (int j : affected)
        {
            ans += bad(j);
        }
        cout << ans << endl;
    }
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