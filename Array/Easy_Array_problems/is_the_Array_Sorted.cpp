// problem : https://www.codingninjas.com/studio/problems/ninja-and-the-sorted-check_6581957?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

int isSorted(int n, vector<int> a) {
    for(int i=0; i<n-1; i++){
        if(a[i]>a[i+1])return 0;
    }
    return 1;
}
