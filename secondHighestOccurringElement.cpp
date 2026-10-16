#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int secondMostFrequentElement(vector<int> &nums)
    {
        map<int, int> mp;

        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        int maxi = INT_MIN;
        int maxel = 0;

        int smaxi = INT_MIN;
        int smaxel = -1;

        for (auto it : mp)
        {
            if (it.second > maxi)
            {
                smaxi = maxi;
                maxi = it.second;

                smaxel = maxel;
                maxel = it.first;
            }
            else if (it.second < maxi && it.second > smaxi)
            {
                smaxi = it.second;
                smaxel = it.first;
            }
        }
        if (smaxi == INT_MIN)
            return -1;
        return smaxel;
    }
};