#include <vector>
#include <unordered_map>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_map<int, int> count;

        for (auto num : nums) {
            count[num]++;
            if (count[num] == 2)
                return true;
        }
        return false;
    }
    bool containsDuplicate1(std::vector<int>& nums) {
        std::unordered_set<int> seen;

        for (auto num : nums) {
            if (seen.count(num))
                return true;
            seen.insert(num);
        }
        return false;
    }
};