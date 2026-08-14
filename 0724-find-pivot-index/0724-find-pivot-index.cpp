class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int t_sum = accumulate(nums.begin(), nums.end(), 0);
        int l_sum = 0;
    
        int n = nums.size();
        
        for(int i = 0; i < n; i++){
            if(l_sum == t_sum - l_sum - nums[i]){
                return i;
            }
               
                l_sum += nums[i]++;

            
        }
        return - 1;
        
    }
};