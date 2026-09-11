class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        
        for(char c : s) {
            if(!st.empty() && st.top().first == c) {
                // increment count
                st.top().second++;
                // if count reaches k, pop
                if(st.top().second == k) {
                    st.pop();
                }
            } else {
                st.push({c,1});
            }
        }
        
        // build result string
        string res;
        while(!st.empty()) {
            auto p = st.top();
            st.pop();
            res.append(p.second, p.first);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
