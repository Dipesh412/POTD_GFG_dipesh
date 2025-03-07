//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int f(int i, int j1, int j2, int n , int m , vector<vector<int>>&rid,vector<vector<vector<int>>>&dp){
        if(j1<0 || j1>=m || j2<0 || j2>=m) return INT_MIN;
        if(i==n-1){
            if(j1==j2){
                return rid[i][j1];
            }
            else{
                return rid[i][j1]+rid[i][j2];
            }
        } 
        
        if(dp[i][j1][j2] != -1) return dp[i][j1][j2];
        int maxi = INT_MIN;
        for(int di=-1; di<=1; di++){
            for(int dj=-1; dj<=1; dj++){
                int ans ;
                if(j1==j2){
                    ans = rid[i][j1] + f(i+1,di+j1,dj+j2,n,m,rid,dp);
                }
                else{
                    ans = rid[i][j1]+rid[i][j2] + f(i+1,di+j1,dj+j2,n,m,rid,dp);
                }
                
                maxi = max(maxi,ans);
                
            }
        }
        
        return dp[i][j1][j2] = maxi;
    }
    int solve(int n, int m, vector<vector<int>>& rid) {
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m, vector<int>(m,-1)));
        return f(0,0,m-1,n,m,rid,dp);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid;
        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j < m; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            grid.push_back(temp);
        }

        Solution obj;
        cout << obj.solve(n, m, grid) << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends