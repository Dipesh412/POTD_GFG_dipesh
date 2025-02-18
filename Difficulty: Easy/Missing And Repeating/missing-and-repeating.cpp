//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0; i<arr.size(); i++){
            mp[arr[i]]++;
        }
        
        int i=1,miss,rep;
        for(int i=1; i<=arr.size(); i++){
            if(mp.find(i) != mp.end()){
                if(mp[i] > 1) rep = i; 
            }else{
                miss = i;
            }
        }
        return {rep,miss};
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        int num;
        vector<int> arr;
        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }
        Solution ob;
        auto ans = ob.findTwoElement(arr);
        cout << ans[0] << " " << ans[1] << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends