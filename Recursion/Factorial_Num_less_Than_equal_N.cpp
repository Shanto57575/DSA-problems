// problem : https://www.codingninjas.com/studio/problems/factorial-numbers-not-greater-than-n_8365435?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

void fact(vector<long long> &v, long long n, long long x) {
    if(x*v.back()>n)return;
    v.push_back(x*v.back()) ;
    fact(v,n,x+1);
}

vector<long long> factorialNumbers(long long n) {
    vector<long long>v{1};
    fact(v,n,2);
    return v;
}
