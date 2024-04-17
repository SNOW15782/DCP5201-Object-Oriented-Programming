//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 1 
//Question 2
//Section a

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int reg_hours = 40, total_hours, OT_hours;
    float OT_rate = 24.35, base_rate = 18.50, reg_wages, OT_wages, total_wages; 
	
	cout << "Please enter total hours you've worked this week: ";
	cin >> total_hours;
	
	if (total_hours > 40)
	{
		OT_hours = total_hours - reg_hours;
	}
	else
	{
		OT_hours = 0;
		reg_hours = total_hours; 
	}
	
	//calculate wages 
	
	reg_wages = base_rate * reg_hours;
	OT_wages = OT_rate * OT_hours; 
	total_wages = reg_wages + OT_wages;
	
	
	//output 
	cout << "Wages for this week are: MYR "<<total_wages << endl;
	return 0; 
}
