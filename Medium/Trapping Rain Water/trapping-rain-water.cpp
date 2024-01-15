//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int i=0,j=n-1;
        int imax=0,jmax=0;
        long long ans=0;
        while(i<=j)
        {
            if(arr[i]<arr[j])
            {
                if(arr[i]>imax)
                {
                    imax=arr[i];
                    
                }
                else
                {
                    ans+=imax-arr[i];
                }
                i++;
            }
            else
            {
                if(arr[j]>jmax)
                {
                    jmax=arr[j];
                }
                else
                {
                    ans+=jmax-arr[j];
                }
                j--;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends