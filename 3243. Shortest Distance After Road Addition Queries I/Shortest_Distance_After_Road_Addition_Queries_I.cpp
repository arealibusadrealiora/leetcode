class Solution {
public:
    vector<int> shortestDistanceAfterQueries(int n, vector<vector<int>>& queries) 
    {
        vector<int> answer;
        vector<vector<int>> graph(n);
        for (int i = 0; i < n - 1; ++i) 
        {
            graph[i].push_back(i + 1);
        }

        for (auto& query : queries) 
        {
            int u = query[0], v = query[1];
            graph[u].push_back(v);
        
            vector<int> dist(n, -1);
            dist[0] = 0;
            queue<int> q;
            q.push(0);

            while (!q.empty()) 
            {
                int city = q.front();
                q.pop();
            
                for (int next_city : graph[city]) 
                {
                    if (dist[next_city] == -1) 
                    { 
                        dist[next_city] = dist[city] + 1;
                        q.push(next_city);
                    }
                }
            }
            answer.push_back(dist[n - 1]);
        }
    return answer;
    }
};