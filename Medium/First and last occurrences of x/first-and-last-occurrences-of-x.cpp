//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        // code here
        vector<int>raj;
        int bin=binary_search(arr,arr+n,x);
        if(bin){
            auto low= lower_bound(arr,arr+n,x);
            auto upp=upper_bound(arr,arr+n,x);
            int l=low-arr;
            int h=upp-arr;
            h--;
            raj.push_back(l);
            raj.push_back(h);
            return raj;
        }
        raj.push_back(-1);
        raj.push_back(-1);
        return raj;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends