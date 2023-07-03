#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>>n>>k;
	    int a[110];
	    for(int i = 0; i < n; i++)
	    {
	        cin>>a[i];
	    }
	    
	    int temp = 0, sum = 0;
	    for(int l = 0; l < n; l++)
	    {
	        sum = 0;
	        for(int j = l;j < min(l+k, n); j++)
	        {
	            sum = sum + a[j];
	        }
	        temp = max(temp, sum);
	    }
	    cout<<temp<<endl;
	}
	return 0;
}