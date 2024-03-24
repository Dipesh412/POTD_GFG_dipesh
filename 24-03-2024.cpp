//User function Template for C++

class Solution{
public:
    stack<int> insertAtBottom(stack<int> st,int x){
        stack<int>ts;
        while(!st.empty()){
            ts.push(st.top());
            st.pop();
        }
        st.push(x);
        while(!ts.empty()){
            st.push(ts.top());
            ts.pop();
        }
        return st;
    }
};
