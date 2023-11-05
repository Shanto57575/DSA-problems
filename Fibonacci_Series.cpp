//problem : https://www.codingninjas.com/studio/problems/print-fibonacci-series_7421617?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM&count=25&page=1&search=&sort_entity=order&sort_order=ASC&attempt_status=NOT_ATTEMPTED

void fib(vector<int> &v,int n) {
    if(n==2)return;
    v.push_back(v[v.size()-1]+v[v.size()-2]);
    fib(v,n-1);
}

vector<int> generateFibonacciNumbers(int n) {
    vector<int>v;
    if(n==1){
        v.push_back(0);
        return v;
    }
    v.push_back(0);
    v.push_back(1);
    fib(v,n);
    return v;
}
