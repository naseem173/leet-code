#include <bits/stdc++.h>
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        map<int, int> map;

        // Fill HM
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]] = i;
        }

        // Search HM
        for (int i = 0; i < nums.size(); i++)
        {

            int num = nums[i];
            int rem = target - num;

            // checking if it exists and it not duplicate

            auto wo = map.find(rem);
            if (wo != map.end() && wo->second != i)
            {
                return {i, wo->second};
            }
        }
        return {};
    }
};