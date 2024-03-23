class Solution {
  public:
    int mod = 1000000007;
    vector<int> Series(int n) {
        vector<int>v;
        if(n==0){
            return {0};
        }
        if(n==1){
            return {0,1};
        }
        int n1=0,n2=1;
        v.push_back(0);
        v.push_back(1);
        for(int i=2; i<=n; i++){
            int x = (n1+n2)%mod;
            v.push_back(x);
            n1=n2%mod;
            n2=x;
        }
        return v;
    }
};
