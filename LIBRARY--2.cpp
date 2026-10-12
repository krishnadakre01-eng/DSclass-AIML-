#include<iostream>
using namespace std;

int main()
{
    int bookID[5];
    int searchID;
    
    cout<<"Enter IDs of books:-"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>bookID[i];
    }

    cout<<"Enter book ID to search:";
    cin>> searchID;


    for (int i = 0; i < 5; i++)
    {
        if (bookID[i] == searchID)
        {
            cout<<"Book ID found";
            return 0;
        }
    }
        cout<<"Book ID not found";
        return 0;
    
}
