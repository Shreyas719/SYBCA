#include<iostream>
using namespace std;

int main()
{
	int k=1,rows=4;
	
	for(int i=1;i<=rows;i++)
	{
		for(int j=1; j<=i;++j)
		{
			cout<<k<<ends;
			++k;
		}
		cout<<endl;
	}
	
	return 0;
}

