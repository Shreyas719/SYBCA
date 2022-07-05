#include <iostream>
#include <math.h>
using namespace std;
void volume(int a)
{
    int s;
    s = a * a * a;
    cout << "Volume of cube is : " << s << endl;
}

void volume(int r, int h)
{
    int s1 = 3.14 * r * r * h;
    cout << "Volume of cylinder is : " << (float)s1 << endl;
}

void volume(float r1)
{
    float s3;
    s3 = 1.33* 3.14 * r1 * r1 * r1;
    cout << "Volume of sphere is : " << s3 << endl;
}

int main()
{
    int a, r, h;
    float r1;
    cout << "Enter length of edges : " << endl;
    cin >> a;
    volume(a);
    cout << "Enter radius and height : " << endl;
    cin >> r >> h;
    volume(r, h);
    cout << "Enter radius : " << endl;
    cin >> r1;
    volume(r1);

    return 0;
}