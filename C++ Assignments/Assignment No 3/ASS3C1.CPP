#include<iostream>
using namespace std;
//#include<conio.h>
class complex
{
	float real,img;
	public:
	void setdata(float x,float y)
	{
		real=x;
		img=y;

	}
	friend complex sum(complex,complex);
	void display(complex);
};
void complex ::display(complex c)
{
	cout<<"complex number is :"<<c.real<<"+"<<c.img<<"i"<<endl;

}
complex sum(complex c1,complex c2)
{
	complex c3;
	c3.real=c1.real+c2.real;
	c3.img=c1.img+c2.img;
	return c3;
}
int main()
{
	  // clrscr();
	complex a,b,c;
	a.setdata(1.2,3);

      a.display(a);
	b.setdata(4.2,4);

	b.display(b);
	cout<<"Sum of two ";
	c=sum(a,b);
	c.display(c);
//	getch();

return 0;	//getch();

}
