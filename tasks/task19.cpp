#include<iostream>
using namespace std;
int main()
{   
    int num;
    cout << "Please enter any inetger: ";
    cin >> num;
    cout << *(&num) << "\n";
    return 0;
}