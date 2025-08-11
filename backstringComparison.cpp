#include <string>

class Solution {
public:
    bool backspaceCompare(std::string s, std::string t) {
        std::string s1, t1;
        for (auto c : s)
        {
            if (c == '#')
            {
                if (!s1.empty())
                    s1.pop_back();
            }

            else
                s1.push_back(c);
        }
        for (auto c1 : t)
        {
            if (c1 == '#')
            {
                if (!t1.empty())
                    t1.pop_back();
            }
            else
                t1.push_back(c1);
        }
        return s1 == t1;
    }
};