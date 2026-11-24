class Solution {
public:
    int leftPos(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int res = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;//taki low aur high bada ho tabbhi program chale

            if (nums[mid] < target) {
                low = mid + 1;
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                res = mid;
                high = mid - 1; // keep searching left
            }
        }

        return res;
    }

    int rightPos(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int res = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] < target) {
                low = mid + 1;
            }
            else if (nums[mid] > target) {
                high = mid - 1;
            }
            else {
                res = mid;
                low = mid + 1; // keep searching right
            }
        }

        return res;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return {leftPos(nums, target), rightPos(nums, target)};
    }
};