#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    void get()
    {
        cout << "Enter a number : ";
        cin >> a;
    }
void  display()
    {

        cout << a<<endl;
    }
    void operator++()
    {
        cout << "post increment" << endl;
        a++;
    }
    void operator++(int)
    {
        cout << "pre increment" << endl;
        ++a;
    }
};

int main()
{
    Number n1;
    n1.get();
    n1++;
    n1.display();
    ++n1;
    n1.display();

    return 0;
}
