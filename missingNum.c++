int missingNumber(vector<int>&a, int N) 
{
    // Write your code here.
    long sum = N*(N+1)/2;
    long sum2=0;
    for(int i =0;i<N-1;i++)
    {
        sum2+=a[i];
    }
    int ans = sum - sum2;
    return ans;
}
