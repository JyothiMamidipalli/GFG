//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> jugglerSequence(int n) {
        // code here
        vector<int>jyo;
        while(n!=1)
        {
            jyo.push_back(n);
            if(n%2==0){
                n=pow(n,0.5);
            }
            else{
                n=pow(n,1.5);
            }
        }
        jyo.push_back(n);
        return jyo;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        vector<int> ans = ob.jugglerSequence(n);
        for (int u : ans)
            cout << u << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends