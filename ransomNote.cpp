#include <string>
#include <unordered_map>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::unordered_map<char, int> freq;

        for (auto c : magazine)
            freq[c]++;

        for (auto c : ransomNote) {
            if (freq[c] == 0)
                return false;
            freq[c]--;
        }
        return true;
    }
};