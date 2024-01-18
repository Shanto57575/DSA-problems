// https://www.codingninjas.com/studio/problems/array-sum_893287?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&count=25&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
int coverageOfMatrix(vector<vector<int>> &a) {
    
    int sum = 0;
    int n = a.size();
    int m = a[0].size();

    for(int i=0; i<n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j]==0)
            {
                if(i-1>=0 && a[i-1][j]==1)sum++;
                if(j-1>=0 && a[i][j-1]==1)sum++;
                if(i+1<n && a[i+1][j]==1)sum++;
                if(j+1<m && a[i][j+1]==1)sum++;
            }
        }
    }

    return sum;
}

