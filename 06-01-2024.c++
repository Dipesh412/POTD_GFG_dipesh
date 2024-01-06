#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int prime(int x){
        int ans=0;
        for(int i=2; i*i<=x; i++){
            while(x%i==0){
                ans++;
                x =x/i;
            }
        }
        if(x!=1){
            ans++;
        }
        return ans;
    }
	int sumOfPowers(int a, int b){
	    int point =0;
	    for(int i=a; i<=b; i++){
	        point+=prime(i);
	    }
	    return point;
	}
};
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>  a >> b;
		Solution obj;
		int ans = obj.sumOfPowers(a, b);
		cout << ans <<"\n";
	}
	return 0;
}