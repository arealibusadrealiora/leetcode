//A version without converting to string

class Solution {
public:
    bool isPalindrome(int x) 
    {
        int str = x;
        long rts = 0;
        
        if (x < 0)
        {
            return false;
        }
        else
        {
            while (x != 0) 
            {
                int i = x % 10;
                rts = rts * 10 + i;
                x /= 10;
            }
            return str == rts;
        }
    }
};