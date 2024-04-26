#include <iostream>
using namespace std;

bool program_execution(string action)
{
    if (action == "y" || action == "Y")
    {
        return true;
    }
    else if (action == "n" || action == "N")
    {
        return false;
    }
    return false;
}

int main()
{
    bool execution = true;
    int operation_type;
    int numbers_count;
    string action;
    cout << "Hello Huzefa, Student Id=bc230421870 Welcome to the Main Menu\n";
    while (execution)
    {
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
        cout << "Enter you choice: ";
        cin >> operation_type;
        if (operation_type == 1)
        {
            cout << "How many numbers you want to Add? ";
            cin >> numbers_count;
            int number;
            int result = 0;
            for (int i = 0; i < numbers_count; i++)
            {
                cout << "Enter number " << i + 1 << ": ";
                cin >> number;
                result += number;
            }
            cout << "Sum of all numbers is: " << result << "\n";
            cout << "Do you want to continue (y/n)? ";
            cin >> action;
            bool execution = program_execution(action);
            if (execution)
            {
                continue;
            }
            else
            {
                exit(0);
            }
        }
        else if (operation_type == 2)
        {
            cout << "How many numbers you want to Subtract? ";
            cin >> numbers_count;
            int number;
            int result;
            for (int i = 0; i < numbers_count; i++)
            {
                cout << "Enter number " << i + 1 << ": ";
                cin >> number;
                if (i == 0)
                {
                    result = number;
                }
                else
                {
                    result -= number;
                }
            }
            cout << "Subtraction of all numbers is: " << result << "\n";
            cout << "Do you want to continue (y/n)? ";
            cin >> action;
            bool execution = program_execution(action);
            if (execution)
            {
                continue;
            }
            else
            {
                exit(0);
            }
        }
        else if (operation_type == 3)
        {
            cout << "How many numbers you want to Multiply? ";
            cin >> numbers_count;
            int number;
            int result = 1;
            for (int i = 0; i < numbers_count; i++)
            {
                cout << "Enter number " << i + 1 << ": ";
                cin >> number;
                result *= number;
            }
            cout << "Multiplication of all numbers is: " << result << "\n";
            cout << "Do you want to continue (y/n)? ";
            cin >> action;
            bool execution = program_execution(action);
            if (execution)
            {
                continue;
            }
            else
            {
                exit(0);
            }
        }
        else if (operation_type == 4)
        {
            cout << "How many numbers you want to Divide? ";
            cin >> numbers_count;
            int number;
            int result;
            for (int i = 0; i < numbers_count; i++)
            {
                cout << "Enter number " << i + 1 << ": ";
                cin >> number;
                if (number == 0)
                {
                    cout << "Division by zero is not allowed, exiting now...\n";
                    exit(0);
                }
                if (i == 0)
                {
                    result = number;
                }
                else
                {
                    result = result / number;
                }
            }
            cout << "Division of all numbers is: " << result << "\n";
            cout << "Do you want to continue (y/n)? ";
            cin >> action;
            bool execution = program_execution(action);
            if (execution)
            {
                continue;
            }
            else
            {
                exit(0);
            }
        }
        else if (operation_type == 5)
        {
            exit(0);
        }
        else
        {
            cout << "Invalid operation, exiting now...\n";
            exit(0);
        }
        exit(0);
    }
    return 0;
}
