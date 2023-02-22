#include<iostream>
using namespace std;
int main()
{
    int divisor=0,dividend=0 ,rem=0,quotient=0;

    cout<<"ENTER THE DIVISOR :";
    cin>>divisor;
    cout<<"ENTER THE DIVIDEND:";
    cin>>dividend;

    quotient = dividend/divisor;
    rem = dividend%divisor;

    cout<<"QUOTIENT OF ENTERED NUMBER = "<<quotient<<endl;
    cout<<"REMAINDER OF ENTERED NUMBER = "<<rem<<endl;

    return 0; 
}