class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>res;
        int start = newInterval[0];
        int end = newInterval[1];
        bool inserted = false;

        for(auto &interval : intervals){
            if(interval[1]<start){//current element end ho raha jaha se newInterval start ho raha 
                res.push_back(interval);
            }
            else if(interval[0] > end){//current interval start ho raha jab new Interval end ho raha
                if(!inserted) {
                    res.push_back({start,end});//isiliye newinterval yaha insert hua 
                    inserted = true;
                }
                res.push_back(interval);
            }
            else{
                start = min(start , interval[0]);
                end = max(end, interval[1]);
            }

        }
        if(!inserted) res.push_back({start,end});
        return res;
    }
};