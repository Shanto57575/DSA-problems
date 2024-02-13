// print 1st subsequence which sum is equal to k;

#include <bits/stdc++.h>
using namespace std;

bool printSeq(int index, vector<int> v, int arr[], int n, int sum, int k)
{
    if (index >= n)
    {
        if (sum == k)
        {
            for (auto i : v)
                cout << i << " ";
            cout << endl;
            return true;
        }
        else
            return false;
    }

    v.push_back(arr[index]);
    sum += arr[index];
    if (printSeq(index + 1, v, arr, n, sum, k) == true)
    {
        return true;
    }
    v.pop_back();
    sum -= arr[index];
    if (printSeq(index + 1, v, arr, n, sum, k) == true)
    {
        return true;
    }

    return false;
}

int main()
{
    int n = 3;
    int arr[n] = {3, 1, 2};
    int k = 3;
    vector<int> v;
    printSeq(0, v, arr, n, 0, k);
}
