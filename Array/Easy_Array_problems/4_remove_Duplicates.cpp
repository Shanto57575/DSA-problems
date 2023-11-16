//problem : https://www.codingninjas.com/studio/problems/remove-duplicates-from-sorted-array_1102307?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

#include<bits/stdc++.h>
int removeDuplicates(vector<int> &arr, int n) {
	int cnt = 0;
	for(int i=0; i<n-1; i++){
		if(arr[i]==arr[i+1])cnt++;
	}
	return arr.size()-cnt;
}
