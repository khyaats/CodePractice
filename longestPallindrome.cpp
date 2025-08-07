#include <string>
#include <unordered_map>

class Solution {
public:
    int longestPalindrome(std::string s) {
        std::unordered_map<char, int> characters;

        for (auto c : s)
            characters[c]++;

        int length = 0;
        bool odd = false;
        for (const auto& pair : characters) {
            length += (pair.second / 2) * 2;
            if (pair.second % 2 == 1)
                odd = true;
        }
        if (odd)
            length++;
        return length;
    }
};