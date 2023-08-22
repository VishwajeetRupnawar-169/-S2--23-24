#include<iostream>
#include<string.h>
using namespace std;
int fibonacci(int n)
{
    if(n == 0 || n == 1)
    {
       return 1;
    }
    else
    {
     fibo=fibonacci(n-1)+fibonacci(n-2);
     return fibo;
    } 
}

int main()
{
    int n,m;int f;
    cout<<"enter a integers"<endl;
    cin>>n>>m;
    char a;
    cout<<"enter a character"<<endl;
    cin>>a;
    string str;
    cout<<"enter a string:"<<endl;
    cin>>str;
    f=fibonacci(n);
    cout<<f<<endl;
    v(a);
    compare(str);
    
return 0;
}

