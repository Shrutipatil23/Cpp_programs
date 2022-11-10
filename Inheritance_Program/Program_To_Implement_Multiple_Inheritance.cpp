using namespace std;

#include<iostream>
#include<stdio.h>
#include<conio.h>

class student
{
    public:
            int rollno;
            char name[30];

            void getstudinfo()
            {
                cout<<"\nENTER STUDENT ROLL NO : ";
                cin>>rollno;
                fflush(stdin);
                puts("ENTER STUDENT NAME : ");
                gets(name);
                fflush(stdin);
            }
            void displaystudinfo()
            {
                cout<<"\nSTUDENT ROLL NO = "<<rollno;
                cout<<"\nSTUDENT NAME    = "<<name<<endl;
            }

};
class marks
{
    public:
            int s1;
            int s2;
            int s3;

            void getmarks()
            {
                cout<<"\nENTER ENGLISH SUBJECT MARKS :";
                cin>>s1;
                cout<<"\nENTER MATHEMATICS SUBJECT MARKS :";
                cin>>s2;
                cout<<"\nENTER COMPUTER SCIENCE SUBJECT MARKS :";
                cin>>s3;
            }
            void displaymarks()
            {
                cout<<"\nMARKS OBTAINED IN SUBJECT ENGLISH           ="<<s1;
                cout<<"\nMARKS OBTAINED IN SUBJECT MATHEMATICS       ="<<s2;
                cout<<"\nMARKS OBTAINED IN SUBJECT COMPUTER SCIENCE  ="<<s3<<endl;
            }
};
class result : public student , public marks
{
    public :
            int total;
            float per;

            void displayresult()
            {
                student :: getstudinfo();
                marks   :: getmarks();
                getch();
                system("cls");
                cout<<"***********************************************";
                student :: displaystudinfo();
                marks   :: displaymarks();

                total = s1 + s2 + s3;
                per   = total / 3;

                cout<<"\nTOTAL MARKS = "<<total;
                cout<<"\nPERCENTAGE  = "<<per<<endl;
                cout<<"************************************************";
            }
};
int main()
{
    result obj;
    obj.displayresult();

    getch();
    return 0;
}