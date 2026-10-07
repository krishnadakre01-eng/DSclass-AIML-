#include <iostream>
using namespace std;


int main() {

    int lba [5];
    int searchID;

    cout << "Enter 5 Book IDs: " << endl;

    for (int  i = 0; i<5; i++){ 

        cin >> lba [i];

    }

    cout << "Enter Book ID you want to Search: ";
    cin >> searchID;

    for (int j = 0; j <5; j++) {

        if (lba [j] == searchID){
            cout << "Book Found";
            return 0;
        }
    }

    cout << "Book Not Found";


return 0;
}
