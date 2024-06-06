#include <bits/stdc++.h>
#define OJ
#define ROCKET                    \
    ios ::sync_with_stdio(false); \
    cin.tie(nullptr);             \
    cout.tie(nullptr);
#define ll long long int
#define fr(x, s, e, b) for (ll x = s; x < e; x = x + b)
#define rfr(x, s, e, b) for (ll x = s; x >= e; x = x - b)
#define efr(val, where) for (auto &val : where)
#define all(x) x.begin(), x.end()
#define el '\n'
#define vtr vector
#define vl vector<int>
#define vll vector<long long int>
#define str string
#define pb push_back
#define MOD (int)1e9 + 7
#define N (int)1e5 + 7
#define imax INT_MAX
#define imin INT_MIN
#define pr pair<int, int>
#define hash map<int, int>
#define dnin \
    ll n;    \
    cin >> n
#define yes cout << "YES" << el
#define no cout << "NO" << el
using namespace std;
#ifndef OJ
void err(istream_iterator<string> it)
{
    cerr << endl;
}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}

template <class T1, class T2>
ostream &operator<<(ostream &os, pair<T1, T2> &p)
{
    os << "{" << p.first << ", " << p.second << "} ";
    return os;
}
template <class T>
ostream &operator<<(ostream &os, vector<T> &v)
{
    os << "[ ";
    for (int i = 0; i < v.size(); i++)
    {
        os << v[i] << " ";
    }
    os << "]";
    return os;
}
template <class T>
ostream &operator<<(ostream &os, deque<T> &v)
{
    os << "[ ";
    for (int i = 0; i < v.size(); i++)
    {
        os << v[i] << " ";
    }
    os << "]";
    return os;
}
template <class T>
ostream &operator<<(ostream &os, set<T> &v)
{
    os << "[ ";
    for (T i : v)
    {
        os << i << " ";
    }
    os << "]";
    return os;
}
template <class T>
ostream &operator<<(ostream &os, multiset<T> &v)
{
    os << "[ ";
    for (T i : v)
    {
        os << i << " ";
    }
    os << "]";
    return os;
}
template <class T1, class T2>
ostream &operator<<(ostream &os, map<T1, T2> &v)
{
    for (auto i : v)
    {
        os << "Key : " << i.first << " , Value : " << i.second << endl;
    }
    return os;
}
template <class T1, class T2>
ostream &operator<<(ostream &os, unordered_map<T1, T2> &v)
{
    for (auto i : v)
    {
        os << "Key : " << i.first << " , Value : " << i.second << endl;
    }
    return os;
}

#define HERE cerr << "here - " << __LINE__ << "\n";
#define debug(args...)                           \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
    }
#else
#define HERE
#define debug(args...)
#endif
bool isPalindrom(string x)
{
    int i = 0;
    int j = x.size() - 1;
    while (i < j)
    {
        if (x[i] != x[j])
            return false;
        i++;
        j--;
    }
    return true;
}
bool isEven(ll n)
{
    return n % 2 == 0;
}
bool isOdd(ll n)
{
    return n % 2 != 0;
}
int findXorOfN(int n)
{
    if (n % 4 == 0)
        return n;
    else if (n % 4 == 1)
        return 1;
    else if (n % 4 == 2)
        return n + 1;
    else if (n % 4 == 3)
        return 0;
}
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
vll getBin(ll n)
{
    vll v;
    while (n)
    {
        int bin = n & 1;
        v.pb(bin);
        n = n >> 1;
    }
    reverse(all(v));
    return v;
}
vector<ll> primeFactorization(ll n)
{
    vector<ll> factors;
    for (ll i = 2; i * i <= n; i++)
    {
        ll cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
            factors.push_back(i);
        }
    }
    if (n > 1)
        factors.push_back(n);
    return factors;
}
ll digitSum(ll n)
{
    ll sum = 0;
    string num = to_string(n);
    for (int i = 0; i < num.size(); i++)
    {
        sum += (num[i] - '0');
    }
    return sum;
}
void solve()
{
    int n; cin >> n;
    string x; cin >> x;
    int cnt_0 = 0;
    fr(i, 0, n, 1)
    {
        if(x[i] == '1')
        {
            if(i == n - 1)
            {
                if(cnt_0 > 0)
                {
                    no;
                }
                else yes;
            }
            else
            {
                if (cnt_0 > 0)
                {
                    no;
                }
                else
                    cout << "IDK" << el;
            }
        }
        else
        {
            cnt_0++;
            no;
        }
        
    }
}
signed main()
{
#ifndef OJ
    freopen("error.txt", "w", stderr);
#endif
#ifdef OJ
    ROCKET
#endif
    int t = 1;
    cin >> t;
    while (t--)
        solve();

    return 0;
}