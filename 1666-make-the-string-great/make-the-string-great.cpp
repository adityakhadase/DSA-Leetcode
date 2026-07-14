class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        int i=0;
        while(i<s.length()){
            if(st.empty()){
                st.push(s[i]);
            }
            else if (!st.empty() && abs(st.top() - s[i]) == 32){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            i++;

        }
        string str={};
        while(!st.empty()){
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
        
    }
};