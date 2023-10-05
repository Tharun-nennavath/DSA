class Solution {
public:
    string intToRoman(int num)
     {
        int nums[] = {1000 , 900 , 500 , 400 , 100 , 90, 50 , 40 , 10 , 9 , 5 , 4 , 1};
string st[]= {"M" , "CM" , "D" , "CD" , "C" ,"XC" , "L" , "XL" , "X" , "IX" , "V", "IV" , "I"};
        string r = "";
        for(int i = 0; i < 13; i++)
        {
            while(num >= nums[i])
            {
                r += st[i];
                num = num - nums[i];
            }
        }
        return r;
     }
};
