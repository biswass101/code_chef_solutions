//Not Solved

#include<bits/stdc++.h>
using namespace std;
#define el "\n"
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, h;
        cin >> n >> h;
        int arr[n];
        int sum = 0;
        for(int  i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if(h - sum > 0) cout << 0 << el;
        else
        {
            pair<int,int> p = {INT_MAX, -1};
            for(int i = 0; i < n; i++)
            {
                int allow = arr[i];
                int s = 0;
                for(int j = 0; j < n; j++)
                {
                    if(arr[j] > allow)
                    {
                        s += arr[j];
                    }
                }
                if(h-s == 0) continue;
                pair<int,int> x = {(h-s), arr[i]};
                p = min(p, x);
            }
            cout << p.second << endl;
        }
        

    }
    return 0;
}