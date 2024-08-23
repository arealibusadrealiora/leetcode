class Solution 
{
public:
    int mySqrt(int x) {
    double left = 0;
    double right = static_cast<double>(x) + 1;
    for (int i = 0; i < 100; i++) 
    {
        double middle = (left + right) / 2;
        if (middle * middle < x) 
        {
            left = middle;
        } 
        else
        {
            right = middle;
        }
    }
    return right;
    }
};