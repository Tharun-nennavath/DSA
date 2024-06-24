class Solution {
public:
    int missingNumber(vector<int>& nums)
    {
        int result;
        int n = nums.size();
        long long sum = 0;
        long long sum1 = 0;
        sum = n*(n+1)/2;
        for(int i = 0;i<n;i++)
        {
            sum1 = sum1 + nums[i];
        }
        result =  sum - sum1;
        return result;

    }
};
// https://leetcode.com/problems/missing-number/
