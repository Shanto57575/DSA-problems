//problem : https://www.codingninjas.com/studio/problems/count-digits_8416387?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0


int countDigits(int n){

    int storedValue = n;
	  int cnt = 0;

    while (n > 0) {
        int x = n % 10;
        if(x==0){
          n /= 10;
          continue;
        }
        if (storedValue % x == 0)cnt++;
        n /= 10;
    }
    
    return cnt;
}
