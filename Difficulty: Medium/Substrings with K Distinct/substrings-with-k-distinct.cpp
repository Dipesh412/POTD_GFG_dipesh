//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

// User function template for C++

class Solution {
  public:
    int atMostK(string s, int k) {
    if (k == 0) return 0; // Edge case
    unordered_map<char, int> freq;
    int left = 0, right = 0, count = 0;
    
    for (right = 0; right < s.size(); right++) {
        freq[s[right]]++;
        
        while (freq.size() > k) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) 
                freq.erase(s[left]);
            left++;
        }
        
        count += (right - left + 1);
    }
    
    return count;
}
    int countSubstr(string& s, int k) {
        return atMostK(s, k) - atMostK(s, k - 1);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.countSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}
// } Driver Code Ends