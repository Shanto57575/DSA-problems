#include <bits/stdc++.h>
using namespace std;

// print all the subsequence

void printSeq(int index, vector<int> v, int arr[], int n)
{
    if (index >= n)
    {
        for (auto i : v)
            cout << i << " ";
        cout << endl;
        return;
    }

    v.push_back(arr[index]);
    printSeq(index + 1, v, arr, n);
    v.pop_back();
    printSeq(index + 1, v, arr, n);
}

int main()
{
    int n = 3;
    int arr[n] = {3, 1, 2};
    int k = 3;
    vector<int> v;
    printSeq(0, v, arr, n);
}
