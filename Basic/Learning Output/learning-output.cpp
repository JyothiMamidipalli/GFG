//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    void Learning(int a[], int n, float &pos, float &neg, float &zero )
    {
        // Your code goes here
        float p=0,ne=0,z=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                z++;
            }
            else if(a[i]>0)
            {
                p++;
            }
            else{
                ne++;
            } 
        }
        pos=n/p;
        neg=n/ne;
        zero=n/z;
    }
};

//{ Driver Code Starts.
int main()
{
    long long int t = 0;
    scanf("%lld", &t);
    while(t--)
    {
        int i, n; 
        scanf("%d", &n);
        int a[n+5];
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);
            
        float pos=0, neg=0, zero=0;
        Solution ob;
        ob.Learning(a, n, pos, neg, zero);
        
        printf("%g\n%g\n%g\n", pos, neg, zero);
    }
}

// } Driver Code Ends