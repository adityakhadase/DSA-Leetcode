class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans;
        k=k%n;
        for(int i =n-k;i<(n*2)-k;i++){
            ans.push_back(nums[i%n]);
        }
        nums=ans;
    }
};