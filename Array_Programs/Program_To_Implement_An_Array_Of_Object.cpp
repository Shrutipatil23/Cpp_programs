#include<iostream>
#include<conio.h>
using namespace std;
class Vehicle
{
    public:
        int Vcode = 0;
        char Vname[20] = {'\0'};
        void getinfo()
        {
            cout<<"ENTER THE CODE OF VEHICLE = "<<endl;
            cin>>Vcode;
            cout<<"ENTER THE NAME OF VEHICLE = "<<endl;
            cin>>Vname;
        }
        void putinfo()
        {
            cout<<"CODE OF VEHICLE  = "<<Vcode<<endl;
            cout<<"NAME OF VEHICLE  = "<<Vname<<endl;
        }
};
int main()
{
    Vehicle V[3];
    for(int i=1;i<=3;i++)
    {
        V[i].getinfo();
        cout<<"*********************************************"<<endl;
    }
   
    for(int i=1;i<=3;i++)
    {
        cout<<"INFORMATION OF "<< i <<" VEHICLE IS :"<<endl;
        V[i].putinfo();
    }
    return 0;
}
