#include <vector>
class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        int n = nums.size();
        std::vector<int> result(n); // Initialize result array of the same size

        int left = 0;       // Pointer for the beginning of the input array
        int right = n - 1;  // Pointer for the end of the input array
        int k = n - 1;      // Pointer for placing elements in the result array (from end to beginning)

        while (left <= right) {
            int square_left = nums[left] * nums[left];
            int square_right = nums[right] * nums[right];

            if (square_left > square_right) {
                result[k] = square_left;
                left++;
            }
            else {
                result[k] = square_right;
                right--;
            }
            k--; // Move to the next position in the result array
        }
        return result;
    }
};