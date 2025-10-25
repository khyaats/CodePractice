#include<vector>
class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        long long expectedSum = (long long)n * (n + 1) / 2; // Use long long to prevent overflow
        long long actualSum = 0;
        for (int num : nums) {
            actualSum += num;
        }
        return expectedSum - actualSum;
    }
};