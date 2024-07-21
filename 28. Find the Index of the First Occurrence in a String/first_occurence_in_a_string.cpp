#include <string>

using namespace std;

class Solution 
{
public:
    int strStr(string haystack, string needle) 
    {
        int pos = haystack.find(needle);
        return pos;
    }
};