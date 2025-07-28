#include <iostream>
#include<vector>
#include<map>
std::vector<int> twoSumfunction(std::vector<int>& nums, int target) {
    std::map<int, int> mpp;
    for (int i = 0; i < nums.size(); ++i)
    {
        int a = nums[i];
        int more = target - a;
        if (mpp.find(more) != mpp.end())
        {
            return { mpp[more],i };
        }
        mpp[a] = i;
    }
    return{ -1,-1 };
}