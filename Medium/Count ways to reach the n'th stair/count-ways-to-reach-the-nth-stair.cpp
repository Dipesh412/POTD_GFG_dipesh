//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    int mod = 1000000007;
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        if(n==1){
            return 1;
        }
        if(n==2){
            return 2;
        }
        int prev2 = 1;
        int ans;
        int prev = 2;
        for(int i=2; i<n; i++){
            ans=(prev2+prev)%mod;
            prev2= prev;
            prev =ans;
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends