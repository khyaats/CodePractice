// The API isBadVersion is defined for you.
// bool isBadVersion(int version);
int bad = 4;  // To test it locally

bool isBadVersion(int version) {
    return version >= bad;
}

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, mid = 0;
        int high = n;
        while (low < high)
        {
            mid = low + (high - low) / 2;
            if (isBadVersion(mid))
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};