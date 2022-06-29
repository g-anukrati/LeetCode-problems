// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> minAnd2ndMin(int a[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++) 
            cin >> a[i];

        vector<int> ans = minAnd2ndMin(a, n);
        if (ans[0] == -1)
            cout << -1 << endl;
        else 
            cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}// } Driver Code Ends


vector<int> minAnd2ndMin(int a[], int n) {
    vector<int> res;
  int i, first, second;
    if (n < 2)
    {
    res.push_back(-1);
    return res;
    }
 
    first = second = INT_MAX;
    for (i = 0; i < n ; i ++)
    {
        if (a[i] < first)
        {
            second = first;
            first = a[i];
        }
        else if (a[i] < second && a[i] != first)
            second = a[i];
    }
    if (second == INT_MAX)
        res.push_back(-1);
    else
      res.push_back(first);
      res.push_back(second);
      return res;
}
