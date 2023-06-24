bool searchMatrix(vector<vector<int>>& mat, int target) 
{
int row = mat.size();
int col = mat[0].size();
for(int i = 0;i<row;i++)
{
    for(int j = 0;j<col;j++)
    {
        if(target == mat[i][j])
        {
            return true;
        }
    }
}
return false;  
}