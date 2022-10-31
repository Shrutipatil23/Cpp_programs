#include<iostream>
using namespace std;
class calculator
{
    public:
            int num1=0,num2=0;
            float res=0.0;
            void add()
            {
                cout<<"ENTER FIRST NUMBER : "<<endl;
                cin>>num1;
                cout<<"ENTER SECOND NUMBER : "<<endl;
                cin>>num2;
                res = num1 + num2;
                cout<<"ADDITION OF ENTERED NUMBER = "<<res<<endl;
            }
            void sub()
            {
                res = num1 - num2;
                cout<<"SUBSTRACTION OF ENTERED NUMBER = "<<res<<endl;
            }
            void prod()
            {
                res = num1 * num2;
                cout<<"PRODUCT OF ENTERED NUMBER = "<<res<<endl;
            }
            void div()
            {
                
                res = num1 / num2;
                cout<<"DIVISION OF ENTERED NUMBER = "<<res<<endl;
            }
            void rem()
            {
                res = num1 % num2;
                cout<<"REMAINDER OF ENTERED NUMBER = "<<res<<endl;
            }

};
int main()
{
    calculator obj;
    obj.add();
    obj.sub();
    obj.prod();
    obj.div();
    obj.rem();
    return 0;
}
