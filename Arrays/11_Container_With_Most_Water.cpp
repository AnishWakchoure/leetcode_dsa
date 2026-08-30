class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;

        int max_water = 0;
        while (left<right){
            int level = min(height[left], height[right]);
            int curr_water = level * (right-left);
            max_water = max(max_water, curr_water);
            if (height[left]<=height[right]) left++;
            else right--;
        }
        return max_water;
    }
};

