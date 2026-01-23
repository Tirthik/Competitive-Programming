#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void solve()
{
    string s;
    cin >> s;
    map<char, int> freq;
    for (char c : s)
    {
        freq[c] += 1;
    }
    string ans = "";
    int odd = 0; int even = 0; string mid = ""; string half = "";
    for (auto &p : freq)
    {
        if (p.second % 2 != 0) 
        {
            odd += 1;
            mid = p.first;
        }
        else 
        {
            even += 1;
        }
        for(int i = 1; i <= p.second / 2; i ++)
        {
            half += p.first;
        }
    }
    if (odd > 1)
    {
        cout << "NO SOLUTION" << endl;
        return;
    }
    cout << half + mid + string(half.rbegin(), half.rend()) << endl;
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