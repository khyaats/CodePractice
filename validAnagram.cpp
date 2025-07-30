#include<string>
#include<vector>

class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length())
            return false;

        std::vector<int> count(26);

        for (auto s1 : s)
            ++count[s1 - 'a'];

        for (auto t1 : t)
        {
            if (count[t1 - 'a'] == 0)
                return false;
            --count[t1 - 'a'];
        }

        return true;
    }
};