class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int maxa=0;
        while(left<right){
            int area=(right-left)*(min(height[left],height[right]));
            maxa=max(maxa,area);
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return maxa;
    }
};