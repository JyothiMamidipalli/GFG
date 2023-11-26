//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
private:
    void rec(vector<int>&jyo,int n)
    {
        if(n<=0) return;
        jyo.push_back(n);
        n-=5;
        rec(jyo,n);
        jyo.push_back(n);
        
    }
public:
    vector<int> pattern(int N){
        // code here
        vector<int>jyo;
        rec(jyo,N);
        if (jyo.size()!=1) jyo.push_back(N);
        return jyo;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> ans = ob.pattern(N);
        for(int u: ans)
            cout<<u<<" ";
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends