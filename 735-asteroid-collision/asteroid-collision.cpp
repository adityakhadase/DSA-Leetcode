class Solution {
public:
    vector<int> asteroidCollision(vector<int>& as) {
        stack<int> st;
        vector<int> ans;
        for (int i = 0; i < as.size(); i++) {
            while(!st.empty()&&st.top()>0&&as[i]<0&&abs(st.top())<abs(as[i])){
                st.pop();
            }
            if(st.empty()){
                st.push(as[i]);
            }
            else if(((st.top()+as[i])==0)&&st.top()>0){
                st.pop();
                continue;
            }
            else if((abs(st.top())>abs(as[i]))&&(st.top()>0&&as[i]<0)){
            }
            else{
                st.push(as[i]);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};