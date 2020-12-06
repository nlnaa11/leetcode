
// test

#include <iostream>
#include <vector>

int maxProfit(std::vector<int>& prices);

int main()
{
    std::vector<int> prices{7}; // 7 days = a week

    prices = {7, 1, 5, 3, 6, 4};
    std::cout << "5 - 1 + 6 - 3 = " << maxProfit(prices) << '\n';

    prices = {1, 2, 3, 4, 5};
    std::cout << "5 - 1 = " << maxProfit(prices) << '\n';

    prices = {7, 6, 5, 3, 2, 1};
    std::cout << "0 = " << maxProfit(prices) << '\n';
}
