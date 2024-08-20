#include <iostream>
using namespace std;
int calculate(int r,int unit,int n,int arr[])
{
    if(n == 0)
    {
        return -1;
    }
    int ans =0;
    int count = 0;
    int t_amount = r * unit;
    for(int i =0;i<n;i++)
    {
        if(ans >= t_amount)
        {
            return count;
        }
        else
        {
          ans+=arr[i];
          count ++;
        }
        
    }
    return 0;
}

int main()
{
    int r;
    cin>>r;
    int unit;
    cin>>unit;
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<calculate(r,unit,n,arr);

    return 0;
}
