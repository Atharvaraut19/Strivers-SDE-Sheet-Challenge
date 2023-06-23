#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    
    int dip =-1;
    for(int i = n-2;i>=0;i--)
    {
        if(permutation[i]<permutation[i+1])
        {
            dip = i;
            break;
        }
    }
    if(dip == -1)
    {
        reverse(permutation.begin(),permutation.end());
        return permutation;
    }
    for(int i = n-1;i>=0;i--)
    {
        if(permutation[i]>permutation[dip])
        {
            int temp = permutation[i] ;
            permutation[i] = permutation[dip];
            permutation[dip] = temp;
            break;
        }
    }
    reverse(permutation.begin()+dip+1 ,permutation.end());
    return permutation;

} 