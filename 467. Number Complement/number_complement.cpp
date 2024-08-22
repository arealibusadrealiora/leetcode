#include <cmath>

class Solution 
{
public:
    int findComplement(int num) 
    {
        if (num == 0) return 1;
        unsigned int bits = log2(num) + 1;
        unsigned int mask = (1u << bits) - 1; //unsigned coz we'll receive an overflow otherwise, lol
        return num^mask;
    }
};