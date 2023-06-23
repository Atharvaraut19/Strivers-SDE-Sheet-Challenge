vector <int> GenerateRow(int r)
{
    long long ans = 1;
    vector<int> ansrow;
    ansrow.push_back(1);
    for(int i = 1;i<r;i++)
    {
        ans = ans*(r-i);
        ans = ans/(i);
        ansrow.push_back(ans);
    }
    return ansrow;
}
vector<vector<int>> pascalTriangle(int N) {

vector<vector<int>> ans;

for(int i = 1;i<=N;i++)
{
    ans.push_back(GenerateRow(i));
}
return ans;
}