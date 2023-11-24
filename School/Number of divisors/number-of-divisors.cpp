//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
	public:
		int count_divisors(int n)
		{
		    //Code here.
		     int c=0;
            for(int a=1; a*a<=n; a++){
                if(n%a==0){
                    if(a==n/a){
                        if(a%3==0)
                            c++;
                    }else{
                        if(a%3==0){
                            c++;
                        }
                        if((n/a)%3==0)
                            c++;
                    }
                }
            }
            return c;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	Solution ob;
    	int ans = ob.count_divisors(n);
    	cout << ans << "\n";
    }
	return 0;
}
// } Driver Code Ends