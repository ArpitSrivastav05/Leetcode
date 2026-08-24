class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int start = newInterval[0], end = newInterval[1];
        bool inserted = false;

        for(auto &interval : intervals){
            if(interval[1] < start){
                // current interval ends before newInterval starts
                res.push_back(interval);
            }
            else if(interval[0] > end){
                // current interval starts after newInterval ends
                if(!inserted){
                    res.push_back({start,end});
                    inserted = true;
                }
                res.push_back(interval);
            }
            else{
                // overlap → merge
                start = min(start, interval[0]);
                end = max(end, interval[1]);
            }
        }

        if(!inserted){
            res.push_back({start,end});
        }

        return res;
    }
};
