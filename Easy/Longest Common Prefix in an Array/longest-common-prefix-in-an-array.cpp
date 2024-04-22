//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
   
    string longestCommonPrefix (string arr[], int N)
    {
        string result = arr[0];
        for(int i=0; i<N; i++){
            string r = arr[i];
            string s = "";
            for(int j=0; j<r.size(); j++){
                if(result[j]==r[j]){
                    s+=result[j];
                }
                else{
                    break;
                }
            }
            result = s;
        }
        if(result==""){
            return "-1";
        }
        return result;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends