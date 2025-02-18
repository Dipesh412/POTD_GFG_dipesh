//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count inversions in the array.
    void mer(int l, int mid, int r, vector<int>&arr, int &cnt ){
        int i=l, j=mid+1, k=l, temp[r];
        while(i<=mid && j<=r){
            if(arr[i] <= arr[j]){
                temp[k++] = arr[i++];
            }else{
                cnt += (mid-i)+1;
                temp[k++] = arr[j++];
            }
        } 
        
        while(i<=mid){
            temp[k++] = arr[i++];
        } 
        while(j<=r){
            temp[k++] = arr[j++];
        } 
        
        for(int i=l; i<=r; i++){
            arr[i] = temp[i];
        }
    }
    void mersort(int l, int r, vector<int>&arr, int &cnt){
        if(l<r){
            int mid = (l+r)/2;
            mersort(l,mid,arr,cnt);
            mersort(mid+1,r,arr,cnt);
            mer(l,mid,r,arr,cnt);
        }
    }
    int inversionCount(vector<int> &arr) {
        int cnt = 0;
        mersort(0,arr.size()-1,arr,cnt);
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {

    int T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<int> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
        cout << "~" << endl;
    }

    return 0;
}

// } Driver Code Ends