#include<iostream.h>
#include<conio.h>
class simpleinterest
{
	int p,n,r;
	public:
	int calculate(int p,int n,int r=5)
	{
		int si;
		si=(p*n*r)/100;
		return si;

	}

	int calculate(float p,int n=10,int r=7)
	{


		int si;
		si=(p*n*r)/100;
		return si;

	}

};
void main()
{
	clrscr();
	simpleinterest s1;
	int n,p1,p2,a,b;
	cout<<"Enter the principle amount and number of years";
	cin>>p1>>n;
      a=s1.calculate(p1,n);
      cout<<a;
	cout<<"Enter the principle amount ";
	cin>>p2;
       b= s1.calculate(p2);
       cout<<b;


	getch();
}
