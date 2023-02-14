//MUHAMAD ARIF BIN SALLEHUDD
//LAB 3 
//Q4 

#include <iostream>
using namespace std; 

//global size = 8 
const int SIZE = 8;

class Stationery_Inventory
{
	//private member 
	private: 
	string code;
	int warehouses [SIZE]; 
	
	//public member 
	public: 
	
		void display_reverse()
		{
			//looping structure 
			//decrement 
			//display the array elements of warehouses in reverse order using any looping strucutre 
			for (int i = SIZE - 1; i>= 0 ; i--) 
			{
				cout << warehouses[i] << " "<<endl; 
			}
		}
	//function has a pointer argument 
	void set_data (int* arr)
	{
		//get user input for code name 
		cout << "Enter Stationery Code: ";
		cin >> code; 
		for (int i = 0; i< SIZE; i++)
		{
			//use the pointer argument to initialize warehouses array
			warehouses[i] = *(arr+i); 
		}
	}

	
}; //global object delcarion, hold 
Stationery_Inventory hold; 

void process ()
{
	int arr [SIZE];
	//gt user input for 8 values that should stored in a local array 
	cout << "Enter the stocks for 8 warehouses: "; 
	for (int i = 0; i < SIZE; i++)
	{
	cin >> arr[i]; 	
	}
	//using global object hold, call function set_data(...), passing the array and call display_reverse()
	hold.set_data (arr); 
	hold.display_reverse();
	
}

int main ()
{
	//declare an object at class above 
	Stationery_Inventory obj; 
	int arr [SIZE] = {5,10,15,22,20,25,30,35};
	obj.set_data (arr);
	obj.display_reverse();
	
	//call process 
	process (); 
	
	return 0; 
}
