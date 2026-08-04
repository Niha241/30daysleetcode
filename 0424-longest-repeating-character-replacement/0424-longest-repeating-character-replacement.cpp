class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> cnt(26,0);
        int l = 0, max_cnt = 0, max_len = 0;

        for(int r = 0; r < s.length(); ++r){
            cnt[s[r]-'A']++;

            max_cnt = max(max_cnt, cnt[s[r]-'A']);

            if((r - l +1) -max_cnt > k){
                cnt[s[l]-'A']--;
                l++;
            } 

            max_len = max(max_len, r - l + 1);
        }

        return max_len;
        
    }
};