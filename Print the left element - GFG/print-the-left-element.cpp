//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int leftElement(int a[], int n) {
        // Your code goes here  
        sort(a,a+n);
        int low=0;
        int high=n-1;
        int mid=(low+high)/2;
        if(n%2!=0){
            int temp1=a[mid];
            return temp1;
        }
        else{
            int temp2=a[mid];
            return temp2;
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.leftElement(a, n) << endl;
    }
}

// } Driver Code Ends