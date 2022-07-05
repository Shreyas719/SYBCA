#include<iostream.h>
#include<conio.h>
class sample
{
	int a;
	public:
	int s();
	int c();
};
inline int sample::s()
{
	cout<<"Enter the no"<<endl;
	cin>>a;
	return a*a;
}
inline int sample::c()
{
	cout<<"\nEnter the no"<<endl;
	cin>>a;
	return a*a*a;
}
void main()
{
	clrscr();
	sample s1;
       int a1 =s1.s();
       cout<<"Square is :"<<a1;
       int a2=s1.c();
       cout<<"Cube is :"<<a2;
       getch();
}