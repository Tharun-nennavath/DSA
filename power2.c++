class Solution {
  public:
    // Function to check if given number n is a power of two.
    bool isPowerofTwo(long long n) {

        // Your code here
        if(n == 1)
        return true;
        else if(n % 2 != 0)
        return false;
        while(n>0)
        {
            if(n == 1)
            return true;
            else if(n % 2 != 0)
            return false;
            else
            n = n/2;
        }
    }
