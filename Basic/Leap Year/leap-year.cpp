//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int isLeap(int N){
        //code here
        if((N%100!=0 and N%4==0) or (N%400==0)) return 1;
        else return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isLeap(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends