#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void solve()
{
    string s;
    cin >> s;
    char ref = s[0];
    ll ans = 1; ll curr = 1;
    for (int i = 1; i < s.length(); i ++)
    {
        if (s[i] == ref) curr += 1;
        else
        {
            curr = 1;
            ref = s[i];
        }
        ans = max(ans, curr);
    }
    cout << ans;
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