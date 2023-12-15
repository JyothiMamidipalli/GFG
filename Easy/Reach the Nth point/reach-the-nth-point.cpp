//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		    int mod =1e9+7,res;
		    if(n==1  || n==2 || n==3 ) return n;
		    else
		    {
		        int a=2,b=3,i;
		        for(i=3;i<n;i++)
		        {
		            res=(a+b)%mod;
		            a=b;
		            b=res;
		        }
		        return res;
		    }
		    
		    
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends