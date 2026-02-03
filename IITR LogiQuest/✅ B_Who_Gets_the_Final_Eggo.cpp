#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i ++)
    {
        cin >> a[i];
        mp[ceil(a[i] / (double)m)].push_back(i);
    }
    auto it = mp.end();
    it--;
    cout << it->second.back() + 1 << endl;
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