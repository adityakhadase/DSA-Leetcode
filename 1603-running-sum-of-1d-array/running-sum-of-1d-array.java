class Solution {
    public int[] runningSum(int[] nums) {
        int size=nums.length;
        int sum=0;
        for(int i=0;i<size;i++){
            sum+=nums[i];
            nums[i]=sum;
        }
        return nums;
    }
}