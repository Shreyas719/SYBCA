#include<iostream.h>
#include<conio.h>
#include<string.h>
class person
{
	char name[20];
	char city[20];
	char mno[10];
	public:
	void accept()
	{
		cout<<"Enter name"<<endl;
		cin>>name;
		cout<<"Enter city"<<endl;
		cin>>city;
		cout<<"Enter mno"<<endl;
		cin>>mno;
	}
	void display()
	{
		cout<<"\n name of person"<<name<<endl;
		cout<<"\n city "<<city<<endl;
		cout<<"\n mobile number"<<mno<<endl;
	}

	int display(char a[])
	{
		if(strcmp(name,a)==0)
		{
			cout<<mno;
			return 1;
		}
		return 0;
	}
	int display(char mbno[],int no)
	{
		if(strcmp(mno,mbno)==0)
		{
			display();
			return 1;
		}
		return 0;
	}
};


void main()
{
	clrscr();
	int n,i,cnt=0,ans;
	char sname[20],mbno[12];
	person ob[20];
	cout<<"Enter no of person";
	cin>>n;
	for(i=0;i<n;i++)
	{
		ob[i].accept();
	}
	for(i=0;i<n;i++)
	{
		ob[i].display();
	}
       cout<<"Enter the name of person to be searched";
       cin>>sname;
       for(i=0;i<n;i++)
       {
	ans=ob[i].display(sname);
	if(ans==1)
	cnt++;
       }
       cout<<"Enter the moblie number to be searched";
       cin>>mbno;
       cnt=0;
       ans=0;
       for(i=0;i<n;i++)
       {
	ans=ob[i].display(mbno,1);
	if(ans==1)
	cnt++;

       }
       getch();
}