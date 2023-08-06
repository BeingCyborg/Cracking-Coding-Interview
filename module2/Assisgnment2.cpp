#include <iostream>
using namespace std;

int maxProfit(int prices[], int n)
{
    if (n == 0)
    {
        return 0;
    }

    int maxProfit = 0;
    int minPrice = prices[0];

    for (int i = 1; i < n; i++)
    {
        int potentialProfit = prices[i] - minPrice;

        if (potentialProfit > maxProfit)
        {
            maxProfit = potentialProfit;
        }

        if (prices[i] < minPrice)
        {
            minPrice = prices[i];
        }
    }

    return maxProfit; //Time Complexity: O(n)
}

int main()
{
    int n;
    cout << "Enter the number of days: ";
    cin >> n;

    int prices[n];
    cout << "Enter the stock prices for " << n << " days:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> prices[i];
    }

    int maxprofit = maxProfit(prices, n);
    cout << "Max Profit: " << maxprofit << endl; //Space Complexity: O(1)

    return 0;
}
