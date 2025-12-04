#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i ++)
    {
        cin >> a[i];
    }
    int ans = 0;
    set<int> seen;
    seen.insert(0);
    int curr = 0;
    for (int i : a)
    {
        curr += i;
        if (seen.count(curr)) //basically checking if we have a repeated pref-sum OR if curr sum becomes 0
        {
            ans += 1;
            seen.clear();
            seen.insert(0);
            curr = 0;
        }
        else seen.insert(curr);
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