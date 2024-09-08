#include<iostream>
using namespace std ;
int main ()
{
    int a ;
    cout<<"Enter the number a : " ;
    cin>>a;
    if (a<0){
        cout<<"negative";

    }
    else if(a>0){
        cout<<"possitive";
    }

    else{
        cout<<"zero";
    }
}