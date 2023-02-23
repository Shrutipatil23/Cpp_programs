#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    int i;
    cout<<"RANDOM NUMBERS BETWEEN  0 TO 100 IS = "<<endl;
    
    for(i=0;i<10;i++)
    cout<<rand()%100<<endl;

    return 0;
}