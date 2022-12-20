#include<iostream>
using namespace std;
class result
{
    public:
            int num1=0,num2=0,div;
            void put();
            void get();

};
void result :: put(void)
{
    cout<<"ENTER FIRST NUMBER : ";          
    cin>>num1;
    cout<<"ENTER SECOND NUMBER : ";
    cin>>num2;
    div = num1 / num2;
}
void result :: get(void)
{
    cout<<"DIVISION OF ENTERED NUMBER = "<<div;
}
int main()
{
    result obj;
    obj.put();
    obj.get();
    return 0;
}