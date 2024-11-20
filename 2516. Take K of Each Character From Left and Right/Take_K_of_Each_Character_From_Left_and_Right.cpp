class Solution {
public:
    int takeCharacters(string s, int k) 
    {
        int countA = 0, countB = 0, countC = 0;
        for (char c : s) 
        {
            if (c == 'a') countA++;
            else if (c == 'b') countB++;
            else if (c == 'c') countC++;
        }

        if (countA < k || countB < k || countC < k) return -1;

        int n = s.size();
        int maxWindow = 0; 
        
        int currA = 0, currB = 0, currC = 0;
        int left = 0;
        
        for (int right = 0; right < n; ++right) 
        {
            if (s[right] == 'a') currA++;
            else if (s[right] == 'b') currB++;
            else if (s[right] == 'c') currC++;
            
            while (currA > countA - k || currB > countB - k || currC > countC - k) 
            {
                if (s[left] == 'a') currA--;
                else if (s[left] == 'b') currB--;
                else if (s[left] == 'c') currC--;
                left++;
            }
            maxWindow = max(maxWindow, right - left + 1);
        }
        return n - maxWindow;
    }
};