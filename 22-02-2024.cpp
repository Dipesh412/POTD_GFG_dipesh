class Solution
{
    public:
    int mod = 1e9+7;
    int subsequenceCount(string s, string t)
    {
      int sLen = s.length();
      int tLen = t.length();
      
      vector<int> prev(tLen+1, 0), curr(tLen+1, 0);
      for(int i=sLen-1; i>=0; i--){
          prev[tLen] = 1;
          for(int j=tLen-1; j>=0;j--){
                int match = 0, notMatch = 0;
                if(s[i]==t[j]){
                    match = prev[j+1] + prev[j];
                    match %= mod;
                }
                else {
                    notMatch = prev[j];
                    notMatch %= mod;
                }
                
                curr[j] = (match + notMatch)%mod;
          }
          prev = curr;
      }
      
      return prev[0];
    }
};
