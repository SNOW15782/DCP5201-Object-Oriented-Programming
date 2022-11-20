//Muhamad Arif Bin Sallehuddin
//LAB 3
//Question 3
//Section b

#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
	int num [2][3] = {{10,20,30},{40,50,60}};
	int counti;
	int countj; 
	
	for (counti=0; counti<2;++counti)
	{
		cout<<"\nRow "<<counti + 1<<":";
		for (countj = 0; countj < 3; ++countj)
		{
			cout<<setw(7)<<num[counti][countj];
		}
	}
}
