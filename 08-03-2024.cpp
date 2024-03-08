class Solution{
public:	
	bool sameFreq(string s)
	{
	     vector<int>v(26,0);
        for(auto i : s)
        {
            v[i-'a']++;
        }
        
        
        sort(v.begin(),v.end());
        int i=0;
        while(v[i]==0 && i<26){
            i++;
        }
        
        
        int idx=-1;
        for(;i<25;i++)
        {
            if(v[i]!=v[i+1]){
                idx=i;
                break;
            }
        }
        
        if((idx==24 && v[25]-v[24]<=1) || idx==-1)
        {
            return true;
        }
        return false;
	}
};
