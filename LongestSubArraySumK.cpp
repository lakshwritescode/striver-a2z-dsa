#include<bits/stdc++.h>
using namespace std;

int OptimallongestSubarrayWithSumK(vector<int> a, long long k)
{
#include <bits/stdc++.h>

    int left = 0;
    int right = 0;
    long long sum = a[0];

    int maxLen = 0;
    int n = a.size();

    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }

        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
            sum += a[right];
    }
    return maxLen;
}
int longestSubarrayWithSumK(vector<int> a, long long k) //better solution
{
    map<long long, int> preSumMap;

    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += a[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }

        long long rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if (preSumMap.find(sum) == preSumMap.end())
        {
            preSumMap[sum] = i;
        }
    }
    return maxLen;
}

// im sorry if youre reading this but i just wanted to make a contribution lmao ,  i was dead exhausted today 