class Solution {
public:
    int findChampion(int n, vector<vector<int>>& edges) 
    {
        vector<int> inDegree(n, 0);
        unordered_map<int, vector<int>> graph;

        for (const auto& edge : edges) 
        {
            int u = edge[0];
            int v = edge[1];

            graph[u].push_back(v);
            inDegree[v]++;
        }

        vector<int> candidates;
        for (int i = 0; i < n; ++i) 
        {
            if (inDegree[i] == 0) 
            {
                candidates.push_back(i);
            }
        }

        if (candidates.size() != 1) 
        {
            return -1;
        }

        return candidates[0];
    }
};