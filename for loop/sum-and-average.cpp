#include <iostream>
using namespace std;
int main()
{
    float number;
    cout << "Enter a numebr : ";
    cin >> number;
    float no = 0;
    for (float i = 1; i <= number; i++)
    {
        no = no + i;
    }
    cout << "The sum of " << number << "no is =" << no << endl;
    float average = no / number;
    cout << "The Average is : " << average;
}