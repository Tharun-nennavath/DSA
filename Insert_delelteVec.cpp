#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int>V={10,20,30,40,50,60,70};
// delation of a vector
// suppose u have a vector like {10,20,30,40,50};Now if I want ot delete 20 from this vector v use below code;
V.erase(V.begin()+1);// Now the vector looks like {10,30,40,50};
// now if I want to delete {10,20,30,40,50} from this vector 20,30;
V.erase(V.begin()+1,V.begin()+4);
// now how to insert  elements in vectors
//now if i want to insert 200 in the begining of the vector;
V.insert(V.begin(),200);//{200,100,100};
V.insert(V.begin()+1,2,10);//{200,10,10,100};
