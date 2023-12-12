//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> EvenOddSum(int N, int Arr[]) {
        // code here
        int sumodd=0,sumeven=0;
       for(int i=0;i<N;i++){
           if(i%2==0){
               sumeven += Arr[i];
           }
           else{
               sumodd += Arr[i];
           }
       }
       return {sumeven,sumodd};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int Arr[N];
        for (int i = 0; i < N; i++) cin >> Arr[i];
        Solution ob;
        vector<int> ans = ob.EvenOddSum(N, Arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
}
// } Driver Code Ends