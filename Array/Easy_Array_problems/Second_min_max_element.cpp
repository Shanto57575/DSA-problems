// problem : https://www.codingninjas.com/studio/problems/ninja-and-the-second-order-elements_6581960?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

// Brute force approach (O(nlogn))
vector<int> getSecondOrderElements(int n, vector<int> a) {
    sort(a.begin(),a.end());
    if(n==2) return {a[a.size()-1],a[0]};
    if(n==3) return {a[1],a[1]};
    return {a[a.size()-2],a[1]};
}
//Better approach(O(n))
vector<int> getSecondOrderElements(int n, vector<int> a) {
    int mini = INT_MAX, secondMini = INT_MAX;
    int mx = INT_MIN, secondMx = INT_MIN;

    for(int i=0; i<n; i++){
        mini = min(mini,a[i]);//3
        mx = max(mx,a[i]);//19
    }

    for(int i=0; i<n; i++){
        if(a[i]<secondMini && a[i]!=mini)secondMini = a[i];
        if(a[i]>secondMx && a[i]!=mx) secondMx = a[i];
    }

    return {secondMx, secondMini};
}
