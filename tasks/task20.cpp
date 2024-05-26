#include <iostream>
using namespace std;

void print(int *ptr)
{
    cout << *ptr << "\n";
}

int main()
{
    int num;
    cout << "Please enter any inetger: ";
    cin >> num;
    print(&num);
    return 0;
}