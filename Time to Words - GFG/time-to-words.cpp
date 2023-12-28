//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string timeToWord(int H, int M){
        // code here
         vector< string > v{ "", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine", "ten", "eleven",
        "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
        "seventeen", "eighteen", "nineteen", "twenty" };

    if ( M <= 30 ) v.front() = " past ";
    else { v.front() = " to "; M = 60 - M; H++; }
    if ( !( H %= 12 ) ) H = 12;

    string m{ M == 1 ? " minute" : " minutes" };

    if ( !M ) return v[ H ] + " o' clock";
    else if ( M == 15 ) return "quarter" + v.front() + v[ H ];
    else if ( M == 30 ) return "half" + v.front() + v[ H ];
    else if ( M <= 20 ) return v[ M ] + m + v.front() + v[ H ];

    return v.back() + ' ' + v[ M % 10 ] + m + v.front() + v[ H ];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int  H, M;
        cin >> H >> M;
        Solution ob;
        cout<<ob.timeToWord(H,M)<<endl;
    }
    return 0;
}

// } Driver Code Ends