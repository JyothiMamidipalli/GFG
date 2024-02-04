//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    void fun(string s, int start,int end,vector<string>&jyo)
    {
        if(start >= end)
        {
            jyo.push_back(s);
            return;
        }
        for(int i = start ; i <= end ; i++)
        {
            swap(s[i],s[start]);
            fun(s,start+1,end,jyo);
            swap(s[i],s[start]);
        }
    }
    vector<string> permutation(string S)
    {
        //Your code here
        vector<string>jyo;
        fun(S,0,S.size()-1,jyo);
        sort(jyo.begin(),jyo.end());
        return jyo;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends