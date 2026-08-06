class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if(s.empty()|| words.empty()) return result;

        int word_len = words[0].length();
        int num_words = words.size();
        int total_len = word_len * num_words;
       

        if(s.length() < total_len) return result;

        unordered_map<string, int> word_count;
        for(const string& w : words)
            word_count[w]++;
        

        for(int i = 0; i < word_len; ++i){
            int left = i, right = i;
            unordered_map<string, int> seen;
            int count = 0;

            while(right + word_len <= s.length()){
            string sub = s.substr(right, word_len);
            right += word_len;

            if(word_count.count(sub)){
                seen[sub]++;
                count++;

                while(seen[sub] > word_count[sub]){
                    string left_sub = s.substr(left, word_len);
                    seen[left_sub]--;
                    left += word_len;
                    count--;
                }
                if(count == num_words){
                    result.push_back(left);
                }
                
            } else {
                seen.clear();
                count = 0;
                left = right;
            }
        }
        
        }
        
    
    return result;
 }
};