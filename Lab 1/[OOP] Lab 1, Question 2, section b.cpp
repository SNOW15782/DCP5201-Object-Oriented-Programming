//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 1 
//Question 2
//Section b

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int number, evencount = 0, oddcount = 0, total = 0;
	
	for(int i=0; i<10; i++)
	{
		cout << "Enter a number : ";
		cin >> number;
		
		if(number%2 == 0)
			evencount++;
			
		else
			oddcount++;
			
		total +=number; 
		
	}
	
	cout <<"\nThere are "<<evencount<<" even numbers and "<<oddcount<<" odd numbers.\n";
	cout << "The total of all 10 numbers are "<<total; 

}
