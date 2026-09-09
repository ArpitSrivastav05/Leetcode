class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int ans = nums[0];

        for(int i = 1; i < nums.size();i++){
            int c1 = nums[i];
            int c2 = maxSum + nums[i];
            
            maxSum = max(c1,c2);
            ans = max(ans,maxSum);
        }
        return ans;
    }
};