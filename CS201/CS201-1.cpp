#include <iostream>
using namespace std;

/**
 * Executes a program based on the given action.
 *
 * @param action The action to be executed. It can be 'y', 'Y', 'N', or 'n'.
 * @return True if the action is 'y' or 'Y', false if the action is 'N' or 'n'.
 */
bool program_execution(char action)
{
    switch (action)
    {
    case 'y':
        return true;
        break;
    case 'Y':
        return true;
        break;
    case 'N':
        return false;
        break;
    case 'n':
        return false;
        break;
    default:
        return false;
        break;
    }
}

int main()
{
    bool isStop = false;
    int operation_type;
    int numbers_count;
    char action;
    cout << "Hello Huzefa, Student Id=bc230421870 Welcome to the Main Menu\n\n";
    do
    {
        cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n";
        cout << "Enter you choice: ";
        cin >> operation_type;

        if (operation_type == 1) // Addition
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
                break;
            }
        }

        else if (operation_type == 2) // Subtraction
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
                break;
            }
        }

        else if (operation_type == 3) // Multiplication
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
                break;
            }
        }

        else if (operation_type == 4) // Division
        {
            cout << "How many numbers you want to Divide? ";
            cin >> numbers_count;
            int number;
            float
                result;
            for (int i = 0; i < numbers_count; i++)
            {
                cout << "Enter number " << i + 1 << ": ";
                cin >> number;
                if (number == 0)
                {
                    cout << "Division by zero is not allowed, exiting now...\n";
                    isStop = true;
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
            if (isStop)
                break;
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
                break;
            }
        }

        else if (operation_type == 5) // Exit
        {
            break;
        }
        else
        {
            cout << "Invalid operation, exiting now...\n";
            break;
        }
        break;
    } while (isStop);
    return 0;
}
