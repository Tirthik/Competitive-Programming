#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> movies(n);
    for (int i = 0; i < n; i ++)
    {
        cin >> movies[i].first >> movies[i].second;
    }
    sort(movies.begin(), movies.end(),
         [](auto &a, auto &b) {
             return a.second < b.second;
         }); //Sorting by ending time
    int ans = 0;
    int curr = 0;
    for (auto &p : movies)
    {
        if (p.first >= curr)
        {
            ans += 1;
            curr = p.second;
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