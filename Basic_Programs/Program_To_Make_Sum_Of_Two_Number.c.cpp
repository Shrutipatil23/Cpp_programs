#include<iostream>
using namespace std;
class result
{
    public:
            int num1=0,num2=0,sum;
            void put()
            {
                cout<<"ENTER FIRST NUMBER : "<<endl;
                cin>>num1;
                cout<<"ENTER SECOND NUMBER : "<<endl;
                cin>>num2;
                sum = num1+num2;
            }
            void get()
            {
                cout<<"SUM OF ENTERED NUMBER IS = "<<sum;
            }

};
int main()
{
    result obj;
    obj.put();
    obj.get();
    return 0;
}