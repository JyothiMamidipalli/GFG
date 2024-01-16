//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        int cnt=0;
        sort(A,A+n);
        for(int i=0;i<n;i++)
        {
            int a=X-(A[i]);
            int x=i+1;
            int y=n-1;
            while(x<y)
            {
                if(A[x]+A[y]==a) return true;
                if(A[x]+A[y]>a)
                {
                    y-=1;
                }
                else
                {
                    x+=1;
                }
            }
        }
        return false;
        
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends