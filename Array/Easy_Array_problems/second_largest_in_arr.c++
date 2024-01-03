// https://www.codingninjas.com/studio/problems/second-largest-element-in-the-array_873375?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTabValue=PROBLEM&count=25&page=1&search=&sort_entity=order&sort_order=ASC

#include <bits/stdc++.h> 
int findSecondLargest(int n, vector<int> &a)
{
    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i=0; i<n; i++)
    {
      if(a[i] > largest)
      {
        secondLargest = largest;
        largest = a[i];
      }
      else if(a[i] > secondLargest && a[i]!=largest)
      {
        secondLargest = a[i];
      }
    }

    if(secondLargest==INT_MIN) return -1;
    return secondLargest;
}
