#include <iostream>
using namespace std;

int main() {
    int library[10];    
    int n = 0;  
    int choice;          

    do 
    {
        
        cout << "\n--- LIBRARY MENU ---\n";
        cout << "1. Add Book ID\n";
        cout << "2. Display All Book IDs\n";
        cout << "3. Search for Book ID\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        
        if (choice == 1) {
            if ( n < 10) 
            {
                cout << "Enter Book ID to add: ";
                cin >> library[n];
                n++; 
                cout << "Book ID added successfully!\n";
            } 
            else 
            {
                cout << "Library is full!\n";
            }
        } 
        else if (choice == 2) {
            if (n == 0) 
            {
                cout << "No books in the library.\n";
            } 
            else 
            {
                cout << "\n--- List of Book IDs ---\n";
                for (int i = 0; i < n; i++) {
                    cout << library[i] << "\n";
                }
            }
        } 
        else if (choice == 3) 
        {
            if (n == 0) 
            {
                cout << "Library is empty. Nothing to search.\n";
            } 
            else 
            {
                int searchId;
                bool found = false;
                cout << "Enter Book ID to search: ";
                cin >> searchId;

                for (int i = 0; i < n; i++) 
                {
                    if (library[i] == searchId) 
                    {
                        found = true;
                        break; 
                    }
                }

                if (found) 
                {
                    cout << "Book ID found in the library!\n";
                } 
                else 
                {
                    cout << "Book ID not found.\n";
                }
            }
        } 
        else if (choice == 4) 
        {
            cout << "Exiting program.\n";
        } 
        else 
        {
            cout << "Invalid choice.\n";
        }

    } 
    
    while (choice != 4); 

    return 0;
}
