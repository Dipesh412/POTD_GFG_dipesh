//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int f(int mid, int n, int m ){
        int ans = 1;
        for(int i=1; i<=n; i++){
            ans = ans*mid;
            if(ans > m){
                return 2;
            }
            
        }
        if(ans == m){
                return 0; 
            }
        return 1;
    }
    int nthRoot(int n, int m) {
        int low = 1 , j=m;
        while(low <=j){
            int mid = (low+j)/2;
            int midN = f(mid,n,m);
            
            if(midN == 0){
                return mid; 
            }
            else if(midN == 2){
                j = mid-1;
            }else{
                low = mid+1;
            }
        }
        return -1;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        int ans = ob.nthRoot(n, m);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends