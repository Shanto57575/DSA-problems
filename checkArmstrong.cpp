//problem : https://www.codingninjas.com/studio/problems/check-armstrong_589?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

#include <bits/stdc++.h>
bool checkArmstrong(int n){
	
	int storeN = n;
	string m = to_string(n);
	int size = m.size();
	long long int sum = 0,x = 0;

	while(storeN!=0){
      x += pow(storeN%10, size);
	  if(x>n)return false;
	  storeN/=10;
	}
	if(x==n)return true;
	return false;
}
