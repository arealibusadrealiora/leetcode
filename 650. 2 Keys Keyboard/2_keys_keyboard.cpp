class Solution {
public:
    int minSteps(int n) {
        if (n == 1)
        {
            return 0;
        }

    vector<int> vec(n+1, INT_MAX);
    vec[1] = 0;

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j < i; j++) {
            if (i % j == 0) {
                vec[i] = min(vec[i], vec[j] + i / j);
            }
        }
    }

    return vec[n];
    }
};