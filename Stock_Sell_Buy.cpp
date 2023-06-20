#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int maxPro = 0;
    int n = prices.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) 
        {
          if (prices[j] > prices[i]) {
            maxPro = max(prices[j] - prices[i], maxPro);
          }
        }
    }
    return maxPro;
}