class Solution {
public:
    string toLowerCase(string s) {
        string out="";
        for(int i=0;i<s.length();i++){
            out+= tolower(s[i]);

        }
        return out;
    }
};