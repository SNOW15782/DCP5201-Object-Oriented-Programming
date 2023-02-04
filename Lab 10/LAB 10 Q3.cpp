//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 10 
//QUESTION 2
//SECTION A 

#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Number 
{
	//declare private member
	private: 
	int no, index, sample, numbers;
	
	public: 
	//define default constructor 
	Number() 
	{
	cout << "\tNUMBERS :: Let's PLAY"<<endl;
	cout << "==========================================="<<endl;
	}
	
	//define smallesNumb, pass 3 parameters 
	SmallestNumb (int numb[],int element,int size)
	{
		//element to index 
		element = index;
		//size to sample
		size = sample; 
		//no = numb[element] 
		no = numb[element];
	
	//for loop 
	for (int i=element+1;i<size;i++)
	{
		//value is smaller than current value
		if (no>numb[i])
		{
			index = i;
			no = numb[i]; 
		}
	}
	//return the index of the smallest integer.
	return index; 
	}
	
	select_Number(int numbers[],int size)
	{
	//declare two attribute for sorting 
	int digit, sort; 	
	
	for (int i = 0; i<size-1; i++)
	{
	//call smallestNumb function as a digit value 	
	digit = SmallestNumb (numbers,i,size); 
	
	//perform swaping if select value is smaller than current
	if(numbers[i]>numbers[digit])
	{	//swapping process
		sort = numbers[i]; //store current value
		numbers[i] = numbers[digit]; //replace with smallest value
		//replace smallest value position with stored current value
		numbers[digit] = sort;
	}
	//display sequence of elements for sorting cycle
	cout << "The Cycle" <<i+1 <<"sorting: ";
	for (int j=0; j < size; j++)
	{
		cout <<" "<<numbers[j];
		cout <<endl; 
	}
	
	}
	
	}

	
}; 


int main ()
{
	//create an object for class Number
	Number N; 
	int in; 
	//prompt user to enter the numbers to be sorted 
	cout << "How many numbers would you like to be sorted: ";
	cin >> in; 
	
	//declare dynamic array named numbers 
	int *numbers = new int[in]; 
	
	cout << "The "<<in<< "numbers are: "<<endl; 
	
	//for loop it
	for(int i=0;i<in;i++)
	{
	cin>>numbers[i];
	}
	//Call select_Number function	
	N.select_Number(numbers, in); 
	
	cout<<"\nThe final list of sorted numbers is:"<<endl;
	for(int j=0;j<in;j++)
	{
		cout<<numbers[j]<<" ";	
	}
	delete []numbers; 
	
	return 0;	
}
