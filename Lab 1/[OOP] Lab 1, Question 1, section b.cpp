//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 1 
//Question 1
//Section b

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	float day1, day2, total;
	cout << "Enter the sales for day 1 : ";
	cin >> day1;
	
	cout << "Enter the sales for day 2 : ";
	cin >> day2;
	
//calculation
	total = day1 + day2; 

//Output 

	cout << "\nQtech Sdn. Bhd Sales figures for 2 days";
	cout << "Day 1 \t: "<<fixed<<setprecision(2) << day1 <<endl;	
	cout << "Day 2 \t: "<<fixed<<setprecision(2) << day2 <<endl;
	cout << "Total \t: "<<fixed<<setprecision(2) << total <<endl;
	
	return 0; 

}
