/*#include<iostream>
using namespace std;
int main()
{
int n=5;
int arr[n];

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
}

#include<iostream>
using namespace std;
int main()
{
    int rows;
    cin>>rows;
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<"\n"<<endl;
    }
}*/
#include<iostream>
using namespace std;
int main()
{
    int rows,space;
    cin>>rows;
    /*
    for(int i=rows;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n"<<endl;
    }
}*/
for(int i=1,k=0;i<=rows;i++,k=0){
    for(space=1;space<=rows-i;space++){
        cout<<" ";
    }
    while(k!=2*i-1){
        cout<<"*";
        k++;
    }
    cout<<endl;
}
}