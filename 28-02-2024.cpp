class Solution{
    public:
    int DivisibleByEight(string s){
       if(s.size()<3){
           int smallNum = stoi(s);
           if(smallNum%8==0){
               return 1;
           }
           else{
               return -1;
           }
       }
       
       string str="";
       str+=s[s.size()-3];
       str+=s[s.size()-2];
       str+=s[s.size()-1];
       
       int num = stoi(str);
       if(num%8==0){
           return 1;
       }else{
           return -1;
       }
    }
};
