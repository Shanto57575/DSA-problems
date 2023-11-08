//problem : https://www.codingninjas.com/studio/problems/count-frequency-in-a-range_8365446?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

vector<int> countFrequency(int n, int x, vector<int> &nums){

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        arr[nums[i]-1]++;
    }

    return arr;
}
