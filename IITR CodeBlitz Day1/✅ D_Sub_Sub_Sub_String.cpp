#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define int long long
using namespace std;
#define MOD 1000000007
#define MOD2 998244353
vector<int> fact, invfact;
int binExp(int base, int exp, int M) 
{
    int result = 1;
    while (exp > 0) 
    {
        if (exp % 2 == 1) result = (result * base) % M;
        base = (base * base) % M;
        exp /= 2;
    }
    return result;
}
void build_fact(int N, int M) 
{
    fact = vector<int>(N + 1, 0);
    invfact = vector<int>(N + 1, 0);
    fact[0] = 1;
    for (int i = 1; i <= N; i++)
    {
        fact[i] = fact[i - 1] * i % M;
    }
    invfact[N] = binExp(fact[N], M - 2, M);
    for (int i = N - 1; i >= 0; i--)
    {
        invfact[i] = invfact[i + 1] * (i + 1) % M;
    }
}
int nCr(int n, int r, int M) 
{
    if (r < 0 || r > n) return 0;
    return fact[n] * invfact[r] % M * invfact[n - r] % M;
}
int nPr(int n, int r, int M) 
{
    if (r < 0 || r > n) return 0;
    return fact[n] * invfact[n - r] % M;
}
int modinv(int a, int M) 
{
    int b = M, u = 1, v = 0;
    while (b) 
    {
        int t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    if (a != 1) return -1;
    u %= M;
    if (u < 0) u += M;
    return u;
}
vector<bool> sieve(int n) 
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= n; ++p) 
    {
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    return prime;
}
int getRoot(int x, int y) //y-th root of x
{
    int l = 0, h = x, ans = 0;
    while (l <= h) 
    {
        int m = l + (h - l) / 2;
        __int128 cur = 1;
        bool ok = true;
        for (int i = 0; i < y; i ++) 
        {
            cur *= m;
            if (cur > x) 
            {
                ok = false;
                break;
            }
        }
        if (ok) 
        {
            ans = m;
            l = m + 1;
        } 
        else 
        {
            h = m - 1;
        }
    }
    return ans;
}
bool isPerfectSquare(int n) 
{
    if (n < 0) return false;
    int r = getRoot(n, 2);
    return r * r == n;
}
vector<int> factors(int n) 
{
    vector<int> f;
    for (int i = 1; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            f.push_back(i);
            if (i != n / i)
                f.push_back(n / i);
        }
    }
    return f; 
}
vector<int> prefixArr(vector<int>& arr) 
{
    int n = arr.size();
    vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; i ++) 
    {
        pref[i] = pref[i - 1] + arr[i - 1];
    }
    return pref;
}
vector<int> suffixArr(const vector<int>& arr) 
{
    int n = arr.size();
    vector<int> suff(n + 1, 0);
    for (int i = 1; i <= n; i ++) 
    {
        suff[i] = suff[i - 1] + arr[n - i];
    }
    return suff;
}
int gcd(int a, int b)
{
    return (!b ? a : gcd(b, a % b));
}
int lcm(int a, int b)
{
    return a / gcd(a, b) * b;
}
void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    char curr = s[0];
    vector<int> pref01(n + 1);
    pref01[1] = 0;
    vector<int> pref10(n + 1);
    pref10[1] = 0;
    vector<int> ans;
    ans.push_back(0);
    for (int i = 1; i < n; i ++)
    {
        if (curr == '0' && s[i] == '1')
        {
            pref01[i + 1] = pref01[i] + 1;
        }
        else
        {
            pref01[i + 1] = pref01[i];
        }
        if (curr == '1' && s[i] == '0')
        {
            pref10[i + 1] = pref10[i] + 1;
        }
        else 
        {
            pref10[i + 1] = pref10[i];
        }
        curr = s[i];
        ans.push_back(abs(pref01[i + 1] - pref10[i + 1]));
    }
    vector<int> freq0(n + 1);
    for (int i = 1; i <= n; i ++)
    {
        freq0[i] = freq0[i - 1] + (ans[i - 1] == 0 ? 1 : 0);
    }
    vector<int> freq1(n + 1);
    for (int i = 1; i <= n; i ++)
    {
        freq1[i] = freq1[i - 1] + (ans[i - 1] == 1 ? 1 : 0);
    }
    for (int i = 0; i < q; i ++)
    {
        int l, r;
        cin >> l >> r;
        int cnt0 = freq0[r] - freq0[l - 1];
        int cnt1 = freq1[r] - freq1[l - 1];
        cout << r - l + 1 + (cnt0 * (cnt0 - 1)) / 2 + (cnt1 * (cnt1 - 1)) / 2 << endl;
    } 
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