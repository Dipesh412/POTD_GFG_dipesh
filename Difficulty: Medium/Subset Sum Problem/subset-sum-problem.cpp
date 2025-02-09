//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    bool f(int i, vector<int>&arr, int tar, vector<vector<int>>&dp){
        if(tar==0){
            return true;
        }
        
        if(i==0){
            return arr[0] == tar;
        }
        
        if(dp[i][tar] != -1) return dp[i][tar];
        bool nottake = f(i-1,arr,tar,dp);
        bool take = false;
        if(arr[i] <= tar) take = f(i-1,arr,tar-arr[i],dp);
        
        
        return dp[i][tar] = take||nottake;
        
    }
    bool isSubsetSum(vector<int>& arr, int target) {
        
        int n = arr.size();
        vector<vector<int>>dp(n,vector<int>(target+1,-1));
        return f(n-1,arr,target,dp);
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int sum;
        cin >> sum;
        cin.ignore();

        Solution ob;
        if (ob.isSubsetSum(arr, sum))
            cout << "true" << endl;
        else
            cout << "false" << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends