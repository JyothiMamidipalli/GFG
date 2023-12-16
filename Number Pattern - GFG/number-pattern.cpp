//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<string> numberPattern(int N)
    {
        // Write Your Code here
         vector<string> pattern;
    
    for (int i = 1; i <= N; i++) {
        string row = "";
        
        // Print the first part of the row (increasing numbers)
        for (int j = 1; j <= i; j++) {
            row += to_string(j);
        }

        // Print the second part of the row (decreasing numbers)
        for (int j = i - 1; j >= 1; j--) {
            row += to_string(j);
        }

        pattern.push_back(row);
    }

    return pattern;
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
        cin>>N;
       
        Solution ob;
        vector<string> res = ob.numberPattern(N);
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    
    }
    return 0;
}
// } Driver Code Ends