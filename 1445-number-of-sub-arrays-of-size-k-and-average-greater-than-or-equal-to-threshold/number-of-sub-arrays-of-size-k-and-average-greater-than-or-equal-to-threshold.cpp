class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int th) {
        int left = 0;
        int right = k;
        int sum = 0;
        int count = 0;
        for (left; left < k ; left++) {
            sum += arr[left];
        }
        if ((sum / k) >= th) {
            count++;
        }
        left = 0;
        for (right; right < arr.size(); right++) {
            sum = sum - arr[left] + arr[right];
            if ((sum / k) >= th) {
                count++;
            }
            left++;
        }
        return count;
    }
};