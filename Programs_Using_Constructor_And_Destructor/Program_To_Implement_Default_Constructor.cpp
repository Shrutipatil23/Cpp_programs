#include<iostream>
using namespace std;
class student
{
    int rollno = 0;
    float marks = 0.0;
    public :
            student()
            {
                rollno = 101;
                marks = 70.70;
                cout<<"ROLL NUMBER OF A STUDENT IS : "<<rollno<<endl;
                cout<<"MARKS OF THE STUDENT IS : "<<marks;
            }
};
int main()
{
    student s;
    return 0;
}
