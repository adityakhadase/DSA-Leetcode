class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> mmp;
        int i = nums2.size() - 1;
        while (i > -1) {
            while (!st.empty() && st.top() <= nums2[i]) {
                st.pop();
            }

            if (st.empty()) {
                mmp[nums2[i]] = -1;
            } else {
                mmp[nums2[i]] = st.top();
            }
            st.push(nums2[i]);
            i--;
        }
        vector<int> ans;

        for (int x : nums1) {
            ans.push_back(mmp[x]);
        }

        return ans;
    }
};