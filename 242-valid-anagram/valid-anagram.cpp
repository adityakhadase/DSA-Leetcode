class Solution {
public:
    bool isAnagram(string s, string t) {
        string dup=t;
        if (s.length() != t.length())
            return false;
        for(int i=0;i<s.length();i++){
            for(int j=0;j<dup.length();j++){
                if(s[i]==dup[j]){
                    dup.erase(j,1);
                    break;
                }
            }
        }
        if(dup.length()==0) return true;
        else return false;
        
    }
};