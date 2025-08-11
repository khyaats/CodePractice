#include <vector>
#include <algorithm>
    
class Solution {
public:
    bool canAttendMeetings(std::vector<std::vector<int>>& intervals) {
        std::sort(intervals.begin(), intervals.end(),
            [](const std::vector<int>& a, const std::vector<int>& b) { return a[0] < b[0]; });
        for (int i = 1; i < (int)intervals.size(); ++i)
            if (intervals[i][0] < intervals[i - 1][1]) return false; // overlap
        return true;
    }
};