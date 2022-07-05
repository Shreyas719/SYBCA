#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"Enter the number : "<<endl;
	cin>>num;
	cout<<"Multiplication :- "<<endl;
	for(int i=1;i<=10;i++)
	{
		cout<<num <<" * "<<i<< " = " <<i*num<<endl;
	}
	return 0;
}
