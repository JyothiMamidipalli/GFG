//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	long long diagonals(int n)
	{
		// Your code goes here
		long long ans = (long long)n;
		return (ans - 1) * ans / 2 - ans;
	}
};

//{ Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

	   

	    Solution ob;
	    cout << ob.diagonals(n) << "\n";
   
    }
    return 0;
}

// } Driver Code Ends