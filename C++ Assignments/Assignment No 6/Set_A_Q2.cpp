#include<iostream>
using namespace std;
class employee
{
    float sal;
    public:
    void get_sal()
    {
        cout<<"Enter emp salary : ";
        cin>>sal;

    }
    void operator --(int  )
    {
         cout<<"Post decrement "<<endl;
         cout<<(float)sal<<endl;
         sal--;

    }
    void operator --()
    {
        cout<<"Pre decrement "<<endl;
        sal--;
        cout<<sal<<endl;

    }
};


int main()
{
    employee e1;
    e1.get_sal();
    e1--;
    --e1;

    return 0;
}