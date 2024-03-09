#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    char nthCharacter(string s, int r, int n) {
       string a= "01";
       string b="10";
       int cnt=0;
       for(int i=0; i<r; i++){
           string temp = s;
           s="";
           for(int j=0; j<temp.size(); j++){
              
                if(s.size()>n){
                    
                    break;
                }
            
               if(temp[j]=='0'){
                   s+=a;
               }
               if(temp[j]=='1'){
                   s+=b;
               }
           }
           
       }
       
       char ans ;
       for(int i=0; i<=n; i++){
           ans = s[i];
           
       }
       return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int R, N;
        string S;
        cin >> S >> R >> N;
        Solution ob;
        cout << ob.nthCharacter(S, R, N) << endl;
    }
    return 0;
}
