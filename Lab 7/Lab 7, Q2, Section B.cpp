//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 7
//QUESTION 2
#include <iostream>
#include <iomanip>
using namespace std; 

class IceCream
{
	private:
		string flavour;
		int number;
		float price; 
	
	public:
		void menu();
		void setflavour ();
		void setHowMany ();
		friend void display_receipt (IceCream); //friend function 
		//constructor default
		IceCream();  
};
//Function outside of the class
void IceCream::menu()
{
cout << "\n==========================================="<<endl;
cout << "=== CHOOSE FLAVOUR==="<<endl;
cout << "\n==========================================="<<endl;

cout <<"[1]=== Strawberry Flavour RM 3.50"<<endl;
cout <<"[2]=== Chocolate Flavour RM 2.50"<<endl;
cout <<"[3]=== Vanilla Flavour RM1.50"<<endl;
cout <<"[4]=== Durian Flavour RM 0.50"<<endl;
}

//Get user's choice, use switch statement
void IceCream::setflavour()
{
int choice;
cout <<"\nChoice of flavour: ";
cin >> choice;

switch (choice)
	{
		case 1: flavour = "Strawberry";price = 3.50; break;
		case 2: flavour = "Chocolate"; price = 2.50; break;
		case 3: flavour = "Vanilla"; price = 1.50; break;
		case 4: flavour = "Durian"; price = 0.50; break; 
	}	
}

void IceCream::setHowMany()
{
	cout << "How many: ";
	cin >> number; 
}

IceCream:: IceCream () //NO VOID FOR CONSTRUCTOR
{
	cout << "BARNEY'S HOUSE OF ICE";
}

void display_receipt (IceCream IC) // friend function accepting object
{
	cout << "\n==========================================="<<endl;
	cout << "===PAYMENT==="<<endl;
	cout << "Flavour\t\t: "<<IC.flavour<<endl;
	cout << "Total Price\t: RM "<<fixed<<setprecision(2) <<IC.price*IC.number<<endl;
	
}

int main ()
{
	IceCream IC; //declare class object
	IC.menu(); //call member function to show menu
	IC.setflavour(); //call member function to select falvour
	IC.setHowMany(); //call member function to set amount
	display_receipt (IC); //call friend function to print receipt 

return 0;
}
