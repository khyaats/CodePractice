#include<vector>

int maxProfit(std::vector<int>& prices) {
    int buy = INT_MAX, maxProfit = 0;

    for (auto price : prices)
    {
        if (buy > price)
            buy = price;
        maxProfit = (maxProfit < price - buy) ? price - buy : maxProfit;
    }
    return maxProfit;
}