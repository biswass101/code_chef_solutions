#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int in;
        cin >> in;
        float percentage = in * 0.2;
        float ans = ceil(100/percentage);
        cout << ans << endl;
    }
    return 0;
}