#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number : ";
  cin>>n;
  int arr[n];
  cout<<"Enter the elements : ";
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int mx=-999;
  for(int i=0;i<n;i++)
  {
   mx=max(mx,arr[i]);

      cout<<mx<<endl;
  }
  
}