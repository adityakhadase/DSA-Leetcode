class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        if (s.length() <= 1)
            return false;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push('(');
            }
            else if (s[i] == ')') {
                if (st.empty()) return false;   
                if (st.top() == '(')
                    st.pop();
                else
                    return false;
            }
            else if (s[i] == '[') {
                st.push('[');
            }
            else if (s[i] == ']') {
                if (st.empty()) return false;
                if (st.top() == '[')
                    st.pop();
                else
                    return false;
            }
            else if (s[i] == '{') {
                st.push('{');
            }
            else if (s[i] == '}') {
                if (st.empty()) return false;
                if (st.top() == '{')
                    st.pop();
                else
                    return false;
            }
        }
        if(st.empty()){
            return true; 
        }else return false;

          
    }
};