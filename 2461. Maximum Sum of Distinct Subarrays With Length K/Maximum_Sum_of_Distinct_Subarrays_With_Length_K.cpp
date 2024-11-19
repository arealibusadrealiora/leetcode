class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) 
    {
        unordered_map<int, int> freq;
        long long sum = 0, temp = 0;

        for (int i = 0; i < nums.size(); ++i) 
        {
            freq[nums[i]]++;
            sum += nums[i];

            if (i >= k) 
            {
                freq[nums[i - k]]--;
                if (freq[nums[i - k]] == 0) 
                {
                    freq.erase(nums[i - k]);
                }
                sum -= nums[i - k];
            }

            if (freq.size() == k) 
            {
                temp = max(temp, sum);
            }
        }
        return temp;
    }
};
