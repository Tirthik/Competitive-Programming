#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    set<int> s;
    for (int i = 1; i <= d; i ++)
    {
        s.insert(i);
    }
    for (int i = k; i <= d; i += k)
    {
        s.erase(i);
    }
    for (int i = l; i <= d; i += l)
    {
        s.erase(i);
    }
    for (int i = m; i <= d; i += m)
    {
        s.erase(i);
    }
    for (int i = n; i <= d; i += n)
    {
        s.erase(i);
    }
    cout << d - s.size() << endl;
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