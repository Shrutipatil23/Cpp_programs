#include<iostream>
using namespace std;
class student
{
    int rollno = 0;
    float marks = 0.0;
    public :
            student(int r,float m)
            {
                rollno = r;
                marks = m;
                cout<<"ROLL NO OF STUDENT : "<<rollno<<endl;
                cout<<"MARKS OF STUDENT : "<<marks;
            }
};
int main()
{
    student s(101,95.5);
    return 0;
}