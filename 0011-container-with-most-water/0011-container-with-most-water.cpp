class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water = 0;
        int left = 0; 
        int right = height.size() - 1;

        while(left < right){
            int width = right - left;  
            int curr_height = min(height[left], height[right]);
            int curr_water = width * curr_height;
            max_water = max(max_water, curr_water);

            if(height[left] < height[right]){
                left++;

            } else {
                right--;
            }    
            }

            return max_water;

        }
        
    
};