#include<string>
#include<stack>

bool isValid(std::string s) {
    std::stack<char> valid;
    for (const char c : s)
    {
        if (c == '(')
            valid.push(')');
        else if (c == '{')
            valid.push('}');
        else if (c == '[')
            valid.push(']');
        else if (valid.empty() || valid.top() != c)
            return false;
        else
            valid.pop();
    }
    return valid.empty();

}