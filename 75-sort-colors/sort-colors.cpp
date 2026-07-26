class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        int m=0;
        int e=n-1;
        while(m<=e){
            if(0==nums[m]){
                swap(nums[s],nums[m]);
                s++;
                m++;
            }
            else if(1==nums[m]){
                m++;
            }
            else if(2==nums[m]){
                swap(nums[m],nums[e]);
                e--;
                
            }
        }
    }
};