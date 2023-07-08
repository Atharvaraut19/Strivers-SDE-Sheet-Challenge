#include <bits/stdc++.h>
int T[1002][1002];
bool solve(int n, int k, vector<int> &arr)
{
    if(n==0)
   {
       return false;
   }
   if(k==0)
   {
     return true;  
   }
   if(T[n][k]!=-1)
   {
       return T[n][k];
   }
   if(k>=arr[n-1])
   {
       return T[n][k]=solve(n-1,k-arr[n-1],arr)||solve(n-1,k,arr);
   }
   else
   {
       return T[n][k]= solve(n-1,k,arr);
   }

}
bool subsetSumToK(int n, int k, vector<int> &arr) {
    memset(T,-1,sizeof(T));
    bool value = solve(n,k,arr);
    if(value)
    {
        return true;
    }
    else{
        return false;
    }
   
}