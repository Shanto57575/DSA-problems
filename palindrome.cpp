//problem : https://www.codingninjas.com/studio/problems/palindrome-number_624662?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0

bool palindrome(int n)
{
    int x = n, remainder = 0;
    while(n!=0){
       remainder = remainder*10 + n%10;
       n/=10;
    }
    if(remainder==x)return true;
    return false;
}
