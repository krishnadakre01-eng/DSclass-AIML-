#include<iostream>
using namespace std;

void bank()
{
    int token;

    cout << "......BANK SERVICES......" << endl;
    cout << "TOKEN 1 : DEPOSIT MONEY " << endl;
    cout << "TOKEN 2 : WITHDRAW MONEY " << endl;
    cout << "TOKEN 3 : DISPLAY BALANCE " << endl;
    cout << "TOKEN 4 : CHANGE PIN " << endl;
    cout << "TOKEN 5 : EXIT " << endl;

    cout << "ENTER TOKEN NO :" << endl;
    cin >> token;

    if (token==1)
    {
        cout << "YOUR MONEY IS DEPOSITED !!" << endl;
        bank();
    }

    else if (token==2)
    {
        cout << "YOUR MONEY WITHDRAWED !! " << endl;
        bank();
    }

    else if (token==3)
    {
        cout << "YOUR BALANCE IS ____ !! " << endl;
        bank();

    }

    else if (token==4)
    {
        cout << "ENTER NEW PIN : !! " << endl;
        bank();
    }

    else if(token==5)
    {
        cout << "THANK YOU , VISIT AGAIN !! " << endl; 
        return;
    }

    else
    {
         cout << "INVALID CHOICE , PLEASE ENTER AGAIN : !!" << endl;
    }
};
    int main()
    {
        bank();
    }
