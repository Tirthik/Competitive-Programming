#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for (int i = 0; i < n; i ++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int total = accumulate(a.begin(), a.end(), 0LL);
    int l = total - y;
    int r = total - x;
    int c2 = 0; int c1 = 0;
    int i = 0; int j = n - 1;
    while (i < j)
    {
        if (a[i] + a[j] <= r)
        {
            c2 += (j - i);
            i ++;
        }
        else j --;
    }
    i = 0; j = n - 1;
    while (i < j)
    {
        if (a[i] + a[j] <= l - 1)
        {
            c1 += (j - i);
            i ++;
        }
        else j --;
    }
    cout << c2 - c1 << endl;
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