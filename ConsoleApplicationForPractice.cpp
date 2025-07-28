//Practice Problems here.
#include <iostream>
#include<vector>
#include<map>
int main()
{
    std::cout << "Hello World\n" << std::endl;

}

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    std::map<int, int> mpp;
    for (std::vector<int>::iterator i = nums.begin(); i < nums.end(); ++i)
    {
        int a = *i;
        int more = target - a;
        if (mpp.find(more) != mpp.end())
        {
            return { mpp[more],*i };
        }
        mpp[a] = *i;
    }
    return{ -1,-1 };
}