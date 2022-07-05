#include<iostream.h>
#include<conio.h>

  class cylinder
  {
     private:
      int radius;
      int height;
     public:
	void setradius();
	void setheight();
	cylinder volume(cylinder);
	cylinder area(cylinder);

  };
       void cylinder :: setradius()
       {
	 cout<<"Enter the radius : "<<endl;
	 cin>>radius;
       }
       void cylinder :: setheight()
       {
	cout<<"Enter the height : "<<endl;
	cin>>height;
       }
       cylinder cylinder :: volume(cylinder c2)
       {

		int vol1, vol2;
		vol1=3.14 * radius * radius * height;
		cout<<"Volume of c1 is : "<<vol1<<endl;
		vol2=3.14 * c2.radius * c2.radius * c2.height;
		cout<<"Volume of c2 is : " <<vol2<<endl;
		return c2;
       }

       cylinder cylinder :: area(cylinder c2)
       {

		int area1, area2;
		area1=2*3.14 * radius * height + 2 * 3.14 * radius * radius;
		cout<<"Area of c1 is : "<<area1<<endl;
		area2= 2*3.14 * c2.radius * c2.height + 2 * 3.14 * c2.radius * c2.radius;
	       cout<<"Area of c2 is : "<<area2<<endl;
		return c2;
	       }
int main()
{
	clrscr();
	cout<<"*****   *****   *****   *****"<<endl;
	cylinder c1,c2;
	c1.setradius();
	c2.setradius();
	c1.setheight();
	c2.setheight();
	cout<<"Calculations:-"<<endl;
	c1.volume(c2);
	c1.area(c2);
	cout<<"*****   *****   *****   *****"<<endl;
	getch();
	return 0;
}