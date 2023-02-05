//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 11
//Q3 

#include <iostream>
using namespace std; 
//create class product 
class Product 
{
//private member 
private : 
	int prodID; 

//protected member 	
protected : 
	float total_price;

//public member 
public : 
	///default constructor to initialize total_price
	Product ()
	{
		total_price = 0.0; 
	}
	//getter or mutator
	//return can prodID
	int getprod_ID()
	{	return prodID; }
	
	//get user key-in for prodID
	void input_prodID()
	{
		cout << "\n\nEnter product ID: ";
		cin >> prodID; 
	}
}; 

//create class CanFood 
//inheritance protected 
class CanFood : protected Product 
{
	//private member
	private: 
	float unit_price;
	int order_unit; 
	
	//public member
	public:
		
		void get_Product()
		{
		//call input_productID
		input_prodID(); 
		
		//input for unit_price 
		cout << "Enter price\t: RM";
		cin >> 	unit_price;
		
		//input for order_price 
		cout << "Enter order unit\t: ";
		cin >> order_unit; 
		}

		//Calculate unit price 
		void calculate_Total()
		{
		//calculate total price 
		total_price = unit_price * order_unit; 	
		}
		//display prodID by calling accessor function 
		void display_product()
		{
		 cout << "\nProduct ID\t: "<<getprod_ID() <<endl;
		 cout << "Total Price\t: RM"<< total_price<<endl;
		}
};	

int main ()
{
	int in; 
	cout << "How many types of Canned Food\t: "; 
	cin >> in; 

	CanFood *tp; 
	//dynamic array using new operator
	tp = new CanFood [in];
	
	for (int i = 0; i < in ; i++)
	{
	//use tp as declared in pointer to increment 
		tp[i].get_Product();
		tp[i].calculate_Total(); 
	}
	for (int i = 0; i < in; i++)
	{
		tp[i].display_product();
	}

//delete the memory of the dynamic 
delete []tp; 

return 0; 
}


