class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int low = 0;
        int high = n-1;
        int maxWater = 0;

        while(low<high){
            
            int width = high-low;
            int lamba = min(height[low],height[high]);
            int area = width * lamba;
            maxWater = max(maxWater,area);
            if(height[low]<height[high]) low++; //hum pointer ko compare kar rahe the naki height ki value ko
            else high--;
            
            
        }
        return maxWater;
    }
};