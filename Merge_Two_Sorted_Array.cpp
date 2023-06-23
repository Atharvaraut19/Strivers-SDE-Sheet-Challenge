#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n)
{
	vector<int> ans;
	int c1 = 0;
	int c2 = 0;
	while(c1<m && c2<n)
	{
	if(arr1[c1]>=arr2[c2])
	{
		ans.push_back(arr2[c2]);
		c2++;
	}
	else 
	{
		ans.push_back(arr1[c1]);
		c1++;
	}
	}
	while(c1<m)
	{
	ans.push_back(arr1[c1]);
	c1++;
	}
	while(c2<n)
	{
	ans.push_back(arr2[c2]);
	c2++;
	}
	return ans;
}