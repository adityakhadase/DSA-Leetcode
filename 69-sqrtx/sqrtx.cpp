class Solution {
public:
    int mySqrt(int x) {
        int low = 0;
        int high = x;
        int ans;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long long n = 1LL * mid * mid;
            if (n == x) {
                return mid;
            } else if (n > x) {
                high = mid - 1;
            } else {
                ans = mid;
                low = mid + 1;
            }
        }
        return ans;
    }
};