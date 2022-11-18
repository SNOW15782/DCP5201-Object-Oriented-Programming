//Muhamad Arif Bin Sallehuddin
//Lab 1
//Qestion 3
//section a

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	const int NUM_EMPS = 5;
	int index;
	int hours[NUM_EMPS];
	double payRate[NUM_EMPS];
	double grossPay;
	cout << "Enter the hours worked and hourly pay rates of " 
	<< NUM_EMPS << "employees. \n";
	
	for (index =0; index < NUM_EMPS; index++ )
	{
	
	cout << "Hours worked by employee # "<<index+1<<": ";
	cin >> hours[index]; 
	cout << "Hourly pay rate for employee # " <<index+1<<": RM ";
	cin >> payRate[index]; 
	
	}
	
	cout << "Here is the gross pay for each employee : "<<endl;
	for (index =0; index < NUM_EMPS; index++ )
	{
		//calculation 
		//2.40 pay * 10 hour work = ans 
		
		grossPay = payRate [index]* hours [index];
		cout<< "Employee # "<<index+1<<": RM "<<fixed<<setprecision(2)<<grossPay<<endl;
	}
return 0;
}
