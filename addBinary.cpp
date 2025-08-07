#include <string>
#include <algorithm>

class Solution {
public:
    std::string addBinary(std::string a, std::string b) {
        int aLength = a.length() - 1, bLength = b.length() - 1;
        std::string total;
        int carry = 0;
        while (aLength >= 0 || bLength >= 0 || carry) {
            int sum = carry;

            if (aLength >= 0)
                sum += a[aLength--] - '0';

            if (bLength >= 0)
                sum += b[bLength--] - '0';

            total += (sum % 2) + '0';
            carry = sum / 2;
        }
        std::reverse(total.begin(), total.end());
        return total;
    }
};