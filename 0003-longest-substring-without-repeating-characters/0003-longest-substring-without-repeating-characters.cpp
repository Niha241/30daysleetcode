class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int l = 0, r = 0, max_len = 0;
       int  hash[128] = {0};
        while(r < s.size()){
           while(hash[s[r]] > 0){
            hash[s[l]]--;
            l++;
           }
           hash[s[r]]++;

           
                    max_len = max(max_len, r-l+1);
                    r++;
            }
        
        return max_len;
        
    }
};