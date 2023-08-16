const int m = 1000000007;
    
    int findCatalan(int n) 
    {
        long long dp[n+1];
    dp[0] = 1; dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = 0;
        for (int j = 0; j < i; j++) {
            dp[i] = (dp[i] + (dp[j] * dp[i - j - 1]) % m) % m;
        }
    }
    return (int)dp[n];
