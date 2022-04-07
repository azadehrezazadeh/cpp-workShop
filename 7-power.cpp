#include<iostream>
using namespace std;

int main ()
{
	int x,y,s=1;
	
	cout <<"enter x,y :";
	cin >>x>>y;
	
	for(int i=0;i<y;i++)
	{
		s*=x;
	}
	
	cout <<"\n x power of y : "<< s;
	return 0;
}
