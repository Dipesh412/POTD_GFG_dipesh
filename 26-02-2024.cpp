   void solve(string& s,string temp,vector<string>&ans,int index){
            if(index==s.length()){
                if(temp.length()>=1)
                ans.push_back(temp);
                return;
            }
            solve(s,temp,ans,index+1);
            solve(s,temp+s[index],ans,index+1);
        }
        vector<string> AllPossibleStrings(string s){
            vector<string>ans;
            solve(s,"",ans,0);
            sort(ans.begin(),ans.end());
            return ans;
            
        }
