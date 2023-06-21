/*#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
  int num = 0;
  int cnt = -1;
	for (int i = 0; i < n; i++) {
        //Count the occurrences:
        
        for (int j =i+1; j <n; j++) 
        {
          if (arr[j] == arr[i]) {
            num = arr[i];
            cnt = 1;
            break;
          }
        }
          if (cnt == 1) {
            break;
          }
  }
        return num;
}
-> Brute Force 

Below Optimized Way
*/
#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
int freq[n + 1] = {0};
  for (int i = 0; i < n; i++) {
    if (freq[arr[i]] == 0) {
      freq[arr[i]] += 1;
    } else {
      return arr[i];
    }
  }
}