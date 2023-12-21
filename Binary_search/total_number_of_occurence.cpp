//https://www.codingninjas.com/studio/problems/occurrence-of-x-in-a-sorted-array_630456?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

int count(vector<int>& a, int n, int target) {

        int low = 0;
        int high = n - 1;
        int first = -1;
        int last = -1;

        while(low<=high)
        {
           int mid = (low + high) / 2;
           
           if(a[mid] == target)
           {
              first = mid;
              high = mid - 1; 
           }
           else if(a[mid] < target)
           {
               low = mid + 1;
           }
           else high = mid - 1; 
        }

        low = 0;
        high = n - 1;

        while(low<=high)
        {
           int mid = (low + high) / 2;
           
           if(a[mid] == target)
           {
              last = mid;
              low = mid + 1;
           }
           else if(a[mid] < target)
           {
               low = mid + 1;
           }
           else high = mid - 1; 
        }
        
		if(first==-1)return 0;
        return last - first + 1;
}
