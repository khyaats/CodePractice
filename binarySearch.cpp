#include<vector>

class Solution {
public:
    int search(std::vector<int>& nums, int target) {
        int index = 0;
        for (auto num : nums)
        {
            if (num == target)
                return index;
            index++;
        }
        return -1;
    }

    int searchBinary(std::vector<int>& nums, int target) {

        int left = 0, right = nums.size() - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[mid] > target)
                right = mid - 1;

            if (nums[mid] < target)
                left = mid + 1;

        }
        return -1;
    }
};
