  if(s==""){
           return 1;
       }
           for(auto it:dictionary){
               if(it==s.substr(0,it.size())){
                   if(wordBreak(n,s.substr(it.size()),dictionary)){
                       return 1;
                   }
               }
              
           }
            return 0;
