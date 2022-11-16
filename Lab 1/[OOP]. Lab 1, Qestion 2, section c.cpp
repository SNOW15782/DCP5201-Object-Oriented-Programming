//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 1 
//Question 2
//Section c

#include <iostream>
#include <iomanip>
using namespace std; 

int main ()
{
	int count=0, number=0,total=0; 
	do
	{
		cout << "Enter a number: ";
		cin >> number;
		count++;
		total = total +number;
		
	}
	while (count<4);
	
	cout << "The total is "<<total;
	
	return 0; 
}
