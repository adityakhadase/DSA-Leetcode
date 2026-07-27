class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mx1=nums[0];
        int mx2=0;
        for(int i=1;i<nums.size();i++){
            int m1=mx1;
            mx1=max(mx1,nums[i]);
            mx2=max(mx2,min(m1,nums[i]));
        }
        return (mx1-1)*(mx2-1);
    }
};