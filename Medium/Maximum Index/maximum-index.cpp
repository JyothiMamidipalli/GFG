//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
        
    // A[]: input array
    // N: size of array
    // Function to find the maximum index difference.
    int maxIndexDiff(int a[], int n) 
    { 
        // Your code here
        vector<int>jyo(n,a[0]);
        vector<int>raj(n,a[n-1]);
       for (int i=1;i<n;i++){
           jyo[i]=min(jyo[i-1],a[i]);
       }
       for (int i=n-2;i>=0;i--){
           raj[i]=max(raj[i+1],a[i]);
           
       }
       int lt=0;
       int rt=0;
       int mx=0;
       while(lt<n and rt<n){
           if (jyo[lt]<=raj[rt]){
               mx=max(mx,rt-lt);
               rt+=1;
           }
           else{
               lt+=1;
           }
       }
       return mx;
    }
};

//{ Driver Code Starts.
  
/* Driver program to test above functions */
int main() 
{
    int T;
    //testcases
    cin>>T;
    while(T--){
        int num;
        //size of array
        cin>>num;
        int arr[num];
        
        //inserting elements
        for (int i = 0; i<num; i++)
            cin>>arr[i];
        Solution ob;
        
        //calling maxIndexDiff() function
        cout<<ob.maxIndexDiff(arr, num)<<endl;    
        
    }
    return 0;
} 
// } Driver Code Ends