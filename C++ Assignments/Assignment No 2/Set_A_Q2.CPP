#include<iostream.h>
#include<conio.h>

	class distance
	{
		private:
		int f,i;


		public:
		void get();
		void show();
		distance sum(distance);


	};

	void distance :: get()
	{
		cout<<"Enter value of feet : "<<endl;
		cin>>f;
		cout<<"Enter value of inch : "<<endl;
		cin>>i;

	}
	void distance :: show()
	{
		cout<<"Value of feet is : "<<f<<endl;
		cout<<"Value of inch is : "<<i<<endl;
	}
	   distance distance :: sum(distance d2)
	   {
	   distance d3;
	    d3.f=f + d2.f;
	    d3.i=i + d2.i;
	    return d3;

	   }
int main()
{
	clrscr();
    distance d1,d2,d3;
    d1.get();
    d2.get();
    d1.show();
    d2.show();
    d3 = d1.sum(d2);
    cout<<" <== After Adding ==>"<<endl;
    d3.show();
    getch();
    return 0;
}