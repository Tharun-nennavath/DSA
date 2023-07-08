#include<iostream>
using namespace std;
  


  int main()
  {
    int n;
    cin>>n;
    int nums[1+n];
for(int i=0;i<(1+n);i++)
{
cin>>nums[i];
}
for(int i=0;i<(n);i++){
    for(int j=i+1;j<(n+1);j++){
        if(nums[i]==nums[j]){
            cout<<"The repeated number is :"<<nums[i];
        }
    }
}
  }