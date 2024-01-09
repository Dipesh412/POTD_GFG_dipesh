#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
             vector<int> ans;
             int occurance = -1;
             
             for(int i=0; i<txt.size(); i++){
                    occurance = txt.find(pat,occurance+1);
                    if(occurance==-1){
                        if(ans.size()==0){
                            return {-1};
                            
                        }
                        break;
                    }
                    ans.push_back(occurance+1);
             }
             return ans;
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
        if (res.size()==0)
            cout<<-1<<endl;
        else {
            for (int i : res) cout << i << " ";
            cout << endl;
        }
    }
    return 0;
}