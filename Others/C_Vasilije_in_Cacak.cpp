#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, m;
        cin >> n >> k >> m;
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        int first = (k*(k+1)) / 2;
        int dif = m - first;
    }

    return 0;
}
