#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
int count=0;
if(n==0||n==1)
{
    cout<<"Neither a prime nor composite";
}
for(int i=2;i<n;i++)
{
if(n%i==0)
{
count++;
}
}
if(count>1){
    cout<<"given number is composite";
}
else
{
    cout<<"given number is  prime";
}

}