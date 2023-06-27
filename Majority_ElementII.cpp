
#include <bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	 unordered_map<int,int> mp;
        vector<int> ans;
        for(int i=0; i<v.size();i++){
            mp[v[i]]++;
        }

       for(auto it:mp){
           if(it.second>(v.size())/3){
               ans.push_back(it.first);
           }
       }
	   sort(ans.begin(),ans.end());
        return ans;
        
    }
