//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
string transform(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<transform(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends



string transform(string s)
{
    // code here
    
    stringstream raj(s);
    string temp;
    string result;
    vector<string>jyo;
    while(getline(raj,temp,' '))
    {
        jyo.push_back(temp);
    }
    for(int i=0;i<jyo.size();i++)
    {
        jyo[i][0]=toupper(jyo[i][0]);
        if(i!=jyo.size()-1) {
            result+=jyo[i];
            result+=' ';
        }
        else
        {
            result+=jyo[i];
        }
    }
    return result;
}