class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int mx = 0;
        int temp = 0;
        int n = nums.size();
        for(int i =0;i<n;i++)
        {
            if(nums[i] == 1)
            {
                temp++;
                mx = max(mx,temp);
            }
            else
            {
                temp = 0;
            }
        }
        return mx;
    }
};
// https://leetcode.com/problems/max-consecutive-ones/
