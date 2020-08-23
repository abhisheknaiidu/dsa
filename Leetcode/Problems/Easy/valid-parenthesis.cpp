class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack <char> st;
        for(auto c : s){
            
            if(!st.empty()){
                if(c == ']' && st.top() =='[' ) 
                    st.pop();
                else if(c == '}' && st.top() =='{' ) 
                    st.pop();
                else if(c == ')' && st.top() =='(' ) 
                    st.pop();
                else
                    st.push(c);
            }
            else
                st.push(c);
        }

        cout << st.size();
        if(st.empty()) return true;
        
        return false;
    }
};