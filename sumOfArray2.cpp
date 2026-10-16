#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int arraySum(vector<int> &nums)
    {
        if (nums.empty())
            return 0;
        int last = nums.back();
        nums.pop_back();
        return last + arraySum(nums);
    }
};