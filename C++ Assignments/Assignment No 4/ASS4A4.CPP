#include<iostream.h>
#include<conio.h>
#include<math.h>v
void power1(int m,int n);
void power1(double m,int n);
void power1(double m,int n)
{
	cout<<"Enter the number";
	cin>>m>>n;
	cout<<"\n power is "<<pow(m,n);
}
void power1(int m,int n)
{
	cout<<"Enter the number";
	cin>>m>>n;
	cout<<"power is"<<pow(m,n);
}
void main()
{
	clrscr();
	int n;
	double m;
	power1(m,n);
	power1(m,n);
	getch();
}