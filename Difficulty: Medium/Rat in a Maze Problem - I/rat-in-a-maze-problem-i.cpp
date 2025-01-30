//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int di[4] = {1,0,0,-1};
    int dj[4] = {0,-1,1,0};
    void solve(int n , int i, int j ,vector<string >&fil, vector<vector<int>>&ans,string s, vector<vector<int >>&mat){
        if(i==n-1 && j==n-1){
            fil.push_back(s);
            return;
        }
        
        string dir = "DLRU";
        for(int k=0; k<4; k++){
            int nx = i + di[k];
            int ny = j + dj[k];
            
            if(nx >=0 && ny>=0 && nx<n && ny<n && !ans[nx][ny] && mat[nx][ny] == 1){
                ans[i][j] =1;
                solve(n,nx,ny,fil,ans,s+dir[k],mat);
                ans[i][j] = 0;
            }
        }
    }
    vector<string> findPath(vector<vector<int>> &mat) {
        int n = mat.size();
        //int m = mat[0].size();
        vector<vector<int>>ans(n, vector<int>(n,0));
        vector<string >fil;
        if(mat[0][0]==1){
            solve(n,0,0,fil,ans,"",mat);
        }
        return fil;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string input;
        getline(cin, input);
        vector<vector<int>> mat;
        string innerArray;
        bool isInsideArray = false;

        for (char c : input) {
            if (c == '[') {
                if (isInsideArray) {
                    innerArray.clear();
                }
                isInsideArray = true;
            } else if (c == ']') {
                if (isInsideArray && !innerArray.empty()) {
                    vector<int> row;
                    stringstream ss(innerArray);
                    int num;

                    while (ss >> num) {
                        row.push_back(num);
                        if (ss.peek() == ',')
                            ss.ignore();
                        while (isspace(ss.peek()))
                            ss.ignore();
                    }

                    mat.push_back(row);
                    innerArray.clear();
                }
                isInsideArray = false;
            } else if (isInsideArray) {
                if (!isspace(c)) {
                    innerArray += c;
                }
            }
        }

        Solution obj;
        vector<string> result = obj.findPath(mat);
        sort(result.begin(), result.end());

        if (result.empty())
            cout << "[]";
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends