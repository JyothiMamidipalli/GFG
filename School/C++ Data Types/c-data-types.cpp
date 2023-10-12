//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int cppIntType() {
        // code here
        int res;
        std::cin >> res;
        return res;
    }
    
    char cppCharType() {
        // code here
        char res;
        std::cin >> res;
        return res;
    }
    
    float cppFloatType() {
        // code here
        float res;
        std::cin >> res;
        return res;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        Solution ob;
        cout << ob.cppIntType() << endl;
        cout << ob.cppCharType() << endl;
        cout << ob.cppFloatType() << endl;
    }
    return 0;
}
// } Driver Code Ends