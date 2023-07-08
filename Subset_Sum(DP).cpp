// #include <bits/stdc++.h>
// int T[1002][1002];
// bool solve(int n, int k, vector<int> &arr)
// {
//     if(n==0)
//    {
//        return false;
//    }
//    if(k==0)
//    {
//      return true;  
//    }
//    if(T[n][k]!=-1)
//    {
//        return T[n][k];
//    }
//    if(k>=arr[n-1])
//    {
//        return T[n][k]=solve(n-1,k-arr[n-1],arr)||solve(n-1,k,arr);
//    }
//    else
//    {
//        return T[n][k]= solve(n-1,k,arr);
//    }

// }
// bool subsetSumToK(int n, int k, vector<int> &arr) {
//     memset(T,-1,sizeof(T));
//     bool value = solve(n,k,arr);
//     if(value)
//     {
//         return true;
//     }
//     else{
//         return false;
//     }
   
// }
#include <bits/stdc++.h> 
bool subsetSumToK(int n, int k, vector<int> &arr) {
    int T[n+1][k+1];
    for(int i = 0;i<n+1;i++)
    {
        for(int j = 0 ;j<k+1;j++)
        {
            if(i==0)
            {
                T[i][j]=false;
            }
            if(j==0)
            {
                T[i][j]=true;
            }
        }
    }
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=k;j++)
        {
            if(arr[i-1]<=j)
            {
                T[i][j] = T[i-1][j-arr[i-1]] ||  T[i-1][j];
            }
            else
            {
                T[i][j]=T[i-1][j];
            }
        }
    }
    
return T[n][k];
}