#include<iostream.h>
#include<conio.h>
class rectangle2;
class rectangle1
{
	float h1,b1,a1;
	public:
	void geta()
	{
		cout<<"Enter height and breadth";
		cin>>h1>>b1;
		a1=b1*h1;
		cout<<"rectangle 1 area is"<<a1;
	}
	friend void com(rectangle1,rectangle2);
};
class rectangle2
{
	float h2,b2,a2;
	public:
	void getb()
	{
		cout<<"Enter height and breadth for rectanle 2";
		cin>>h2>>b2;
		a2=h2*b2;
		cout<<"rtectangle 2 area is"<<a2;
	}
	friend void com(rectangle1,rectangle2);
};
void com(rectangle1 r1,rectangle2 r2)
{
	if(r1.a1>r2.a2)
	{
		cout<<"rectangle 1 area is greater";
	}
	else
	{
	cout<<"rectangle 2 area is grearter";

	}

}

void main()
{
       rectangle1 r1;
       rectangle2 r2;
	r1.geta();
	r2.getb();
	com(r1,r2);
	getch();
}