//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int f(vector<int>&arr, int tar, int &cnt, int ind, vector<vector<int>>&dp){
        if(ind == 0){
            if(tar==0 && arr[0] == 0){
               
                
                return 2;
            }
            if(tar==0 || arr[0]==tar){
                cnt++;
                return 1;
            }
            return  0;
        }
        
        if(dp[ind][tar] != -1){
            return dp[ind][tar];
        }
        int takenot = f(arr,tar,cnt,ind-1,dp);
        int take = 0;
        if(arr[ind]<=tar){
            take = f(arr,tar-arr[ind],cnt,ind-1,dp);
        }
        return dp[ind][tar] = take+takenot;
        
    }
    int perfectSum(vector<int>& arr, int target) {
        int cnt = 0;
        int n = arr.size();
        vector<vector<int>>dp(n, vector<int>(target+1,-1 ));
        return f(arr,target,cnt,n-1,dp );
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int target;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> target;
        cin.ignore(); // Ignore newline character after target input

        Solution solution;
        cout << solution.perfectSum(arr, target);
        cout << "\n~\n";
    }

    return 0;
}

// } Driver Code Ends