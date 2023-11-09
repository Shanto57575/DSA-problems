// problem : https://www.codingninjas.com/studio/problems/check-palindrome-recursive_624386?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM

bool check(string& str, int i, int j) {
    if(str[i]!=str[j])return false;
    if(i>=j)return true;
    check(str,i+1, j-1);
}

bool isPalindrome(string& str) {
    check(str,0,str.size()-1);
}
