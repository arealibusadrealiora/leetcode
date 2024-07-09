#include <string>
#include <stack>

using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        
        if(s.size() == 0)
        {
            return false;
        }

        for (int i = 0; i<s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stack.push(s[i]);
            }
            else if ((s[i] == ')' && !stack.empty() && stack.top()=='(') || 
                     (s[i] == ']' && !stack.empty() && stack.top()=='[') || 
                     (s[i] == '}' && !stack.empty() && stack.top()=='{'))
            {
                stack.pop();
            }
            else
            {
                return false;
            }
        }

        if (stack.empty())
        {
            return true;
        }
        
        return false;
    }
};