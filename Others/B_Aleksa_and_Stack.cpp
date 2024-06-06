#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ans;
        ans.push_back(1);
        for (int i = 1; i < n; i++)
        {
            ans.push_back(ans[i - 1] + 2);
        }
        for(int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
