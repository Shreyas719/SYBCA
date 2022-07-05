#include<iostream>
//#include<conio.h>
#include<math.h>
using namespace std;
void area(float a,float b)
{
	float A;
	A=0.5*a*b;
	cout<<"The area of right angle triangle is : "<<A<<endl;

}
void area(int t,int y)
{
	int B;
	B=0.5*t*y;
	cout<<"Area of isosceles triangle is : "<<B<<endl;

}
void area(float a)
{
	float A1;
	A1=(sqrt(3)/4)*a*a;
	cout<<"Area of equilateral triangle is : "<<A1<<endl;
}

int  main()
{
	float a,b,c;
	int y,t;
	//clrscr();
	cout<<"Enter the breadth and height : ";
	cin>>a>>b;
	area(a,b);
	cout<<"Enter the value for calculating area of isosceles triangle : ";
	cin>>y>>t;
	area(y,t);
	cout<<"Enter the side : ";
	cin>>c;
	area(c);
	//getch();
	return 0;


}