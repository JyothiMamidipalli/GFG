//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    string getBinaryRep(int N)
    {
        // Write Your Code here
        int i = 1;
        string display="000000000000000000000000000000";
        int j = 29 ;
        int t=N;
        while(t>0)
        {
            if((N & i) != 0) 
                display[j]='1';
            else
                display[j]='0';
            i*=2;
            j--;
            t/=2;
        }
     return display;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
       
        Solution ob;
        string ans = ob.getBinaryRep(N);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends