class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) 
    {
        int n = matrix.size();
        long long sum = 0;
        int minAbs = INT_MAX;
        int negatives = 0;

        for (int i = 0; i < n; ++i) 
        {
            for (int j = 0; j < n; ++j) 
            {
                sum += abs(matrix[i][j]);
                minAbs = min(minAbs, abs(matrix[i][j]));
                if (matrix[i][j] < 0) negatives++;
            }
        }

        if (negatives % 2 == 0) 
        {
            return sum;
        } 
        else 
        {
            return sum - 2 * minAbs;
        }
    }
};