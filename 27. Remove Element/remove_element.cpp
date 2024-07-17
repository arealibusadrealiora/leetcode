#include <vector>
#include <algorithm>

using namespace std;

class Solution 
{
public:
    int removeElement(vector<int>& nums, int val) 
    {
        auto removed = std::remove(nums.begin(), nums.end(), val);
        nums.erase(removed, nums.end());
        return nums.size();
    }
};

//This shit beats runtime, but sucks in memory usage, lol. But it's quite short so I'm satisfied.