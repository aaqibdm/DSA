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
}