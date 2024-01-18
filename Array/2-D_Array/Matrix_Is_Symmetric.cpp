// https://www.codingninjas.com/studio/problems/matrix-is-symmetric_799361?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTabValue=PROBLEM

#include<bits/stdc++.h> 
bool isMatrixSymmetric(vector<vector<int>>matrix){

    int n = matrix.size();
    int m = matrix[0].size();

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<m; j++)
        {
           if(matrix[i][j] != matrix[j][i])
            return false;
        }
    }

    return true;
}
