#include <iostream>
#include <string.h>

using namespace std;

class mobile
{
    int m_id;
    char m_name[20];
    float m_price;

public:
    mobile(int id, char name[], float price)
    {

        m_id = id;
        strcpy(m_name, name);
        m_price = price;
    }
    void display()
     {
        cout << "\n Mobile id " <<"\t"<< m_id ;
        cout << "\n Mobile name " <<"\t" << m_name ;
        cout << "\n Mobile price " <<"\t"<< m_price << endl;


   
    }
};

int main()
{
    int id;
    char name[20];
    float price;
    cout << "Enter mobile id : ";
    cin >> id;
    cout << "Enter mobile name : ";
    cin >> name;
    cout << "Enter mobile price : ";
    cin >> price;
    mobile m(id, name, price);
    m.display();
    return 0;
}