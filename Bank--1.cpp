#include<iostream>
using namespace std;

int main()
{
    int token[5];
    int front=0;
    int rear=0;

    cout << "ENTER TOKEN NO :" << endl;

    for (int i=0;i<5;i++)
    {
        cin>>token[rear];
        rear++;
    }

    cout << "TOKEN ID IN ORDER :" << endl;

    while(front<rear)
    {
        cout << "HERE ARE YOUR ORDER:" << token[front] << endl;   
        front ++;
    }

    return 0;


}
