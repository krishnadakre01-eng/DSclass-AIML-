#include <iostream>
#include <string>
using namespace std;

int main() {
    int id1, id2, id3;
    string title1, title2, title3;

    cout << "Enter first id: ";
    cin >> id1;
    cin.ignore();

    cout << "Enter 1 book title: ";
    getline(cin, title1);

    cout << "Enter second id: ";
    cin >> id2;
    cin.ignore();

    cout << "Enter 2 book title: ";
    getline(cin, title2);

    cout << "Enter third id: ";
    cin >> id3;
    cin.ignore();

    cout << "Enter 3 book title: ";
    getline(cin, title3);

    cout << "\n===== LIBRARY BOOK =====\n";

    cout << "BOOK ID: " << id1 << "\n";
    cout << "BOOK Title: " << title1 << "\n";

    cout << "BOOK ID: " << id2 << "\n";
    cout << "BOOK Title: " << title2 << "\n";

    cout << "BOOK ID: " << id3 << "\n";
    cout << "BOOK Title: " << title3 << "\n";

    return 0;
}
