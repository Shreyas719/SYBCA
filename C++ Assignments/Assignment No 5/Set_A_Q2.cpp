#include<iostream>
//#include<conio.h>

using namespace std;

class simpleinterest
{
    int p,n,r;
    public:
    simpleinterest(int p, int n, int r=2)
    {
        float si;
        si=p*n*r/100;
        cout<<"Simple Interest is :"<<si<<endl;

    }

};

int main()
{
    simpleinterest d1(1000,2);
    return 0;
}