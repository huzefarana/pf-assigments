// Task.3
// Write a program in C++ to find Size of fundamental data types.

#include <iostream>
using namespace std;

int main()
{
    cout << "Size of fundamental data types in C++" << endl;
    cout << "Size of char : " << sizeof(char) << " byte" << endl;
    cout << "Size of short : " << sizeof(short) << " bytes" << endl;
    cout << "Size of int : " << sizeof(int) << " bytes" << endl;
    cout << "Size of long : " << sizeof(long) << " bytes" << endl;
    cout << "Size of long long : " << sizeof(long long) << " bytes" << endl;
    cout << "Size of float : " << sizeof(float) << " bytes" << endl;
    cout << "Size of double : " << sizeof(double) << " bytes" << endl;
    cout << "Size of long double : " << sizeof(long double) << " bytes" << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << " bytes" << endl;
    return 0;
}