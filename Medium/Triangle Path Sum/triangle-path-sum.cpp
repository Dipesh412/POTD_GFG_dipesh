//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int f(int i,int j,vector<vector<int>>&dp,int n ,vector<vector<int>>&triangle){
        if(i==n-1) return triangle[i][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int down = triangle[i][j] +f(i+1,j,dp,n,triangle);
        int dia = triangle[i][j]+f(i+1,j+1,dp,n,triangle);
        return dp[i][j] = min(down,dia);
    }
    int minimizeSum(int n, vector<vector<int>>& triangle) {
        vector<vector<int>>dp(n,vector<int>(n,-1));
        return f(0,0,dp,n,triangle);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> triangle;

        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = 0; j <= i; j++) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            triangle.push_back(temp);
        }
        Solution obj;
        cout << obj.minimizeSum(n, triangle) << "\n";
    }
    return 0;
}
// } Driver Code Ends