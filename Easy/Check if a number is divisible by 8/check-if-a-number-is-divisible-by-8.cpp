//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int DivisibleByEight(string s){
        //code here
        int n = s.size();
        if(n<=2)
        {
            int c=stoi(s);
            if(c%8==0) return 1;
            else return -1;
        }
        else
        {
           int a=s[n-1]-'0';
           int b=s[n-2]-'0';
           int d=s[n-3]-'0';
           int raj=(d*100)+(b*10)+a*1;
           if(raj%8==0) return 1;
           else return -1;
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends