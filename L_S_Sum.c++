#include<bits/stdc++.h>
using namespace std;
int Large_small_sum(int arr[],int n)
{
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int slargest = INT_MIN;
    int ssmallest = INT_MAX;
    
    for(int i = 0;i<n;i++)
    {
        if( i % 2 == 0 )
        {
            largest = max(largest , arr[i]);
        }
        else
        {
            smallest = min(smallest,arr[i]);
        }
    }
    for(int i =0;i<n;i++)
    {
        if( i % 2 == 0 )
        {
            if(arr[i] < largest)
            {
                slargest = max(slargest,arr[i]);
            }
        }
        else
        {
            if(arr[i] > smallest)
            {
                ssmallest = min(ssmallest,arr[i]);
            }
        }
    }
    int sum = slargest+ssmallest;
    
    
    return slargest + ssmallest;
}
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<Large_small_sum(arr , n);
    return 0;
}
