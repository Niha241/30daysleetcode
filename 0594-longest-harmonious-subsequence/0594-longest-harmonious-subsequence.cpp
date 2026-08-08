class Solution {
public:
    int findLHS(vector<int>& nums) {
       unordered_map<int, int> cnt_map;
       int max_len = 0;

       for(int num : nums){
        cnt_map[num]++;
       }

       for(const auto& [num, cnt] : cnt_map){
      ;
        if(cnt_map.count(num + 1)){
            max_len = max(max_len, cnt + cnt_map[num + 1]);
        }
       }
       return max_len;
        
    }
};