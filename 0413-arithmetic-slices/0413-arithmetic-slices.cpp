class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
     if( nums.size() < 3){
        return 0;

     }

     int total_slices = 0;
     int curr_slices = 0;

     for(int i = 2; i < nums.size(); ++i){
        if(nums[i] - nums[i-1] == nums[i-1] - nums[i-2]){
            curr_slices += 1;
            total_slices +=  curr_slices;

        } else {
             curr_slices = 0;
        }
     }
        return  total_slices;
        
    }
};