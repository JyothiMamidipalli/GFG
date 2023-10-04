//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        // code here
        unordered_map<char,int>raj;
        raj['I']=1,raj['V']=5,raj['X']=10,raj['L']=50,raj['C']=100,raj['D']=500,raj['M']=1000;
        int res=0;
        for(int i=0;i<str.length();i++)
        {
            if(raj[str[i]]<raj[str[i+1]])
            {
                res-=raj[str[i]];
            }
            else
            {
                res+=raj[str[i]];
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends