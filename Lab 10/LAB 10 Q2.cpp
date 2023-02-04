//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 10 
//QUESTION 2
//SECTION A 

#include <iostream>
#include <string>
#include <limits>
using namespace std;
//const global item with value 3
const int ITEM = 3; 

class BeanBag
{
	//private member name,stock 
	private: 
		string name;
		int stock [ITEM];
	
	//Latest_BeanBagStock and BeanBag_Details 	
	public: 
		void Latest_BeanBagStock()
		{
		//display #current #ready stocks 
		cout << "--------------------------------------"<<endl;
		cout << "#Current #Ready Stocks Checking... "<<endl;
		cout << "--------------------------------------"<<endl; 
		
		//code tracing 
		cout << "Code Tracing >>" << name << "<<"<<endl;
		for (int i = 0; i < ITEM; i++) 
		{
		//reverse indexing of array, so item minus -1 
		cout << "Group "<<i+1<<"production\t "<<stock [ITEM-(i+1)]<<" item(s) ready"<< endl; 
		}
		}
		
		void BeanBag_Details (int* bb)
		{
			//display header and stocks checking
			cout <<"\tCOSY Bean Bag Chair Sdn. Bhd."<<endl;
			cout <<"#######################################"<<endl; 
			cout <<"\tStocks Checking"<<endl;
			cout <<"---------------------------------------"<<endl<<endl<<endl; 
			
			//user input for code name 
			cout << "Enter Bean Bag Chair Code: ";
			getline (cin, name); 
			
			//in a for loop, use the pointer argument to initialize with stock Array 
			for (int i = 0; i < ITEM ; i++)
			{
				stock[i] = bb[i]; 	
			}
		}
}ready; //global object declaration

	void StockUpdate()
	{
		int *arr; 
		//refer the stockupdate at sample output 
		cout << "---------------------------------------"<<endl;
		cout <<"\tReady stocks for this Month "<<endl;
		cout << "---------------------------------------"<<endl;
		//dynamic array new operator 
		arr = new int [ITEM]; 
		for (int i = 0; i < ITEM; i++)
		{
		cout << "Ready stock from group "<<(ITEM-1)<<": ";
		cin >> *(arr+i); 
		cin.clear(); 
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		//using globa ready, call the function beanBag_Details(..)passing the array
		ready.BeanBag_Details(arr);
		//call beanBag_Stock() after that 
		ready.Latest_BeanBagStock();
		
		//delete the dynamic array created 
		delete [] arr; 
	}
int main ()
{
	BeanBag bg; 
	//declare an array of 3 integer elements and initialize {9,7,5}
	int val[ITEM] = {9,7,5}; //use new declare, put item as array cuz const 3 

	//using the object the array declare 
	bg.BeanBag_Details(val);
	
	//call object 
	bg.Latest_BeanBagStock();
	
	//call stockupdate 
	StockUpdate(); 
	
	return 0; 
}
