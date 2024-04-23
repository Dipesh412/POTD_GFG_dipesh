//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int mod = 1000000007;
    int firstElement(int n) {
        int a=1,b=1;
        int sum=1;
        for(int i=3; i<=n; i++){
            sum=(a+b)%mod;
            a=b;
            b=sum;
            
        }
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.firstElement(n) << endl;
    }
    return 0;
}

// } Driver Code Ends