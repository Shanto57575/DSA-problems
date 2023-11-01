//problem : https://practice.geeksforgeeks.org/problems/reverse-digit0316/1

class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    long long int remainder = 0;
		    while(n!=0){
		        remainder = remainder*10 + n%10;
		        n/=10;
		    }
		    return remainder;
		}
};
