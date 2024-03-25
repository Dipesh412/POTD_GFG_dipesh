//User function template for C++
class Solution{
public:	
    void solve(int n,string k,int index,int zeros,int ones,vector<string>&result){
        if(index==n){
            result.push_back(k);
            return ;
        }
        solve(n,k+"1",index+1,zeros,ones+1,result);
        if(zeros<ones){
            solve(n,k+"0",index+1,zeros+1,ones,result);
        }
    }
	vector<string> NBitBinary(int n)
	{
	    vector<string>result;
	    string k= "1";
	    solve(n,k,1,0,1,result);
	    sort(result.begin(),result.end(),greater<string>());
	    return result;
	}
};
