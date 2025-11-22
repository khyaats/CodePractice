#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // max-heap: store (distance, point)
        priority_queue<pair<long long, pair<int, int>>> maxHeap;

        for (auto& p : points) {
            long long dist = (long long)p[0] * p[0] + (long long)p[1] * p[1];
            maxHeap.push({ dist, {p[0], p[1]} });

            // If heap grows beyond k, remove farthest point
            if ((int)maxHeap.size() > k)
                maxHeap.pop();
        }

        // Extract results
        vector<vector<int>> result;
        while (!maxHeap.empty()) {
            auto point = maxHeap.top().second;  // get the point (x, y)
            result.push_back({ point.first, point.second });
            maxHeap.pop();
        }


        return result;
    }
};