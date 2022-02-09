#include <bits/stdc++.h>
using namespace std;
#define fastio               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define int long long
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define endl '\n'
#define pi 3.141592653589793238
#define mp make_pair
#define pb push_back
#define precise cout << fixed << setprecision(20)
#define ff first
#define ss second
#define uniq(v) v.resize(distance(v.begin(), unique(all(v))))
#define lb lower_bound
#define ub upper_bound
#define pii pair<int, int>
#define vi vector<int>
#define vp vector<pair<int, int>>
#define vvi vector<vector<int>>
#define deb(x) cerr << #x << ' ' << '=' << ' ' << x << '\n'
const int mod = 1e9 + 7;
const int INF = 1e9;
const int MAXN = 300005;
template <typename T>
istream &operator>>(istream &in, vector<T> &v)
{
    for (T &x : v)
        in >> x;
    return in;
}
template <typename T>
ostream &operator<<(ostream &out, vector<T> &v)
{
    for (T &x : v)
        out << x << " ";
    return out;
}
int min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int power(int a, int b)
{
    int res = 1;
    a %= mod;
    assert(b >= 0);
    for (; b; b >>= 1)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
    }
    return res;
}
int gcd(int p, int q)
{
    if (p % q == 0)
        return q;
    else
    {
        return gcd(q, p % q);
    }
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    if (n % 2 == 0 || n % 3 == 0)
        return false;

    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
int mul(int a, int b) { return ((a % mod) * (b % mod)) % mod; }
int sub(int a, int b) { return (((a - b) % mod) + mod) % mod; }
void primefactorisation(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int c = 0;
            while (n % i == 0)
            {
                c++;
                n = n / i;
            }
            cout << i << " " << c << endl;
        }
    }
    if (n > 1)
        cout << n << " " << 1 << endl;
}

signed main()
{
    fastio;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t, k, i, j, l, ans, mi, ma = -1, a, b;
     int n, m;
    
    return 0;
}
