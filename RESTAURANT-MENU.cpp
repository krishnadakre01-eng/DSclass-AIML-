#include <iostream>
using namespace std;

void menu()
{
    int choice;

    cout << "\n----- RESTAURANT MENU -----\n";
    cout << "1. Pizza\n";
    cout << "2. Burger\n";
    cout << "3. Pasta\n";
    cout << "4. Exit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "You selected Pizza.\n";
            break;

        case 2:
            cout << "You selected Burger.\n";
            break;

        case 3:
            cout << "You selected Pasta.\n";
            break;

        case 4:
            cout << "Thank you! Exiting...\n";
            return;

        default:
            cout << "Invalid choice!\n";
    }

    menu();   
}

int main()
{
    menu();
    return 0;
}

