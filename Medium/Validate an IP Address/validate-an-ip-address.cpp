//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
    public:
        int isValid(string s) {
            // code here
            int n=s.length();
            int cnt=0;
            string ans;
            for(int i=0;i<n;i++){
                if(s[i]!='.'){
                    if (!isdigit(s[i])){
                        return 0;
                    } 
                    ans+=s[i];
                    
                }
                else{
                    cnt++;
                    if (ans.empty() || ans.length() > 3 || (ans[0] == '0' && ans.length() > 1)){
                        return 0;
                    } 
                    int x=stoi(ans);
                    if(x<0 or x>255)return 0;
                    ans="";
                }
            }
            
           if (ans.empty() || ans.length() > 3 || (ans[0] == '0' && ans.length() > 1)){
               return 0;
           } 
           cnt++;
           return cnt == 4 ? 1 : 0; 
        }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}
// } Driver Code Ends