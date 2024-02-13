#include <bits/stdc++.h>
using namespace std;

// print total number of subsequence which sum is equal to k;

int printSeq(int index, int arr[], int n, int sum, int k)
{
    if (index >= n)
    {
        if (sum == k)
        {
            return 1;
        }
        else
            return 0;
    }

    sum += arr[index];
    int l = printSeq(index + 1, arr, n, sum, k) == true;

    sum -= arr[index];
    int r = printSeq(index + 1, arr, n, sum, k) == true;

    return l + r;
}

int main()
{
    int n = 3;
    int arr[n] = {3, 1, 2};
    int k = 3;
    cout << printSeq(0, arr, n, 0, k) << endl;
}
