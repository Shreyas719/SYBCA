#include<iostream>
//#include<conio.h>
using namespace std; 
class number
{
    int a,b;
    public:
    number()
    {
        cout<<"This is default constructor."<<endl;
    }
    number(int a1, int b1)
    {
        a=a1;
        b=b1;
    }
    void maximum()
    {
        if (a>b)
            cout<<"A is greater.";
        else if (b>a)
            cout<<"B is greater.";
        else 
            cout<<"Both are same.";
    }
};

int main()
{
    number n1(50,100);
    n1.maximum();

    return 0;
}