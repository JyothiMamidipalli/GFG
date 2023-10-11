//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int r,a,j;
        int temp=n,sum;
        r=n%10;
        n/=10;
        a=n%10;
        n/=10;
        j=n%10;
        sum=pow(r,3)+pow(a,3)+pow(j,3);
        if(sum==temp) return "Yes";
        else return "No";
        
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
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends