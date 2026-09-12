class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty() || matrix[0].empty())
        return false;

        int m = matrix.size();
        int n = matrix[0].size();

        int l = 0;
        int h = m * n -1;

        while(l <= h){
            int m = l + (h - l) / 2;

            int r = m / n;
            int c = m % n;

            if(matrix[r][c] == target){
                return true;
            } else if(matrix[r][c] < target){
                l = m + 1;

            } else {
                h = m - 1;
            }
        }
        return false;
    }
};