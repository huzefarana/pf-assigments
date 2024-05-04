// write a program that test wether the dice is fair or not

#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int dice[6] = {0};
    int n;
    cout << "Please enter the number of times you want to roll the dice" << "\n";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int roll = rand() % 6 + 1;
        dice[roll - 1]++;
    }
    cout << "The number of times each face appeared is as follows" << "\n";
    for (int i = 0; i < 6; i++)
    {
        cout << "Face " << i + 1 << " appeared " << dice[i] << " times" << "\n";
    }
    return 0;
}
