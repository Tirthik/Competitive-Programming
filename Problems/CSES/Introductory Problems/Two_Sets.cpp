#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    if (n % 4 == 1 || n % 4 == 2) cout << "NO" << endl;
    else if (n % 4 == 0)
    {
        cout << "YES" << endl;
        cout << n / 2 << endl;
        for (int i = 1; i <= n / 4; i ++)
        {
            cout << i << " " << n + 1 - i << " ";
        }
        cout << endl;
        cout << n / 2 << endl;
        for (int i = n / 4 + 1; i <= n / 2; i ++)
        {
            cout << i << " " << n + 1 - i << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "YES" << endl;
        cout << n / 2 + 1 << endl;
        for (int i = 1; i <= n / 4 + 1; i ++)
        {
            cout << i << " " << n - i << " ";
        }
        cout << endl;
        cout << n / 2 << endl;
        for (int i = n / 4 + 2; i <= n / 2; i ++)
        {
            cout << i << " " << n - i << " ";
        }
        cout << n << endl;
    }
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