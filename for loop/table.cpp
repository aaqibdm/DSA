#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    for (int i=1;i<=10;i++){
        int j=i*number;
        cout<<j<<endl;
    }
}