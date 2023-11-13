//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> count (string s)
        {
            //code here.
            int cnt1=0,cnt2=0,cnt3=0,cnt4=0;
            for(auto i:s)
            {
                if(isupper(i)) cnt1++;
                else if(islower(i)) cnt2++;
                else if(isdigit(i)) cnt3++;
                else cnt4++;
            }
            return {cnt1,cnt2,cnt3,cnt4};
        }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        vector <int> res = ob.count (s);
        for (int i : res)
            cout << i << '\n';
    }
}

// Contributed By: Pranay Bansal
// } Driver Code Ends