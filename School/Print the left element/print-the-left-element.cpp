//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int leftElement(int a[], int n) {
        sort(a,a+n);
        int flag=0;
        int i=0 , j=n-1;
        while(i<j){
            if(flag==0){
                j--;
                flag=1;
            }
            else{
                i++;
                flag=0;
            }
            
        }
        return a[j];
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.leftElement(a, n) << endl;
    }
}

// } Driver Code Ends