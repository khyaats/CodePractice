#include <vector>
#include <algorithm>
#include <queue>

class Solution {
public:
    int minMeetingRooms(std::vector<std::vector<int>>& intervals) {
        if (intervals.empty()) return 0;

        sort(intervals.begin(), intervals.end(),
            [](const auto& a, const auto& b) { return a[0] < b[0]; });

        std::priority_queue<int, std::vector<int>, std::greater<int>> pq; // end times
        int maxRooms = 0;

        for (auto& mtg : intervals) {
            if (!pq.empty() && mtg[0] >= pq.top()) pq.pop(); // reuse
            pq.push(mtg[1]);
            maxRooms = std::max(maxRooms, (int)pq.size());
        }
        return maxRooms;
    }
};