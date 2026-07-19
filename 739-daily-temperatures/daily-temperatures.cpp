class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        vector<int> ans(temperatures.size(), 0);
        int i = temperatures.size() - 1;
        while (i >= 0) {

            while (!st.empty() && temperatures[st.top()] <= temperatures[i]) {
                st.pop();
            }
            if (st.empty()) {
                st.push(i);
                ans[i] = 0;
                i--;
            } else if (temperatures[i] < temperatures[st.top()]) {
                ans[i] = st.top() - i;
                st.push(i);
                i--;
            }
        }
        return ans;
    }
};