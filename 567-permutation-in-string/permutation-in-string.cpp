class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        int left = 0;
        int right = 0;
        if (s1.length() > s2.length())
            return false;
        for (auto str : s1) {
            freq1[str - 'a']++;
        }
        for (right; right < s1.length(); right++) {
            freq2[s2[right] - 'a']++;
        }
        while (right < s2.length()) {
            if (freq1 == freq2) {
                return true;
            }
                freq2[s2[left] - 'a']--;
                left++;
                freq2[s2[right] - 'a']++;
                right++;
        }
        return freq1 == freq2;
    }
};