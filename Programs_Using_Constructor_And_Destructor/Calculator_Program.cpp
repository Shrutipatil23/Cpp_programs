using namespace std;
#include<iostream>
#include<stdio.h>
#include<conio.h>
class calculator
{
    public:
            int num1,num2,res;
            calculator()
            {
                cout<<"----------------------------------------------"<<endl;
                num1=num2=res=0;
            }
            void add();
            void sub();
            void div();
            void rem();
            ~calculator()
            {
                cout<<"-----------------------------------------------";
            }    
};
void calculator :: add()
{
    res = num1 + num2;
}
void calculator :: sub()
{
    res = num1 - num2;
}
void calculator :: div()
{
    res = num1 / num2;
}
void calculator :: rem()
{
    res = num1 % num2;
}
int main()
{
    calculator obj1;
    cout<<"ENTER FIRST NUMBER : "<<endl;
    cin>>obj1.num1;
    cout<<"ENTER SECOND NUMBER : "<<endl;
    cin>>obj1.num2;

    obj1.add();
    cout<<"Sum of "<<obj1.num1<<" & "<<obj1.num2<<" is           =  " <<obj1.res<<endl;

    obj1.sub();
    cout<<"Substraction of "<<obj1.num1<<" & "<<obj1.num2<<" is  =  " <<obj1.res<<endl;

    obj1.div();
    cout<<"Division of "<<obj1.num1<<" & "<<obj1.num2<<" is      =  " <<obj1.res<<endl;

    obj1.rem();
    cout<<"Remainder of "<<obj1.num1<<" & "<<obj1.num2<<" is     =  " <<obj1.res<<endl;

    return 0;

}
