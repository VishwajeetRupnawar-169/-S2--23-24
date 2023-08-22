
#include <iostream>

using namespace std;


int main()
{
 float a,b;
 float ans;
 char ch;
 cout<<"enter your nos.:"<<endl;
 cin>>a>>b;
 cout<<"Enter the operation:"<<endl;
 cin>>ch;
 switch(ch)
 {
     case '+':ans=a+b;
     case '-':ans=a-b;
     case '*':ans=a*b;
     case '/':ans=a/b;
     default:cout<<"error!!";
 }
 cout<<"ans is:"<<ans<<endl;
 return 0;
}
