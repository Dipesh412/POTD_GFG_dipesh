//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
class Solution{
  public:
    /*You are required to complete below function */
    string multiplyStrings(string s1, string s2) {
       int n1 = s1.size();
       int n2 = s2.size();
       int a = s1[0]=='-'?-1:0;
       int b = s2[0]=='-'?-1:0;
       vector<int>ans(n1+n2);
       for(int i=n1-1; i>=0; i--){
           int k = i+n2;
           if(s1[i]!='-'){
               int carry=0;
               for(int j=n2-1; j>=0; j--){
                   if(s2[j]!='-'){
                       int x = (s1[i]-'0')*(s2[j]-'0')+carry+ans[k];
                       
                       ans[k]=x%10;
                       carry = x/10;
                       k--;
                   }
               }
               if(carry>0){
                   ans[k]=carry;
               }
           }
       }
      
       bool flag = true;
       string s;
       for(int i=0; i<n1+n2; i++){
           while(i<n1+n2 && flag==true && ans[i]==0){
               i++;
           }
           flag=false;
           if(i<n1+n2) {
               s+=to_string(ans[i]);
           }
       }

       if(s.size()==0){
           return "0";
       }
       if(a<0 && b>=0 || b<0 && a>=0){
           s = "-"+s;
       }
       return s;
       
       
       
    }

};

//{ Driver Code Starts.
 
int main() {
     
    int t;
    cin>>t;
    while(t--)
    {
    	string a;
    	string b;
    	cin>>a>>b;
    	Solution obj;
    	cout<<obj.multiplyStrings(a,b)<<endl;
    }
     
}
// } Driver Code Ends