class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mmp;
        for(int i=0;i<nums.size();i++){
            int need=target-nums[i];
            if(mmp.find(need) != mmp.end()){
                return {mmp[need],i};
            }
            else{
                mmp[nums[i]]=i;
            }
        }
        return {};
        
    }
};