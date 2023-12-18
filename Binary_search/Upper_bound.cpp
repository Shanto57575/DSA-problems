// https://www.codingninjas.com/studio/problems/implement-upper-bound_8165383?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

int upperBound(vector<int> &arr, int x, int n){

	int ans = n;
	int low = 0;
	int high = n-1;

	while(low<=high)
	{
		int mid = (low + high) / 2;
		
        if(arr[mid] > x)
		{
			ans = mid;
			high = mid - 1;
		}
		else 
		{
			low = mid + 1;
		}
	}

	return ans;
}
