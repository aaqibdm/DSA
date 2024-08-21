#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"enter number: ";
    cin>>a>>b;
    if(a>b){
        cout<<"a is max";
    }
    else if(a<b)
    {
        cout<<"b is max";
    }
    
    else{
        cout<<"both are equal";
    }
}