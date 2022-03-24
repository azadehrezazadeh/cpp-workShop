#include <iostream>
using namespace std;
 /*------------------------------
 cpp-workshop : session3-1
 problem :print square 
 written by M.Ebrahimpour
 --------------------------------*/
 
int main() {	

int x;
 cin >> x;
 
 for (int i=1;i<=x;i++){
 	
 	if (i==1 || i == x )
 	{
 		for (int j=1;j<=x;j++)
 			cout <<'*';
 		cout<<endl;
	}
	else
	{
		cout<<'*';
		for (int j=2;j<=x-1;j++)
 			cout <<' ';
 		cout<<'*'<<endl;
 		
	}
	 
 }
  return 0;
}