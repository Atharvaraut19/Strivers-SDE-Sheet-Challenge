#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
   
  
  int cnt = 0;
  int coins[] = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
  int n = 9;
  
  for (int i = n - 1; i >= 0; i--) {
    while (amount >= coins[i]) {
        amount =amount - coins[i];
        cnt++;
    }
  }
  return cnt;
}
