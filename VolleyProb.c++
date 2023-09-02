#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;cin>>t;
    while(t--)
    {
        int N;cin>>N;
        string S;
        cin>>S;
        
        int a = 0;
        int b = 0;
        char Beg = 'A';
        for(int i = 0; i < N; i++)
        {
            if(S[i] == Beg)
            {
                if(Beg == 'A')
                {
                    a++;   
                }
                
            else
            {
                b++;
            }
            }
                else{
                    Beg = (Beg == 'A') ? 'B' : 'A';
                }
                    
        }
            
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
