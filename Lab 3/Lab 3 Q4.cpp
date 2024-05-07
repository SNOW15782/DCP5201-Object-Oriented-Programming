//MUHAMAD ARIF BIN SALLEHUDD
//LAB 3 
//Q4 

#include<iostream>
 
using namespace std;
 
//constant global variable
const int SIZE = 8;
 
//define class object
class Stationary_Inventory
{	//define private data members
	private:
		string name;
		int warehouses[SIZE];
	//define public member functions
	public:
		//display array elements in reverse order using looping structure
		void display_reverse()
		{
			int i;
		    int j=0;
		    cout<<"\n-------------------------------"<<endl;
		    cout<<"       The Inventory Info        "<<endl;
		    cout<<"---------------------------------"<<endl;
		    cout<<"Stationery code :"<<name<<endl;
		    //decremental indexing to display last data in warehouse array first
		    for(i=SIZE-1; i>=0; i--)
	        	cout<<"Warehouse "<<++j<<"\t:"<<warehouses[i]<<endl;
		}
		//setting data of private data members with pointer argument
		void set_data(int *p)
		{
			int i;
		    cout<<"\n######################################"<<endl;
		    cout<<"         Item Entry                   "<<endl;
		    cout<<"--------------------------------------"<<endl;
		    //get user input for code name
		    cout<<"Enter Stationery code :";
		    cin>>name;
		    //for loop to initialize warehouses array with pointer input
		    for(i=0; i<SIZE; i++) 
          		warehouses[i] = *(p+i);
 
		}
} hold; //declare global object
 
//define process function
void process()
{
	cout<<"      Colourful Book Holder Stock     "<<endl;
  	cout<<"--------------------------------------"<<endl;
  	//get user to input 8 values to be stored in local array
  	cout<<"Enter the stocks for 8 warehouses   :"<<endl;
  	int arr[SIZE]; //initialize local array
  	for(int i=0; i<SIZE; i++)
	{ 
		cin>>arr[i];
	}
	//call member functions of global object
	hold.set_data(arr);
	hold.display_reverse();
}
 
int main()
{	//declare object of class
	Stationary_Inventory Stat;
	//declare array of 8 integer elements and initialize
	int array[SIZE] = {5,10,15,22,20,25,30,35};
	//set data of object using array by calling member function
	Stat.set_data(array);
	//call object member function to display data in reverse
	Stat.display_reverse();
	//call process function to set and display data of global object
	process();
}
