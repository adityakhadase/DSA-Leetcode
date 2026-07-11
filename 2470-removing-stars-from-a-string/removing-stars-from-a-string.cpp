class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string str={};
        for(int i=0;i<s.length();i++){
            if(s[i]!='*'){
                st.push(s[i]);
            }
             if(s[i]=='*'){
                st.pop();
            }
        }
        int j=st.size();
        while(j>0){
            str+=st.top();
            st.pop();
            j--;

        }
        string str1={};
        for(int x=str.length()-1;x>-1;x--){
            str1+=str[x];
        }
        return str1;
    }
};