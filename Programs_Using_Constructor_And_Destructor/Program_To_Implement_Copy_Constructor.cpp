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
                marks = 98.89;
                cout<<"\nROLL NO OF A STUDENT IS : "<<rollno;
                cout<<"\nMARKS OF A STUDENT IS : "<<marks<<endl;
            }
            student(int r,float m)
            {
                rollno = r;
                marks = m;
                cout<<"\nROLL NO OF A STUDENT IS : "<<rollno;
                cout<<"\nMARKS OF A STUDENT IS : "<<marks<<endl;
            }
            student(student &t)
            {
                rollno = t.rollno;
                marks = t.marks;
                cout<<"\nROLL NO OF A STUDENT IS : "<<rollno;
                cout<<"\nMARKS OF A STUDENT IS : "<<marks<<endl;
            }
};
int main()
{
    student s1;
    student s2(102,80.88);
    student s3(s1);
    return 0;
}