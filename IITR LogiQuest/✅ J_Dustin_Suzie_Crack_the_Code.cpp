#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
bool Cycle(char from, char to, map<char,char> &mp) 
{
    char curr = to;
    while(mp.count(curr)) 
    {
        curr = mp[curr];
        if(curr == from) return true;
    }
    return false;
}
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s; 
    string ans = "";
    char curr = 'a';
    map<char, char> mp;
    map<char, char> rv;
    set<char> seen;
    for(char c : s) 
    {
        if(mp.count(c)) 
        {
            ans.push_back(mp[c]);
            continue;
        }
        for(char x = 'a'; x <= 'z'; x ++) 
        {
            if(!seen.count(x)) 
            {
                if (x == c) continue; // no self-loop allowed
                if (Cycle(c, x, mp) && seen.size() + 1 < 26) continue; // create cycle only if all letters are used up, otherwise skip
                // this way we prevent early cycle - since we need all 26 letters to form the cycle
                // ensure one-one mapping
                mp[c] = x;
                rv[x] = c;
                seen.insert(x);
                ans.push_back(x);
                break;
            }
        }
    }
    // complete remaining
    for(char c = 'a'; c <= 'z'; c ++) 
    {
        if(!mp.count(c)) 
        {
            for(char x = 'a'; x <= 'z'; x ++) 
            {
                if(!seen.count(x)) 
                {
                    mp[c] = x;
                    rv[x] = c;
                    seen.insert(x);
                    break;
                }
            }
        }
    }
    cout << ans << endl;
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