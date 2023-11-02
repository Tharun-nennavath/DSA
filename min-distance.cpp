int minDist(int a[], int n, int x, int y) 
    {
int c = -1;
    int d = -1;
    int ans = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x) c = i;
        if (a[i] == y) d = i;
        if (c != -1 && d != -1) 
        {
            ans = min(ans, abs(c - d));
        }
    }
     return ans == INT_MAX ? -1 : ans;
    }
