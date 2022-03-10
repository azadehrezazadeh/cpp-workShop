#include<iostream>
using namespace std;
 /*------------------------------
 cpp-workshop : session2
 problem : calculate fuel consumption of car per distance
 written by M.Hosseini
 --------------------------------*/
 int main(){
	
	int distance,fuel;

	
	cout<<"Enter the distance= "<<endl;
	cin>>distance;
	cout<<"Enter the fuel="<<endl;
	cin>>fuel;
	
	float percent=100*fuel/distance;
	
	cout<<"percent:"<<percent<<endl;
	
	char resalt;
	
	if(percent<=8)
		resalt='A';	
	else if (percent>8 && percent<=10)
		resalt='B';
	else if (percent>10 && percent<=20)
		resalt='C';
	else 
		resalt='D';

	cout<<"Group type= "<<resalt<<endl<<endl<<endl;
	
	
	switch (resalt)	{
	
	
	case  'A':
		percent*=3;
		cout<<"Group A fuel card is calculated three times ="<<percent<<endl<<endl<<endl;
		break;
		
	case 'B':
 		percent*=2;
 		cout<<"Group B fuel card is doubled="<<percent<<endl<<endl<<endl;
 		break;

}
	
	
	cout<<"Maryam_Hossini";
	return 0;
	
}