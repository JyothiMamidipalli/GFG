//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
#define ll long long

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	    
	   ll mod=1e9+7;
	   ll first=2;
	   ll second =3;
	   if(n==1) return 2;
	   if(n==2) return 3;
	   n-=2;
	   while(n)
	   {
	      ll third = (first+second)%mod;
	      first=second;
	      second=third;
	      n--;
	   }
	   return second;
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
        auto ans = ob.countStrings(n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends