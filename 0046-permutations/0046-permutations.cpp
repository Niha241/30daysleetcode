class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> t(nums.size());
        vector<bool> vis(nums.size(), false);

        auto dfs = [&](auto& self,  int i) -> void {
            if (i == nums.size()){
                ans.emplace_back(t);
                return;
            }
            for(int j = 0; j < nums.size(); j++){
                if(!vis[j]) {
                    vis[j] = true;
                    t[i] = nums[j];
                    self(self, i + 1);
                    vis[j] = false;
                }
            }
        };

        dfs(dfs,0);
        return ans;
        
    }
};