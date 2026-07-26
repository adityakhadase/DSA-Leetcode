class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0=0;
        int c1=0;
        int c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                c0++;
            }
            else if(nums[i]==1){
                c1++;
            }
            else{c2++;}
        }
       
        for(int j=0;j<nums.size();j++){
            if(j<c0){
                nums[j]=0;
            }
            else if(j<(c1+c0)){
                nums[j]=1;
            }
            else{
                nums[j]=2;
            }
        }
    }
};