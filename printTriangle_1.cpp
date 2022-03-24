#include <iostream>
using namespace std;

 /*------------------------------
 cpp-workshop : session3-2-1
 problem :print triangle_1 
 --------------------------------*/
 
int main() {	

int x;
 cin >> x;
 
 for (int r=1;r<=x;r++){
 	for (int j=1;j<=r;j++)
 		cout<<'*';
 	cout<<endl;
 }
  return 0;
}