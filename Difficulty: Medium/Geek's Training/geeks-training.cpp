//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int f(vector<vector<int>>& arr, int day, int last,vector<vector<int>>&dp ){
        if(dp[day][last] != -1) return dp[day][last];
        if(day == 0){
            int maxi = 0;
            for(int i=0; i<=2; i++){
                if(last != i){
                    maxi = max(maxi , arr[0][i]);
                }
            }
            return dp[day][last] = maxi;
        }
        
        int maxi = 0;
        for(int i=0; i<=2; i++){
            if(i!=last){
                int act = arr[day][i] + f(arr, day-1,i,dp);
                maxi = max(maxi, act);
            }
            
        }
        return dp[day][last] = maxi;
    }
    int maximumPoints(vector<vector<int>>& arr) {
        
        int n = arr.size();
        vector<vector<int>>dp(n,vector<int>(4,-1));
        return f(arr,n-1,3,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> arr;
        for (int i = 0; i < n; ++i) {
            vector<int> temp;
            for (int j = 0; j < 3; ++j) {
                int x;
                cin >> x;
                temp.push_back(x);
            }
            arr.push_back(temp);
        }

        Solution obj;
        cout << obj.maximumPoints(arr) << endl;
        cout << "~" << endl;
    }
    return 0;
}
// } Driver Code Ends