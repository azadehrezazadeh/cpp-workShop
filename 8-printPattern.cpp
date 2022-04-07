#include<iostream>
using namespace std;

int main ()
{

	for(int i=1;i<=4;i++)
	{
		if (i%2==0)
			cout <<" ";
			
		for(int j=1;j<=5;j++)
			cout<<"*";
		cout<<endl;
	}
	
	return 0;
}
