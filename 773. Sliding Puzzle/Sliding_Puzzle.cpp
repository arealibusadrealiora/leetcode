class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) 
    {
        string start = "";
        for (auto& row : board) 
        {
            for (auto num : row) 
            {
                start += to_string(num);
            }
        }
    
        string target = "123450";
        vector<vector<int>> moves = {{1, 3}, {0, 2, 4}, {1, 5}, {0, 4}, {1, 3, 5}, {2, 4}};

        queue<pair<string, int>> q;
        unordered_set<string> visited;

        q.push({start, 0});
        visited.insert(start);

        while (!q.empty()) 
        {
            auto [current, steps] = q.front();
            q.pop();

            if (current == target) return steps;

            int zeroPos = current.find('0');

            for (int move : moves[zeroPos]) 
            {
                string next = current;
                swap(next[zeroPos], next[move]);

                if (!visited.count(next)) 
                {
                    q.push({next, steps + 1});
                    visited.insert(next);
                }
            }
        }
    return -1;
    }
};