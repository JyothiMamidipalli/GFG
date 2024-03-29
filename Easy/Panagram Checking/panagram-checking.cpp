//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
        if(s.size()<26) return 0;
        vector<int>r(26,0);
        for(auto it:s)
        {
            if(isupper(it))
            {
                int val =  it - 'A';
                r[val]++;
            }
            else if(islower(it))
            {
                int val =  it - 'a';
                r[val]++;
            }
        }
        for(auto it:r)
        {
            if(it==0) return 0;
        }
        return 1;
        
    }

};

//{ Driver Code Starts.

// Driver Program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--){
        string s;
        getline(cin, s);
        Solution obj;
        if (obj.checkPangram(s) == true)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
    return(0);
}

// } Driver Code Ends