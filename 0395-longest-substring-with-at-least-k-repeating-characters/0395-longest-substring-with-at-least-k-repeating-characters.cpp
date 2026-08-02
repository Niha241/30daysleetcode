class Solution {
public:
    int longestSubstring(string s, int k) {
       return helper(s,k);

        
    }

private:
        int helper(string s, int k){
            if((int)s.size() < k) 
            return 0;

            int cnt[26] = {0};
            for(char ch : s){
                cnt[ch - 'a']++;
            }

            for(char ch : s){
                if(cnt[ch-'a'] > 0 && cnt[ch - 'a'] < k){
                    int max_len = 0;
                    int start = 0;

                    for(int i = 0; i <= (int)s.size(); i++){
                        if(i == (int)s.size() || s[i] == ch){
                            string sub = s.substr(start, i-start);
                            max_len = max(max_len, helper(sub, k));
                            start = i + 1;
                        }
                    }
                    return max_len;
                }
            }

            return s.size();
        }
};