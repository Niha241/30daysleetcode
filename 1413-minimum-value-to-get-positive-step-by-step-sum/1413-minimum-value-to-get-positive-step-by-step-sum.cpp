class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int prefix_sum = 0;
        int min_sum = 0;

        for(int num : nums){
            prefix_sum += num;
            min_sum = min(min_sum, prefix_sum);
        }

        return 1 - min_sum;

        
    }
};