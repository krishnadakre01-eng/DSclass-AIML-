#include <iostream>
using namespace std;

int main()
{
    int id[5];

    cout<<"Enter IDs of 5 library books:"<<endl;

    for (int i = 0; i < 5; i++)
    {
        cin>>id[i];
    }

    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (id[j] > id[j + 1])
            {
                
                int temp = id[j];
                id[j] = id[j + 1];
                id[j + 1] = temp;
            }
        }
    }

    cout<<"Book IDs in ascending order:"<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<id[i];
    }

    return 0;
}
