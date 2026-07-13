class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        int i=0;
        while(i<s.length()){
            if(st.empty()){
                st.push(s[i]);
                i++;
            }
            else if(st.top()==s[i]){
                st.pop();
                i++;
            }
            else{
                st.push(s[i]);
                i++;
            }
        }
        string rev={};
        while(!st.empty()){
            rev+=st.top();
            st.pop();

        }
        int j=0;
        while(j<rev.length()){
            st.push(rev[j]);
            j++;
        }
        string out={};
         while(!st.empty()){
            out+=st.top();
            st.pop();

        }
        
        


        return out;
        
        
    }
};