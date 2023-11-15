//problem : https://www.codingninjas.com/studio/problems/left-rotate-an-array-by-one_5026278?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

#include <bits/stdc++.h> 
vector<int> rotateArray(vector<int>& a, int n) {
    int last = a[0];
    for(int i=0; i<n-1; i++){
        a[i] = a[i+1];
    }
    a[n-1] = last;
    return a;
}
