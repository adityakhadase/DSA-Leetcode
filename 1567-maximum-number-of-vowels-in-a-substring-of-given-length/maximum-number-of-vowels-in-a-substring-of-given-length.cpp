class Solution {
public:
    int maxVowels(string s, int k) {
        int left = 0;
        int right = k;
        int count = 0;
        int maxv;
        for (left; left < k ; left++) {
            if (s[left] == 'a' || s[left] == 'e' || s[left] == 'i' ||
                s[left] == 'o' || s[left] == 'u') {
                count++;
            }
        }
        maxv = count;
        left = 0;
        for (right; right < s.length(); right++) {
            if (s[left] == 'a' || s[left] == 'e' || s[left] == 'i' ||
                s[left] == 'o' || s[left] == 'u') {
                count--;
            } 
            if (s[right] == 'a' || s[right] == 'e' || s[right] == 'i' ||
                       s[right] == 'o' || s[right] == 'u') {
                count++;
            }
            maxv=max(maxv,count);
            left++;
        }
        return maxv;
    }
};