//{ Driver Code Starts
//Initial template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
	int fullPrime(int N){
	    //code here
	       if(N==2)
            return 1;
        for(int i=2;i<N/2;i++){
            if(N%i==0)
                return 0;
        }
        int last,temp=N;
        while(temp>0){
            last=temp%10;
            if(last==0||last==1||last==4||last==6||last==8||last==9)
                return 0;
           temp=temp/10;
        }
        return 1;
	}
};


//{ Driver Code Starts.
int main()
{
	int t;
    cin>>t;
    while(t--){
	   int N;
	   cin>>N;
       Solution ob;
       cout << ob.fullPrime(N)<<"\n";
    }
}
// } Driver Code Ends