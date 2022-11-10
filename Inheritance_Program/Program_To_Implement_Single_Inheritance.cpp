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
                cout<<"\nSTUDENT NAME    = "<<name;
            }
};
class branch : public student
{
    public:
            char branchname[16];

            void getbranchname()
            {
                student :: getstudinfo();
                puts("ENTER BRANCH NAME : ");
                gets(branchname);
            }
            void displaybranchname()
            {
                student :: displaystudinfo();
                cout<<"\nBRANCH          = "<<branchname;
            }
};
int main()
{
    branch obj;

    obj.getbranchname();
    getch();
    system("cls");
    cout<<"\n*******************************************************";
    obj.displaybranchname();
    cout<<"\n*******************************************************";

    getch();
    return 0;
}