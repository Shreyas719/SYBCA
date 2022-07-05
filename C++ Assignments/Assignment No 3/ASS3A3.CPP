#include<iostream.h>
#include<conio.h>
class B;
class A
{
	int a;
	public:
	void geta()
	{
		cout<<"Enterb the value of a";
		cin>>a;
	}
	friend void sub(A,B);
};
class B
{
	int b;
	public:
	void getb()
	{
		cout<<"Enter the value of b";
		cin>>b;
	}
	friend void sub(A,B);
};
void sub(A a1, B b1)
{
	int s;
	s=a1.a-b1.b;
	cout<<"Substraction is"<<s;
}
void main()
{
	A a1;
	B b1;
	a1.geta();
	b1.getb();
	sub(a1,b1);
	getch();

}