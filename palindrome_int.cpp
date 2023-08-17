#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int rev=0;
int num=n;
while(n!=0)
{
    rev=(rev*10+n%10);
    n/=10;
}
if(num==rev){
    cout<<"given number is palindrome";
}
else
cout<<"not a palindrome";
}