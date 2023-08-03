#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;cin>>T;
	while(T--){
	    int X1,X2;cin>>X1>>X2;
	    if(X1>=X2){
	        cout<<"YES"<<endl;
	    }
	    else {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
