#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
//    long long sum =0;
//    long long maxsum = INT_MIN;
//     for (int i = 0;i<n;i++)
//     {
          
//           if(sum + arr[i]<0)
//           {
//               sum =0;
//           }
//           else
//           {
//          sum = max(sum + arr[i],arr[i]);
//           }
//           maxsum = max(maxsum, sum);
//         }
//     if(maxsum <0)
//     {
//         return 0;
//     } else {
//       return maxsum;
//     }
// }
     //solve 8/9 casese need to check where is it going wrong}
    long long maxi = LONG_MIN; // maximum sum
    long long sum = 0;

    if(sizeof(arr)==-1)
    {
        return 0;
    }

    for (int i = 0; i < n; i++) {

        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
        }

        // If sum < 0: discard the sum calculated
        if (sum < 0) {
            sum = 0;
        }
    }

    // To consider the sum of the empty subarray
    // uncomment the following check:

    if (maxi < 0) maxi = 0;

    return maxi;
}