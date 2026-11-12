class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = nums.size()-1;
        vector<int> arr(n);
        int val;
        for(int i = n-1; i>=0; i--){
            if(abs(nums[low])<abs(nums[high])){
                val = nums[high];
                high--;
            }
            else{
                val = nums[low];
                low++;
            }
            arr[i] = val*val;
        }
        return arr;
    }
};