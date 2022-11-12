#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class student
{
    public:
            int rollno;
            char name[24];

            void getstudinfo()
            {
                cout<<"\nENTER STUDENT ROLL NO : ";
                cin>>rollno;
                fflush(stdin);
                printf("\nENTER STUDENT NAME : ");
                gets(name);
                fflush(stdin);
            }
            void displaystudinfo()
            {
                cout<<"\nSTUDENT ROLL NO = "<<rollno;
                cout<<"\nSTUDENT NAME    = "<<name<<endl;
            }
};
class mark : public student
{
    public:
            int m1 , m2 , m3;
             
            void getmarks()
            {
                student :: getstudinfo();
                cout<<"\nENTER COMPUTER SCIENCE MARKS : ";
                cin>>m1;
                cout<<"\nENTER SCIENCE MARKS          : ";
                cin>>m2;
                cout<<"\nENTER MATHEMATICS MARKS      : ";
                cin>>m3;
            }
            void displaymarks()
            {
                student :: displaystudinfo();
                cout<<"\nMARKS IN COMPUTER SCIENCE : "<<m1;
                cout<<"\nMARKS IN  SCIENCE         : "<<m2;
                cout<<"\nMARKS IN MATHEMATICS      : "<<m3<<endl;
            }
};
class result : public mark
{
    public:
            float total , per;

            void process()
            {
                mark :: getmarks();
     
                total = m1 + m2 + m3;
                per   = total / 3;
            }
            void displayresult()
            {
                mark :: displaymarks();
                cout<<"\nTOTAL MARKS      = "<<total;
                cout<<"\nTOTAL PERCENTAGE = "<<per<<endl;
            }
};
int main()
{
    result obj;
    obj.process();
    system("cls");
    obj.displayresult();

    getch();
    return 0;
}