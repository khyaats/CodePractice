#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> results;
        int i = 0, n = intervals.size();
        while (i < n && intervals[i][1] < newInterval[0])
        {
            results.push_back(intervals[i]);
            i++;
        }
        while (i < n && intervals[i][0] <= newInterval[1])
        {
            newInterval[0] = std::min(intervals[i][0], newInterval[0]);
            newInterval[1] = std::max(intervals[i][1], newInterval[1]);
            i++;
        }
        results.push_back(newInterval);
        while (i < n)
        {
            results.push_back(intervals[i]);
            i++;
        }
        return results;
    }
};