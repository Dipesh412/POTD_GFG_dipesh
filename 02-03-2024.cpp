#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int firstElementKTime(int n, int k, int a[])
    {
        unordered_map<int ,int >mp;
        for(int i=0; i<n; i++){
            mp[a[i]]++;
            if(mp[a[i]]==k){
                break;
            }
        }
        
        for(auto c:mp){
            if(c.second==k){
                return c.first;
            }
        }
        return -1;
        
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, k;
	    cin >> n >> k;
	    int a[n];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }
	    Solution ob;
	    cout<<ob.firstElementKTime(n, k, a)<<endl;
	}
	
	return 0;
}
