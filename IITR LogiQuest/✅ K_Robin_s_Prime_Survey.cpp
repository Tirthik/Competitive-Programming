#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
vector<bool> prime;
vector<bool> sieve(int n) 
{
    vector<bool> prime(n + 1, true);
    for (int p = 2; p * p <= n; ++p) 
    {
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    prime[0] = false;
    prime[1] = false;
    return prime;
}
void solve()
{
    int a, b, k;
    cin >> a >> b >> k;
    int ans = -1;
    vector<int> count(1e6 + 1);
    for (int i = 1; i < 1e6 + 1; i ++)
    {
        if (prime[i]) count[i] = count[i - 1] + 1;
        else count[i] = count[i - 1];
    }
    int start = 1; int stop = b - a + 1;
    while (start <= stop)
    {
        int mid = (start + stop) / 2;
        bool ok = true;
        for (int x = a; x <= b - mid + 1; x ++)
        {
            if (count[x + mid - 1] - count[x - 1] < k)
            {
                ok = false;
                break;
            }
        }
        if (ok)
        {
            ans = mid;
            stop = mid - 1;
        }
        else start = mid + 1;
    }
    cout << ans << endl;
}
int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    prime = sieve(1e6);
    while (t--) 
    {
        solve();
    }
}   