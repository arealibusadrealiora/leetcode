#include <map>
#include <string>

using namespace std;

class Solution {
public:
    int romanToInt(string s) 
    {
        int integer = 0;
        map<char, int> roman = {{'I', 1},
                                {'V', 5},
                                {'X', 10},
                                {'L', 50},
                                {'C', 100},
                                {'D', 500},
                                {'M', 1000}};
         
        for (int i = 0; i < s.length(); i++)
        {
            if (roman[s[i]] >= roman[s[i + 1]])
            {
                integer += roman[s[i]];
            }
            else
            {
                integer -= roman[s[i]];
            }
        }

        return integer;
    }
};