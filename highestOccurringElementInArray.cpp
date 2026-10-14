#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int mostFreqEle(vector<int> &arr)
    {
        
        map<int, int> mp;
        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        int maxi = INT_MIN;
        int el = 0;

        for (auto it : mp)
        {
            if (it.second > maxi)
            {
                maxi = it.second;
                el = it.first;
            }
            else if (it.second == maxi)
            {
                el = max(it.first, el);
            }
        }
        return el;
    }
};