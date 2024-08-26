#include<bits/stdc++.h>
using namespace std;
int diff_sum(int n , int m)
{
    int sum1 = 0;
    int sum2 = 0;
    for(int i = 1;i<=m;i++)
    {
        if( i % n == 0 )
        {
            sum1 += i;
        }
        else
        {
            sum2 += i;
        }
    }
    int diff = sum2 - sum1;
    return diff;
}
int main()
{
    int n,m;
    cin>>n>>m;
    cout<<diff_sum(n,m);
    return 0;
}
