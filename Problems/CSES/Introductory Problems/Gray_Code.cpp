#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < pow(2, n); i++) 
    {
        for (int j = n - 1; j >= 0; j--) 
        {
            int bit = ((i ^ (i / 2)) / (int)pow(2, j)) % 2;
            cout << bit;
        }
        cout << endl;
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