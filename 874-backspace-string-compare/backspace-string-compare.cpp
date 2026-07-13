class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        int i = 0;
        while (i < s.length()) {
            if (s[i] == '#') {
                if (!st.empty())
                    st.pop();
            } else {
                st.push(s[i]);
            }
            i++;
        }
        string s1 = {};
        while (!st.empty()) {
            s1 += st.top();
            st.pop();
        }
        reverse(s1.begin(), s1.end());
        int j = 0;
        while (j < t.length()) {
            if (t[j] == '#') {
                if (!st.empty())
                    st.pop();
            } else {
                st.push(t[j]);
            }
            j++;
        }
        string s2 = {};
        while (!st.empty()) {
            s2 += st.top();
            st.pop();
        }
        reverse(s2.begin(), s2.end());
        if (s1 == s2) {
            return true;
        } else
            return false;
    }
};