#include<iostream.h>
#include<conio.h>
#include<iomanip.h>

	class district
	{
		private:
			int d_code, population;
			float literacy_rate;
			float  area_sqft;
			char d_name[30];


		public:
		     void getdata();
		     void display();

	};

	void district  :: getdata()
	{
		cout<<"Enter District code : "<<endl;
		cin>>d_code;
		cout<<"Enter District name : "<<endl;
		cin>>d_name;
		cout<<"Enter area sqft : "<<endl;
		cin>>area_sqft;
		cout<<"Enter District population : "<<endl;
		cin>>population;
		cout<<"Enter District Literacy Rate : "<<endl;
		cin>>literacy_rate;
		cout<<"--------------------------------"<<endl;
	}

	void district :: display()
	{

	   cout<<setw(10)<<d_code<<setw(10) <<d_name<<setw(12) <<area_sqft<<setw(12) <<population <<setw(14)<<literacy_rate<<endl;
	}

int main()
{
	int i, n;
	clrscr();
	cout<<"How many district you want to enter : "<<endl;
	cin>>n;
	district d[2];
	for(i=0;i<n;i++)
	{
		d[i].getdata();
	}
	 cout<<"District Code" <<"\t"<<"Name"<<"\t"<<"Area Sqft"<<"\t"<<"Population"<<"\t"<<"Literacy Rate"<<endl;

	for(i=0;i<n;i++)
	{
	 d[i].display();
	}
	getch();
	return 0;
}
