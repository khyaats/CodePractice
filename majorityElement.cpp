#include <vector>
#include <unordered_map>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        std::unordered_map<int, int> countOfElements;
        int temp = 0, totalSize = nums.size();
        for (auto num : nums) {
            countOfElements[num]++;
            temp = countOfElements[num];
            if (temp * 2 > totalSize)
                return num;
        }
        return -1;
    }

    int majorityElement1(std::vector<int>& nums) {

        int count = 0, candidate = 0;
        for (auto num : nums)
        {
            if (count == 0)
                candidate = num;
            count += (num == candidate) ? 1 : -1;
        }
        return candidate;
    }
};
  