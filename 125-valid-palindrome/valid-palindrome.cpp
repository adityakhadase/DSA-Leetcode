class Solution {
public:
    string cleanString(string str) {
        string ans;

        for (char ch : str) {
            if (isalnum(ch)) {
                ans += tolower(ch);
            }
        }

        return ans;
    }

    bool isPalindrome(string str) {
        str = cleanString(str);

        int n = str.length();

        for (int i = 0; i < n / 2; i++) {
            if (str[i] != str[n - 1 - i]) {
                return false;
            }
        }

        return true;
    }
};