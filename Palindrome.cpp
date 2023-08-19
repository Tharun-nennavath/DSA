class Solution {
public:
    bool isPalindrome(int x)
     {
       long long  rev=0, n=x;
       if(x < 0)
       {
           return false;
       }
       while(x != 0)
       {
           long long digit = x % 10;
           rev = ((rev * 10) + (digit));
           x = x / 10;
       }
       if(rev==n)
       {
           return true;
       }
       else
       {
           return false;
       }
    }
};
