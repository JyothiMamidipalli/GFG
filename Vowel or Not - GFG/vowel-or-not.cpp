//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    string isVowel(char c){
        // code here
        vector<char> answer = {'a','e','i','o','u','A','E','I','O','U'};
        for (int i = 0; i < answer.size(); i++)
        {
            if (c == answer[i])
            
            return "YES";
        }
        return "NO";
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        char c;
        cin >> c;
        Solution ob;
        cout << ob.isVowel(c) << endl;
    }
    return 0; 
} 
// } Driver Code Ends