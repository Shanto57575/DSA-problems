// https://leetcode.com/problems/add-digits/description/

// tc--> O(logN)
// sc--> O(1)

class Solution {
public:
    int addDigits(int num) {
        long long sum = 0;
        while(1)
        {
            sum += num % 10;
            num/=10;
            if(num==0 && sum>=10)
            {
                num = sum;
                sum = 0;
            }
            if(num==0 && sum<10)
            {
                return sum;
            }
        }
        return 0;
    }
};

// recursion
// tc --> O(logn)
// sc --> o(1)

class Solution {
public:
    int addDigits(int num) {
        return helper(num, 0);
    }
private:
   int helper(int num, long long sum)
   {
        if(num==0 && sum<10)return sum;
        if(num==0 && sum>=10)
        {  
           num = sum; 
           sum = 0;
        }
       return helper(num/10, sum + (num%10));
   }
};

// tc --> O(1)
// sc --> O(1)

class Solution {
public:
    int addDigits(int num) {
        return 1 + (num-1) % 9;
    }
};
