//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int arr[], int l, int h, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
       while(l<=(h+1/2) && h>=(h+1/2)){
            if(arr[l]==key){
                return l;
            }
            if(arr[h]==key){
                return h;
            }
            l++;
            h--;
        }
        return -1;
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends