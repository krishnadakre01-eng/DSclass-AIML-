#include <iostream>
using namespace std;

int main()
{
    int roll[5], search;

    cout << "Enter 5 roll numbers:" << endl;

    for(int i = 0; i < 5; i++)
        cin >> roll[i];

    cout << "Enter roll number to search: ";
    cin >> search;

    for(int i = 0; i < 5; i++)
    {
        if(roll[i] == search)
        {
            cout << "Student Found";
            return 0;
        }
    }

    cout << "Student Not Found";

    return 0;
}

