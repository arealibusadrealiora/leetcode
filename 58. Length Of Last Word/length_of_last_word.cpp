#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        std::istringstream stream(s);
        std::string word;
        std::string last;

        while (stream >> word) 
        {
        last = word;
        }

        return last.length();
    }
};