class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0;
        double sum=0;
        int left=0;
        int right=k;
        for(left;left<=k-1;left++){
            sum+=nums[left];
            avg=sum/k;
        }
        left=0;
        for(right;right<nums.size();right++){
            double oldavg=avg;
            sum=sum-nums[left]+nums[right];
            avg=sum/k;
            avg= max(oldavg,avg);
            left++;
        }
        return avg;
    }
};