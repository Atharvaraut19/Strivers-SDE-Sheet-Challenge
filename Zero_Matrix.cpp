#include <bits/stdc++.h>
void setZeros(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        vector <int> dRow(row,-1);
        vector<int> dCol(col,-1);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    dRow[i] = 0;
                    dCol[j] = 0;
                }
            }
        }
         for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(dRow[i] == 0 || dCol[j] == 0 ){
                    matrix[i][j]=0;
                }
            }
        }
    }

// void setZeros(vector<vector<int>> &matrix)
// {
// int row[matrix.size()]={0};
// int col[matrix[0].size()]={0};
// for(int i = 0;i<matrix.size();i++)
// {
//   for (int j = 0; j <matrix[0].size(); j++) {
// 	  if(matrix[i][j]==0)
// 	  {
// 		  row[i]=1;
// 		  col[i]=1;
// 	  }
//   }
// }
// for(int i = 0;i<matrix.size();i++)
// {
//   for (int j = 0; j <matrix[0].size(); j++) {
//     if (row[i] == 1 || col[i] == 1) {
//       matrix[i][j] = 0;
//     }
//   }
// }
// }