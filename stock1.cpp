#include <iostream>
#include <vector>
#include <algorithm>

int maximumProfit(std::vector<int> &prices){
    int mini=prices[0];
    int maxProfit=0;
    int n=prices.size();
    for(int i=0;i<n;i++){
        int cost=prices[i]-mini;
        maxProfit=std::max(maxProfit,cost);
        mini=std::min(mini,prices[i]);
    }
    return maxProfit;
}

int main() {
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};
    int profit = maximumProfit(prices);
    std::cout << "Maximum profit: " << profit << std::endl;
    return 0;
}
