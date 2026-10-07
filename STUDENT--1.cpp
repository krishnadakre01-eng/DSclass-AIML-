# include <iostream>
using namespace std;
class student
{
    public :
    string name;
    int rollno;
    float marks;
    void display ()
    { 
    cout << "Name of Student : " << name << endl; 
    cout << "Roll No         : " << rollno << endl; 
    cout << "Marks           : " << marks << endl; 
    cout << "------------------------" << endl; 
    }

};

int main()
{
    student S1 ;
    student S2 ;

    S1.name="krishna";
    S1.rollno=24;
    S1.marks=99;

    S1.display();


    S2.name="harshal";
    S2.rollno=17;
    S2.marks=100;

    S2.display();
    return 0;
    

    
}
