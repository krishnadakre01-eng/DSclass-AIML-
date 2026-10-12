#include<iostream>
using namespace std;

int main()
{
    int token[5];
    int top=-1;

    cout << "ENTER TOKEN NO :" << endl;

    for (int i=0;i<5;i++)
    {
        cin>>token[top++];

    }

    while(top>=0)
    {
        cout << "SERVICE HISTORY OF CUSTOMER :" << token[--top] << endl;

    }

    return 0;

}
