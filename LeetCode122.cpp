/*==============================================================================
*   
* File  :LeetCode122.cpp
* Desc. :
*   
* Author: liyanan0904
* Date  : 2017.12.24
* Email : **********
============================================================================*/


#include<iostream>
#include<vector>
using std;


class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int res = 0, n = prices.size();
        for (int i = 0; i < n-1; i++) {
            if (prices[i] < prices[i+1]) {
                res += prices[i + 1] - prices[i];
            }
        }
        return res;
    }
};
