//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 3 
//QUESTION 3
//SECTION B

#include<iostream>
using namespace std;

class Purchase
{ 
private: 
char name [50];
char code [50];
int qty;
float price; 
float total; 

public:

//Set all the data to the appropriate variable
//Display the key in here 
void set_data()
{
//Enter name 
cout << "Enter Name	: ";
cin >> name; 

//Enter product code 
cout << "Product Code	: ";
cin >> code; 

//Enter quantity
cout << "Enter Quantity	: ";
cin >> qty;

//Enter price 
cout << "Enter Price	: RM ";
cin >> price; 
	
}

//Calculate the total amount of payment to be made 
void calculate ()
{
	total = qty * price;
}

//PRINT FOR RECEIPT SECTION 
void print ()
{
cout << "========================\n";
cout << "RECEIPT\n";
cout << "========================\n";

//NAME CALL
cout << "Name		: "<< name<< endl; 

//PRODUCT CODE CALL
cout << "Product Code    : "<<code<< endl; 

//QUANTITY CALL 
cout << "Quantity	: "<<qty<< endl; 

//PRODUCT PRICE CALL 
cout << "Product Price	: RM "<<price<< endl;
 
//TOTAL PRICE CALL 
cout << "Total Payment	: RM "<<total<< endl; 
}

};

int main()

{ 
Purchase p;
char another_customer;

do{

cout << "========================" <<endl;
cout << "	WELCOME" << endl;
cout << "========================" <<endl;

p.set_data();
p.calculate();
p.print();

cout << "You have another customer to purchase item? [Y/N]: "; 
cin >> another_customer; 

}while (another_customer == 'Y');
return 0;
}
