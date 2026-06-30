class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_water = 0;
        
        while (left < right) {
          
            int current_width = right - left;
            int current_height = std::min(height[left], height[right]);
            int current_area = current_width * current_height;
            
            
            max_water = std::max(max_water, current_area);
            
            
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
        
        return max_water;
    }
};