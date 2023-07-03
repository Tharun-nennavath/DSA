#include<bits/stdc++.h>
using namespace std;
   

int main()
{
    int N,m;
    cin>>N>>m;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(arr[i]>arr[j]){
                int a=arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }

        }
    }
    int min_diff=INT_MAX;
    for(int i=0;i+m-1<N;i++)
    {
        int diff=arr[i+m-1]-arr[i];
        if(diff<min_diff){
            min_diff=diff;
        }
      
    }
    cout<<min_diff;
}
