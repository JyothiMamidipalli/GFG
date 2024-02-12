//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        // code here
        int raj=-1,jyo=-1;
        int janu=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(arr[i]==x) raj=i;
            else if(arr[i]==y) jyo=i;
            if(raj!=-1 and jyo!=-1)
            {
                int temp=abs(raj-jyo);
                janu=min(janu,temp);
            }
        }
        if(raj==-1 or jyo==-1) return -1;
        else return janu;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends