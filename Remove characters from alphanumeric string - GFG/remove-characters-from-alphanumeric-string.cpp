//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	

	string removeCharacters(string S) 
	{
	    // Your code goes here
	     string ans="";
        for(int i=0;i<S.length();i++){
        if(S[i]=='1'||S[i]=='2'||S[i]=='3'||S[i]=='4'||S[i]=='5'||S[i]=='6'||S[i]=='7'||S[i]=='8'||S[i]=='9'||S[i]=='0'){
            ans.push_back(S[i]);
        }
    }
    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		Solution ob;
   		cout << ob.removeCharacters(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends