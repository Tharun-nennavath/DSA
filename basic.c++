#include<bits/stdc++.h>
using namespace std;

/*void sum(int a,int b){
    cout<<a+b<<"\n";
}
int add(int c,int d)
{
  int e=c+d;
  return e;
  }
  */
 void Dochange(string s){
    s[2]='r';
    cout<<s<<endl;
 }
 void makechange(string &s1){
    s1[1]='a';
    cout<<s1<<endl;
 }
int main()
{
    // int , long , long long for integers;
    //float,double for decimal number annd also integer;
    // string , getline for set of characters. we also char for single character;
    //string s1,s2;
    //cin>>s1>>s2;
   // cout<<s1<<" "<<s2;
    // now if want  all the words in together  we use getline;
    //string a="tharun";
    //cout<<a[2];
    //getline(cin,a);// this should be written in only one line; next line won't be printed;
    //cout<<a;

    /*int n;
    cin>>n;
    if(n>=18){
        cout<<"adult";
    }
    else cout<<"minor";*/
    
    /*int marks;
    cin>>marks;
    if(marks >=90 && marks>=100)
    {
        cout<<"s";
    }
    else if(marks>=80&&marks<=89)
{
    cout<<"A";
}
else if(marks>=70&&marks<=79){
    cout<<"B";
}
else if(marks>=60&&marks<=69){
    cout<<"C";
}
else if(marks>=50&&marks<=59){
    cout<<"D";
}
else if(marks>=40&&marks<=49){
    cout<<"E";
}
else{
cout<<"F";
} */
/*int age;
cin>>age;
if(age<18){
    cout<<"not eligible for job";
}
else if(age<=54){
    cout<<"eligible for job";
}
else if(age<=57){
    cout<<"retierment soon ";
}
else {
    cout<<" its for time retierment bro";
}
// switch statements;
*/
 /*int day;cin>>day;
 switch(day)
 {
     case 1: 
     cout<<"monday";
     break;
     case 2: 
     cout<<"tuesay";
      break;
     case 3:
      cout<<"wednesday";
      break;
     case 4: 
     cout<<"thursday";
      break;
     case 5: 
     cout<<"friday";
      break;
     case 6: 
     cout<<"saturday";
     break;
     case 7: 
     cout<<"sunday";
     break;
     default:
     cout<<"invalid";
 }
 */
 // 2d array;
 //int arr[3][5] // this represents 3 rows and 5 coloumns ;
 // for loops;
 /*for(int i=5;i>=0;i--)
 {
    cout<<"THarun"<<i<<"\n";
 }
 int i=5;
 while(i>=0){
    cout<<"Tharun"<<"\n";
    i--;
 }
 cout<<"do while"<<endl;
 int n =5;
 do{
    cout<<"Tharun"<<"\n";
    n++;
  }
   while(n<=5);
   */
    // functions :
/*
void printName(name)
{
    cout<<"Hey "<<name;
}
int main(){
    string name;
    cin>>name;
    printName(name);
}
the o/p : Hey Tharun ;here string i/p was tharun;
*/
/*int a=5;int b=6;
sum(a,b);
int c,d;
cin>>c>>d;
int result=add(c,d);
cout<<result;
*/
string s="Tharun";
Dochange(s);
cout<<s<<endl;// output is Tharun;the word didn;t changed this known as pass by value;
string s1="Thara";
makechange(s1);
cout<<s1;// here the output is going to be changed accordingly because we send address here.it called as call by reference;

return 0;



}