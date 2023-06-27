void rec(int index,int sum,int n,vector<int> &num,vector<int> &subset)
{
  if(index==n)
  {
    subset.push_back(sum);
    return;
  }
  // accpet
  rec(index+1,sum+num[index],n,num,subset);

  rec(index+1,sum,n,num,subset);
}
vector<int> subsetSum(vector<int> &num){
  vector<int> subset;
  int n = num.size();
  rec(0,0,n,num,subset);
  sort(subset.begin(),subset.end());
  return subset;
}