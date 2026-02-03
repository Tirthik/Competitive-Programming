#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
int factorial[200001];
void fact() 
{
    factorial[0] = 1;
    for (int i = 1; i < 200001; i ++) 
    {
        factorial[i] = (factorial[i - 1] * i) % 1000000007;
    }
}
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    map<int, int> freq;
    for (int i = 0; i < n; i ++)
    {
        cin >> a[i];
        freq[a[i]] += 1;
    }
    int total_and = a[0];
    for (int i = 1; i < n; i ++)
    {
        total_and = total_and & a[i];
    }
    // We note that if all elements are unique, we cannot form any permutation
    // But, if we have elements with >= 2 freq, then we can use combinatorics to solve this qn in one line
    // The element = total_and should be kept at the ends (nP2 ways), and the remaining (n - 2) elements can be permuted in (n - 2)! ways
    cout << (((freq[total_and]) * (freq[total_and] - 1) % 1000000007) * factorial[n - 2]) % 1000000007 << endl;
}
int32_t main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    fact();
    int t = 1;
    cin >> t;
    while (t--) 
    {
        solve();
    }
}   