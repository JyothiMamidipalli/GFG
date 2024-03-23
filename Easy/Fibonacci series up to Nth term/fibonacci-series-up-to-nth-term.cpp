//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> Series(int n) {
        // Code here
        vector<int>raj;
        long long int mod=1e9+7;
        int a=0;
        int b=1;
        raj.push_back(a);
        raj.push_back(b);
        for(int i=2;i<=n;i++)
        {
            long long int c=(a+b)%mod;
            raj.push_back(c);
            a=b;
            b=c;
        }
        return raj;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;

        vector<int> ans = obj.Series(n);
        for (auto x : ans) cout << x << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends