#include<iostream>
using namespace std;
int main(){
    int number,no;
    cout<<"Enter a number : ";
    cin>>number;
    no=0;
    for (int i=1;i<=number;i++){
        cout<<i<<endl;
        no=no+i;
    }
    cout<<"sum of natural number = "<<no;
}