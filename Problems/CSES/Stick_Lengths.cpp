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
    sort(a.begin(), a.end());
    int ans = 0;
    if (n % 2 == 0)
    {
        int median = (a[n / 2] + a[n / 2 - 1]) / 2;
        for (int x : a)
        {
            ans += abs(x - median);
        }
    }
    else
    {
        int median = a[n / 2];
        for (int x : a)
        {
            ans += abs(x - median);
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