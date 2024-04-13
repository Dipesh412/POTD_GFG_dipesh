//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
        vector<int>maxi(n,0);
        vector<int>mini(n,0);
        
        maxi[0]=arr[0];
        mini[n-1] = arr[n-1];
        for(int i=1; i<n; i++){
            maxi[i]=min(maxi[i-1],arr[i]);
        }
        for(int j=n-2; j>=0; j--){
            mini[j]=max(mini[j+1],arr[j]);
        }
        
        int i=0; int j=0;
        int ans=0;
        while(i<n && j<n){
            if(maxi[i]<=mini[j]){
                ans = max(ans,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return ans;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends