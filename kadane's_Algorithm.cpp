class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
        long long curr_sum = 0;
        long long max_sum = INT_MIN;
        for
        (int i = 0; i < n; i++)
        {
            curr_sum += arr[i];
            if(curr_sum > max_sum)
            {
                max_sum = curr_sum;
            }
            if(curr_sum < 0)
            {
                curr_sum = 0;
            }
        }
      
        return max_sum;
    }
}
