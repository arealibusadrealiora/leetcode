#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) 
    {
        string str = to_string(x);
        string rts = string(str.rbegin(), str.rend());
        return str == rts; 
    }
};