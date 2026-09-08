class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n = temp.size();
        vector<int> res(n, 0);
        stack<int> st; // stores indices

        for(int i = 0; i < n; i++) {
            while(!st.empty() && temp[i] > temp[st.top()]) {
                int idx = st.top();
                st.pop();
                res[idx] = i - idx; // number of days until warmer temp
            }
            st.push(i);
        }
        return res;
    }
};
