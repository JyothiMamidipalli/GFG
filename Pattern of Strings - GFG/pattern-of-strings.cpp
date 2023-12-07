//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<string> pattern(string S)
	{
	    // Your code goes here
	     vector<string> vstr;
	    string str;
	    int x = 0;
	    int n = S.length();
	    for(int i = 0; i < n; i++){
	        while(x < (n-i)){
	            str+=S[x];
	            x++;
	        }
	        vstr.push_back(str);
	        str = "";
	        x=0;
	    }
	    return vstr;
	}

};

//{ Driver Code Starts.

int main() 
{
   	
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	string tc;
   	getline(cin, tc);
   	t = stoi(tc);
   	while(t--)
   	{
   		string s;
   		getline(cin, s);

   		Solution ob;

   		vector<string> ans = ob.pattern(s);

   		for(int i = 0; i < ans.size(); i++)
   			cout << ans[i] << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends