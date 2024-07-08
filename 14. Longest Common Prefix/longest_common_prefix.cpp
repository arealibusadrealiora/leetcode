#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = "";
        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size() - 1];

        for (int i = 0; i < first.size(); i++)
        {
            if (first[i] == last[i])
            {
                prefix += first[i];
            }
            else
            {
                break;
            }
        }
        
        return prefix;
    }
};