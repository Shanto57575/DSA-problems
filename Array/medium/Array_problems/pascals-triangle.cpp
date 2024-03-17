// https://leetcode.com/problems/pascals-triangle/description/

// tc --> O(N^2)
// sc --> O(1)

class Solution {
private:
    vector<int> rowGenerator(int row){
        long long res = 1;
        vector<int> ansRow;
        ansRow.push_back(1);
        for(int col = 1; col < row; col++)
        {
            res = res * (row - col);
            res = res / col;
            ansRow.push_back(res);
        }
        return ansRow;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;

        for(int row=1; row<=numRows; row++)
        {
            ans.push_back(rowGenerator(row));
        }

        return ans;
    }
};
