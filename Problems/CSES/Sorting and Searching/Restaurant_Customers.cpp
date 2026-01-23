#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> intervals(n);
    for (int i = 0; i < n; i ++)
    {
        cin >> intervals[i].first >> intervals[i].second;
    }
    vector<int> a(n), b(n);
    for (int i = 0; i < n; ++i) 
    {
        a[i] = intervals[i].first;
        b[i] = intervals[i].second;
    }
    int l = 0; int r = 0; int curr = 0; int ans = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());    
    while (l < n)
    {
        if (a[l] < b[r])
        {
            curr += 1;
            ans = max(ans, curr);
            l += 1;
        }
        else if (a[l] > b[r])
        {
            curr -= 1;
            r += 1;
        }
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