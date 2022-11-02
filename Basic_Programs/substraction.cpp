#include<iostream>
using namespace std;
class result
{
    public:
            int num1=0,num2=0,sub;
            void put();
            void get();

};
void result :: put(void)
{
    cout<<"ENTER FIRST NUMBER : ";          
    cin>>num1;
    cout<<"ENTER SECOND NUMBER : ";
    cin>>num2;
    sub = num1- num2;
}
void result :: get(void)
{
    cout<<"SUBSTRACTION OF ENTERED NUMBER = "<<sub;
}
int main()
{
    result obj;
    obj.put();
    obj.get();
    return 0;
}