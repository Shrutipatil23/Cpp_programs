#include<iostream>
using namespace std;
int main()
{
    int num1=0,num2=0;

    cout<<"ENTER FIRST NUMBER = ";
    cin>>num1;
    cout<<"ENTER SECOND NUMBER = ";
    cin>>num2;

    cout<<"NUMBER BEFORE SWAPPING = "<<num1<<" AND "<<num2<<endl;

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    
    cout<<"NUMBER AFTER SWAPPING = "<<num1<<" AND "<<num2<<endl;

    return 0;

}