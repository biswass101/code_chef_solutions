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
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        for(int i = 0; i < n - 2; i++)
        {
            if(arr[i] & arr[i+1] == arr[i+2]) cnt++;
            else if(arr[i] | arr[i+1] == arr[i+2]) cnt++;
            else if(arr[i] xor arr[i+1] == arr[i+2]) cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}