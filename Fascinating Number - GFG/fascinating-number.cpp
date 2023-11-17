//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	bool fascinating(int n) {
	    // code here
	    long raj=n*2;
	    long jyo=n*3;
	    string r=to_string(raj);
	    string j=to_string(jyo);
	    string m=to_string(n);
	    string res=r+j;
	    res+=m;
	    sort(res.begin(),res.end());
	    if(res=="123456789") return true;
	    return false;
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
        auto ans = ob.fascinating(n);
        if (ans) {
            cout << "Fascinating\n";
        } else {
            cout << "Not Fascinating\n";
        }
    }
    return 0;
}
// } Driver Code Ends