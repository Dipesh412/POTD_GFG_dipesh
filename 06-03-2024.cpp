#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pattern, string text)
        {
            vector<int> v;
            
            int pointer = 0;
            
            int s = pattern.size();
            
            int t = text.size();
            
           
            for(int i = 0; i< t-s+1; i++){
                
                string g = text.substr(i,s);
                
                if (g == pattern){
                    
                    v.push_back(i+1);
                }
            }
            
            return v;
        }
        
     
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}
