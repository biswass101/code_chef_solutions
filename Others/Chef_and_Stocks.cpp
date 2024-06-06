#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int x = 0;
        int m = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            x += arr[i];
            m = min(m, arr[i]);
          
        }

        bool flag = false;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] < 0)
            {
                flag = true;
                break;
            }
        }
        if(flag)
        {
            int mn = INT_MAX;
            for(int i = 0; i < n; i++)
            {
                if(arr[i] < 0)
                {
                    mn = min(mn, arr[i]);
                }
            }
            // cout <<"min " << mn << endl;
            cout << x - mn << endl;
        }
        else
        {
           cout << x - m << endl;
        }
    }
    return 0;
}