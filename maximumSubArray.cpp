#include <vector>
#include <algorithm> // For std::max
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // Initialize max_so_far with the first element, as a single element can be the max subarray.
       // Or, initialize with INT_MIN if the array could be empty (though constraints usually prevent this).
        int max_so_far = nums[0];

        // Initialize current_max to store the maximum sum ending at the current position.
        int current_max = nums[0];

        // Iterate through the array starting from the second element.
        for (size_t i = 1; i < nums.size(); ++i) {
            // Calculate the maximum sum ending at the current position 'i'.
            // It's either the current element itself (starting a new subarray)
            // or the current element added to the previous current_max (extending the subarray).
            current_max = std::max(nums[i], current_max + nums[i]);

            // Update the overall maximum sum found so far.
            max_so_far = std::max(max_so_far, current_max);
        }

        return max_so_far;
    }
};