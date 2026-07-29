#include <numeric>
class Solution {
public:
    bool canship(int capacity,vector<int>& weights, int days) {
        int dayUsed = 1;
        int currentWeight = 0;
        for (int w : weights) {
            if (currentWeight + w <= capacity) {
                currentWeight += w;
            } else {
                dayUsed++;
                currentWeight = w;
            }
        }
        return dayUsed <= days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        int ans;
        while (low <= high) {
            int mid=low+(high-low)/2;
            if(canship(mid,weights,days)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};