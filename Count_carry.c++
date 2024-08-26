#include <bits/stdc++.h>
using namespace std;
    int carr(int num1 , int num2)
    {
        int sum , count = 0;
        int carry = 0;
        int p ,q = 0;
        while(num1 !=0 && num2!=0)
        {
            p = num1 % 10;
            q = num2 % 10;
            sum = carry + p + q;
            if(sum > 9)
            {
                carry  = 1;
                count ++;
            }
            else
            {
                count = 0;
            }
            num1 = num1 / 10;
            num2 = num2 / 10;
        }
        return count;
    }
    int main()
    {
        int num1 , num2;
        cin>>num1>>num2;
        cout << carr(num1,num2);
        return 0;
    }
