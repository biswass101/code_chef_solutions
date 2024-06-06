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
void solve() {
    ll n;
    cin >> n;
    vtr<ll> nums(n);

    ll odd = 0, even = 0;
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    vector<ll> e, o;
    vector<ll> result(n, -1);

    for (auto num : nums) {
        if (num % 2 != 0) {
            odd++;
            o.push_back(num);
        } else {
            even++;
            e.push_back(num);
        }
    }

    if (even % 2 != 0 || odd % 2 != 0) {
        cout << "-1";
    } else {
        sort(e.begin(), e.end());
        sort(o.begin(), o.end());
        vector<int> oddCount(odd), evenCount(even);

        int k = 0;
        for (auto z : o) {
            oddCount[k] = z;
            k += 2;
            if (k >= odd)
                k = 1;
        }

        k = 0;
        for (auto z : e) {
            evenCount[k] = z;
            k += 2;
            if (k >= even)
                k = 1;
        }

        int itr = 0;
        for (int z = 0; z < odd; z += 2) {
            result[itr] = (oddCount[z] + oddCount[z + 1]) / 2;
            result[itr + (n / 2)] = abs(oddCount[z] - oddCount[z + 1]) / 2;
            itr++;
        }

        for (int z = 0; z < even; z += 2) {
            result[itr] = (evenCount[z] + evenCount[z + 1]) / 2;
            result[itr + (n / 2)] = abs(evenCount[z] - evenCount[z + 1]) / 2;
            itr++;
        }

        for (auto h : result) {
            cout << h << " ";
        }
    }
}
signed main()
{
    ROCKET

    int t = 1;
    cin >> t;
    while(t--) solve();
    
    return 0;
}