/*==============================================================================
*   
* File  :LeetCode121.cpp
* Desc. :
*   
* Author: liyanan
* Date  : 2017.12.24
* Email : *********
============================================================================*/

#include <iostream>
#include <vector>
using std;



class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;
        int n = prices.size();

        for (int i = 0; i < n; i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            } else if (prices[i] - minPrice > maxProfit) {
                maxProfit = prices[i] - minPrice;
            }
        }
        return maxProfit;
    }
};
