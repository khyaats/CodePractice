#include <string>
#include <unordered_map>

class Solution {
public:
    int romanToInt(std::string s) {
        std::unordered_map<char, int> roman;
        roman['I'] = 1;
        roman['V'] = 5;
        roman['X'] = 10;
        roman['L'] = 50;
        roman['C'] = 100;
        roman['D'] = 500;
        roman['M'] = 1000;

        int total = 0;
        for (size_t i = 0; i < s.size(); i++) {
            if (i + 1 < s.size() && roman[s[i]] < roman[s[i + 1]])
                total -= roman[s[i]];
            else
                total += roman[s[i]];
        }
        return total;
    }
};