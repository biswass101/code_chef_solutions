#include<bits/stdc++.h>
#define ROCKET ios :: sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define fr(x, s, e, b) for(ll x = s; x < e; x = x + b)
#define rfr(x, s, e, b) for(ll x = s; x >= e; x = x - b)
#define efr(val, where) for(auto& val : where)
#define all(x) x.begin(), x.end()
#define el '\n'
#define vtr vector
#define pb push_back
#define MOD 1e9 + 7
#define imax INT_MAX
#define imin INT_MIN
#define pr pair<int, int>
using namespace std;
bool isPalindrom(string x)
{
    int i = 0;
    int j = x.size() -1;
    while(i < j)
    {
        if(x[i] != x[j]) return false;
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
bool isPrime(int n)
{
    if(n <= 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i = 3; i * i <= n; i += 2)
    {
        if(n % i == 0) return false;
    }
    return true;
}
ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    return gcd(b, a % b);
}
vector<ll> primeFactors(ll n)
{
    vector<ll> factors;
    for(ll i = 2; i * i <= n; i++)
    {
        ll cnt = 0;
        while(n % i == 0)
        {
            cnt++;
            n /= i;
            factors.push_back(i);
        }
    }
    if(n > 1) factors.push_back(n);
    return factors;
}
ll digitSum(ll n)
{
    ll sum = 0;
       string num = to_string(n);
       for(int i = 0; i < num.size(); i++)
       {
           sum += (num[i] - '0');
    }
    return sum;
}
void solve()
{
    ll s, t; cin>> s >> t;
    // // ll diff = abs(s - t) + 1;
    // ll add = s + t + 1;
    // ll winner = (s > t) ? s : t;
    // ll losser = (s < t) ? s : t;
    // while(true)
    // {
    //     ll diff = add - (s + t);
    //     if(losser + diff >= t) break;
    //     add++;
    // }
    // cout << add << el;
    if(s > t) cout << (s - 1) + s <<el;
    else cout << (t - 1) + t << el;
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}

/*

#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> eve;
        vector<int> odd;
        vector<int> ans;
        vector<int> v;
        int a = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 != 0)
            {
                odd.push_back(x);
                a++;
            }
            else
            {
                eve.push_back(x);
            }
        }
        if (a % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }
        sort(eve.begin(), eve.end(), greater<int>());
        sort(odd.begin(), odd.end(), greater<int>());
        int m = eve.size();
        if (m > n - m)
        {
            for (int i = 0; i < n - m; i++)
            {
                v.push_back(odd[i]);
                v.push_back(eve[i]);
            }
            for (int i = n - m; i < m; i++)
            {
                v.push_back(eve[i]);
            }
        }
        else
        {
            for (int i = 0; i < m; i++)
            {
                v.push_back(odd[i]);
                v.push_back(eve[i]);
            }
            for (int i = m; i < n - m; i++)
            {
                v.push_back(odd[i]);
            }
        }

        for (int i = 0; i < n / 2; i++)
        {
            int x = (v[i] + v[i + n / 2]) / 2;
            ans.push_back(x);
            x = abs((v[i] - v[i + n / 2]) / 2);
            ans.push_back(x);
        }

        // Rearrange the output array
        for (int i = 0; i < n; i += 2)
        {
            cout << ans[i] << " ";
        }
        for (int i = n - 1; i >= 1; i -= 2)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

*/