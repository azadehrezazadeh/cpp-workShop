 #include <iostream>
 using namespace std;
 
 /*------------------------------
 cpp-workshop : session2
 problem : calculate salary of employee per month + tax
 written by R.Nekouei
 --------------------------------*/
 
 int main() {	
 
 	int week_hour,exc_hour;

	const int per_hour=20000;	
	const float exc_per_hour=per_hour*1.5;	
	
	float total;
	float tax;
	
	cout<<"per_hour : "<<per_hour<<endl;
	cout<<"exc_per_hour : "<<exc_per_hour<<endl;
	cout << "Please enter your hours in week : ";
	cin >>week_hour;
	cout <<"\n -------------------------\n" <<endl;
	
	
	if (week_hour>40)
	{
		exc_hour=week_hour-40;	
	 	total=40*per_hour+exc_hour*exc_per_hour;		
	}
	else
	{		
		total=week_hour*per_hour;		
	}	
		 					
	cout<<"total per week : "<<total<<endl;
	
	total= total*4;	
	cout<<"total: per month : "<< total <<endl;
	
	if (total<=4000000 )
		tax =0 ;
	else if (total>4000000 && total<=8000000 )
		tax=(total-4000000)*0.1;
	else 
		tax= (total-8000000)*0.15 + (4000000)*0.1;


	total -= tax;
	
	cout<<"tax: "<<tax <<endl;
	cout<<"total: "<<total <<endl;

	return 0;
	}
	