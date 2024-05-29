//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    bool solve(int n,int x,int y,vector<int>&dp){
        if(n==x||n==y||n==1){
            return dp[n]=true;
        }
        if(dp[n]!=false){
            return dp[n];
        }
        bool p=true,q=true,r=true;
        if(n>=x){
            p=solve(n-x,x,y,dp);
        }
        if(n>=y){
            q=solve(n-y,x,y,dp);
        }
        if(n>=1){
            r=solve(n-1,x,y,dp);
        }
        return dp[n] = (!p||!q||!r);
    }
    int findWinner(int n, int x, int y) {
        vector<int>dp(n+1,false);
        return solve(n,x,y,dp);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int n;
        scanf("%d", &n);

        int x;
        scanf("%d", &x);

        int y;
        scanf("%d", &y);

        Solution obj;
        int res = obj.findWinner(n, x, y);

        cout << res << endl;
    }
}

// } Driver Code Ends