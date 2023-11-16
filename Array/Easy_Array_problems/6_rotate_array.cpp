// problem : https://www.codingninjas.com/studio/problems/rotate-array_1230543?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

vector<int> rotateArray(vector<int>arr, int k) {
    vector<int>b;
    b = arr;
    for(int i=0; i<arr.size(); i++){
        if(i<k)
        arr[i+arr.size()-k] = b[i];
        else{
           arr[i-k] = b[i];
        }
    }
    return arr;
}
