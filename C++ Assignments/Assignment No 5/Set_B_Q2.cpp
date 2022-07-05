#include <iostream>
#include <string.h>
using namespace std;

class worker
{

    char worker_name[20];
    int no_of_days_worked;
    float pay_rate;

public:
    worker()
    {
        strcpy(worker_name, "ABC");
        no_of_days_worked = 2;
        pay_rate = 50;
    }
    worker(char wname[], int wnday, float wprate)
    {
        strcpy(worker_name, wname);
        no_of_days_worked = wnday;
        pay_rate = wprate;
    }

    worker(worker &obj)
    {
        strcpy(worker_name, obj.worker_name);
        no_of_days_worked = obj.no_of_days_worked;
        pay_rate = obj.pay_rate;
    }

    void display()
    {
        cout << "\nWorker name " << worker_name << endl;
        cout << "\nNo of days " << no_of_days_worked << endl;
        cout << "\nRate is " << pay_rate << endl;
    }
    void salary()
    {
        cout  << "Salary of "<< worker_name <<" worker is : " << no_of_days_worked * pay_rate << endl;
    }
};

int main()
{
    worker w1, w2("XYZ", 20, 500);
    worker w3(w1);

    w1.display();
    w2.display();
    w3.display();
    w1.salary();
    w2.salary();
    w3.salary();

    return 0;
}