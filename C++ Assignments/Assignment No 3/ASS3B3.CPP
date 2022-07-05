#include<iostream>
#//include<conio.h>
using namespace std;
class jwellery
{
	int j_code;
	char j_name[20];
	float j_price;
	static int count;
	public:
	void getdata()
	{
		cout<<"Enter Jwellery code";
		cin>>j_code;
		cout<<"Enter jwellery name";
		cin>> j_name;
		cout<<"Enter jwellery price";
		cin>>j_price;
	}
	void display()
	{
		cout<<"\nNumber of object "<<j_code<<"\nJwellery name"<<j_name<<"\njwellery price"<<j_price;

	}
	void setcode()
	{
		j_code=++count;
	}
      static void showcount()
      {
	cout<<"\nNumber of object created"<<count;
      }
      };
      int jwellery::count;
    int main()
    {
	//clrscr();
	jwellery j1,j2;
	j1.setcode();
	j2.setcode();
	j1.getdata();
	j2.getdata();
	j1.display();
	j2.display();
	jwellery::showcount();
	return 0;
//	getch();

    }
