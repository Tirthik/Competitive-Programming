#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void solve()
{
    int n; int x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i ++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll ans = 0; int left = 0; int right = n - 1;
    while (left < right)
    {
        if (a[left] + a[right] <= x)
        {
            ans += 1;
            left += 1;
            right -= 1;
        }
        else 
        {
            ans += 1;
            right -= 1;
        }
    }
    if (left == right) ans += 1;
    cout << ans << endl;
}
int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    while (t--) 
    {
        solve();
    }
}