//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPerfect(int N) {
        // code here
         int pn = 0;
        int rn = N;
        while(N){
            int tmp = N%10;
            pn += fact(tmp);
            N = N/10;
        }
        return (pn==rn);
    }
    int fact(int n){
        int i = 1;
        while(n){
            i*=n;
            n--;
        }
        return i;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isPerfect(N) << "\n";
    }
}

// } Driver Code Ends