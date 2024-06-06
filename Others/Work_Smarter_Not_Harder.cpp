#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int ans1 = ceil(a*1.0 / b);
        int ans2 = ceil(a*1.0 / c);
        // cout << ans1 << " " << ans2 << endl;
        if(ans1 == ans2) cout << -1 << endl;
        else
        {
            cout << ans1 - (ans2 + 1) << endl;
        }
    }
    return 0;
}