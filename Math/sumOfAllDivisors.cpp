//problem : https://www.codingninjas.com/studio/problems/sum-of-all-divisors_8360720?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
int sumOfAllDivisors(int n){
   
   int sum = 0, i, j;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
                if ((i / j) != j)
                    sum += (i / j);
            }
        }
    }

    return sum+1;
}
