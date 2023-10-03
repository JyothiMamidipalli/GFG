//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;




// } Driver Code Ends
// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int i;
        int maxi=*max_element(array.begin(),array.end());
        int cnt[maxi+2]={0};
        for(i=0;i<n-1;i++)
        {
            cnt[array[i]]++;
        }
        for(i=1;i<=maxi+1;i++)
        {
            if(cnt[i]==0) return i;
        }
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n - 1);
        for (int i = 0; i < n - 1; ++i) cin >> array[i];
        Solution obj;
        cout << obj.missingNumber(array, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends