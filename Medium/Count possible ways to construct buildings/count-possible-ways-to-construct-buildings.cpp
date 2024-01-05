//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int TotalWays(int N)
	{
	    // Code here
	    long long int mod=1e9+7;
	    //if(N<=1) return N;
	    long long int a=1;
	    long long int b=1;
	    long long int c=0;
	    for(int i=1;i<=N;i++)
	    {
	        c=(a+b)%mod;
	        a=b;
	        b=c;
	    }
	    c=(c*c)%mod;
	    return c;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		int ans = ob.TotalWays(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code EndsCustom Input
