#include<iostream>
using namespace std;

int main(){
    
    int a,b,c; //swap number using third variable
    
    cout<<" Enter the first number : ";
    
    cin>>a;
    
    cout<<"Enter the second number : ";
    
    cin>>b;
    
    c=a;
    
    a=b;
    
    b=c;
    
    cout<<"a="<<a<<endl;

    cout<<"b="<<b<<endl;

    int d,e;//Swap number without third variable

    cout<<" Enter the first number : ";
    
    cin>>d;
    
    cout<<"Enter the second number : ";
    
    cin>>e;

    d=d+e;

    e=d-e;
    
    d=d-e;

    cout<<"d="<<d<<endl;

    cout<<"e="<<e<<endl;
}