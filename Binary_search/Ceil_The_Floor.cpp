// https://www.codingninjas.com/studio/problems/ceiling-in-a-sorted-array_1825401?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

//Brute Force solution using linear search

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
    pair<int,int> ans = {-1, INT_MAX};

	for(int i=0; i<n; i++)
	{
	  if(a[i]<=x && a[i]>ans.first)
	  {
		  ans.first = a[i];
	  }
	  if(a[i]>=x && a[i]<ans.second)
	  {
		  ans.second = a[i];
	  }
	}

	if(ans.second==INT_MAX) ans.second = -1;
    
	return ans;
}

// Brute force 2

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {

	int mini = 0;
	int maxi = 0;

    for(int i=0; i<n; i++)
	{
		if(a[i]<x)
		{
			mini = a[i];
		}
		if(a[i]==x){
			mini = a[i];
			break;
		}
	}

    for(int i=0; i<n; i++)
	{
		if(a[i]>=x)
		{
		   	maxi = a[i];
			break;
		}
	}

	if(mini==0)mini = -1;
	if(maxi==0)maxi = -1;

	return {mini, maxi};
}

// optimal solution using Binary search

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
    
	int l = 0;
	int h = n - 1;
	int floor = -1;

	while(l<=h)
	{
	  int mid = l + (h-l)/2;
	  if(a[mid]<=x)
	  {
		floor = a[mid];
	    l = mid + 1;
	  }
	  else
	  {
	    h = mid - 1;
	  }
	}

	l = 0;
	h = n - 1;
    int ceil = -1;

	while(l<=h)
	{
	  int mid = l + (h-l)/2;
	  if(a[mid] >= x)
	  {
		 ceil = a[mid];
	     h = mid - 1;
	  }
	  else
	  {
	     l = mid + 1;
	  }
	}

	return {floor, ceil};
}

