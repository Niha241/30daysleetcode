class Solution {
public:
    int maxScore(string s) {
        int t_ones = 0;

        for(char c : s){
            if(c == '1'){
                t_ones++;
            }
        }

        int max_score = 0; 
        int l_zeros = 0;
        int r_ones = t_ones;

        for(int i = 0; i < s.length() - 1; i++){
            if(s[i] == '0'){
                l_zeros++;
            } else {
                r_ones--;
            }

            max_score = max(max_score, l_zeros + r_ones);
        }

        return max_score;
        
    }
};