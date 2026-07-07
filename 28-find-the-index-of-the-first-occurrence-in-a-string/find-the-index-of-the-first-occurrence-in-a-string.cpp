class Solution {
public:
    int strStr(string haystack, string needle) {
        bool found=true;
    int start;
    if(haystack.length() < needle.length()) return-1;
    for ( start = 0; start <= haystack.length() - needle.length(); start++) {
    for (int j = 0; j < needle.length(); j++) {
        if(needle[j]==haystack[start+j]){
            found=true;
        }
        if(needle[j]!=haystack[start+j]) {
            found=false;
            break;
        }
        
    }
    if(found==true) return start;
     

}
        return -1;
    }
};