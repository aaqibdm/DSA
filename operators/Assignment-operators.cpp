#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a First number : ";
    cin >> a;
    cout << "Enter a Second number : ";
    cin >> b;

    a = b;
    cout << "a=b : " << a <<endl;

    a += b;
    cout << "a+=b : " << a <<endl;

    a -= b;
    cout << "a-=b : " << a <<endl;

    a *= b;
    cout << "a*=b : " << a <<endl;

    a /= b;
    cout << "a/=b : " << a <<endl;

    a %= b;
    cout << "a%=b : " << a <<endl;

    a &= b;
    cout << "a&=b : " << a <<endl;

    a != b;
    cout << "a!=b : " << a <<endl;

    a <<= b;
    cout << "a<<=b : " << a <<endl;

    a >>= b;
    cout << "a>>=b : " << a <<endl;

    a ^= b;
    cout << "a^=b : " << a <<endl;
}