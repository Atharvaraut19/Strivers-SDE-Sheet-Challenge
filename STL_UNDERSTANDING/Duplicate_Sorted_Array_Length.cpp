/*#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	set <int> st;
	for(int i = 0;i<n;i++)
	{
		st.insert(arr[i]);
	}
	int index = 0;
	 for (auto itr : st)
  {
	  arr[index] = itr;
	  index++;
  }
  return index;
}
BRUTE fORCe
*/
//optimal

#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	int slow = 0;
	int fast ;
	for(fast= 1;fast<n;fast++)
	{
		if(arr[fast]!=arr[slow])
		{
			arr[slow+1]=arr[fast];
			slow++;
		}
	}
	return slow+1;
}