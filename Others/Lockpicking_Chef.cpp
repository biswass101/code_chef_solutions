//Not Solved
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string a, b;
        cin >> a >> b;
        vector<int> v;
        for(int i = 0; i <= n - k; i++)
        {
            int sum = 0;
            for(int j = 0; j < k; j++)
            {
                int n1 = a[j + i] - '0';
                int n2 = b[j] - '0';
                int op1, op2, op3;
                op1 = abs(n1 - n2);
                if(n1 < n2) 
                {
                    op2 = (n1 + 10) - n2;
                    sum += min(op1, op2);
                }
                else if(n2 < n1)
                {
                    op3 = (n2 + 10) - n1;
                    sum += min(op1, op3);
                } 
                // sum += min(op1,min(op2,op3));
                
            }
            v.push_back(sum);
            sum = 0;
        }
        // for(auto& x : v) cout << x << " ";
        // cout << endl;
        int mn = INT_MAX;
        for(int i = 0; i < v.size(); i++)
        {
            mn = min(mn, v[i]);
        }
        cout << mn << endl;
    }
    return 0;
}