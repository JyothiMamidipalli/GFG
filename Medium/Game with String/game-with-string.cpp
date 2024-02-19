//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minValue(string s, int k){
        // code here
        map<char,int>mp;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
        }
        vector<int>jyo;
        int sum=0;
        for(auto it:mp)
        {
            jyo.push_back(it.second);
        }
        while(k!=0)
        {
            sort(jyo.begin(),jyo.end());
            int a = jyo.back();
            jyo.pop_back();
            jyo.push_back(a-1);
            k--;
        }
        for(int i=0;i<jyo.size();i++)
        {
            sum+=jyo[i]*jyo[i];
            
        }
        return sum;
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int k;
        cin>>s>>k;
        
        Solution ob;
        cout<<ob.minValue(s, k)<<"\n";
    }
    return 0;
}
// } Driver Code Ends