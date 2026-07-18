class Solution {
public:
    int findGCD(vector<int>& nums) {
        int maxn=nums[0];
        int minn=nums[0];
        for(int i=0;i<nums.size();i++){
            maxn=max(nums[i],maxn);
            minn=min(nums[i],minn);
        }
        return gcd(minn,maxn);
    }
};