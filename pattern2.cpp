#include<bits/stdc++.h>
using namespace std;
/* patterns
    rule  1: For the outer loop , count the no. of lines or rows.
    rule 2 : for inner loop focus on the columns & connect them somehow to the rows.
    rule 3: print the '*' inside the inner for loop.
    rule 4 ( optional) : Observe symmetry.
        */
       /*
       Now we need to print this loop
       ***
       ***
       ***
       */
 void printn(int n)
{
    for(int i = 0; i < n; i++)
      {
        for(int j = 0; j < n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
      }
}
/*next pattern is:-
*
**
***
****
*/
void printm(int m )
{
    for(int i = 0; i < m; i++)
      {
        for(int j = 0; j <= i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
      }
}
/*
1
12
123
1234
12345
*/
void printo(int o) {
	// Write your code here.
    for(int i = 1; i <= o; i++)
      {
        for(int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
      }
}
/*
1
22
333
4444
55555*/
void printp(int p )
{
    for(int i = 1; i <= p; i++)
      {
        for(int j = 1; j <= i; j++)
        {
            cout<<i;
        }
        cout<<endl;
      }
}
/*
     *****
     ****
     ***
     **
     *
*/
void printq(int q)
{
    for(int i = 1; i <= q; i++)
      {
        for(int j = 0; j < q - i + 1; j++)
        {
            cout<<"*";
        }
        cout<<endl;
      }
}
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2 
1
*/
void nNumberTriangle(int n) {
    // Write your code here.
    for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n-i+1; j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
