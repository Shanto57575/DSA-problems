// problem : https://www.codingninjas.com/studio/problems/sum-of-first-n-numbers_8876068?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

long lon g sum(long long n){
    if(n==0)return 0;
    return n+sum(n-1);
}

long long sumFirstN(long long n) {
    sum(n);
}
