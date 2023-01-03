//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 7
//Q3
//SECTION A

#include <iostream>
using namespace std; 

class NumberGame 
{
	public:
		int array [5];
		//define default constrcutor to set array 
		NumberGame ()
		{
			array[0] = 15;
			array[1] = 20;
			array[2] = 33;
			array[3] = 38;
			array[4] = 100; 
		}
		//declare friend function with prototype
		friend void search (NumberGame, int*);
};

void search (NumberGame NG, int* num)
{
	int i = 0, end = 0;
	
	//do while loop 
	do{
	
	if(NG.array[i]==*num) //conditioner
		{
		end = 1; 
		}
	i++;//increment to index array 
	
	if(i==5)// number not found at the end of search
		
		{
			end = 1;
		}
	} while (end!=1); 
	
	if (i==5)
	{
		cout <<*num<<" is NOT found"<<endl; //number not in the array 
	}
	else 
	{
		cout <<*num <<" is found"<<endl; // number in the array 
	}
}

int main ()
{
	//class
	NumberGame g;
	int num; 
	cout <<"Enter a number: ";
	cin >> num;
	
	//function 
	search (g, &num);
	return 0; 
}
