#include <iostream>
using namespace std;

 /*------------------------------
 cpp-workshop : session3-2-2
 problem :print triangle_2
 --------------------------------*/
 
int main() {	

int x;
 cin >> x;
 
for (int r=x;r>=1;r--){
 	for (int j=1;j<=r;j++)
 		cout<<'*';
 	cout<<endl;
 }
  return 0;
}