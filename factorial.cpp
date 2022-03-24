#include <iostream>
using namespace std;
 /*------------------------------
 cpp-workshop : session3-3
 problem : calculate factorial
 written by A.Dehghani
 --------------------------------*/
 
int main() {	

int n,factorial;

cout<<"Enter numer to show n! \n";
cin >> n;

if (n==0)
 factorial=1;
else
{
	factorial= n;
    while(n>1)
    {
 	     	n--;
 	    	factorial = factorial * n;
    }
}

cout << "factorial is " <<factorial;
  return 0;
}