//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 3 
//QUESTION 1
//SECTION A

#include<iostream>
using namespace std;

//class 
class TravelPackage
{
public:
	char package;
	int noAdult, noChild;
	float adultPrice, childPrice, discount, totalPrice;
};

int main ()
{
	//class to object 
	TravelPackage Tp; 
	
	//do...while loop 
	do {
	
	cout << "Select Travel Package <A,B,C>: ";
	cin >>Tp.package;
	
	if 	(Tp.package != 'A' && Tp.package!= 'B' && Tp.package!= 'C')
	cout << "Invalid Selection."<<endl;
	
	}while(Tp.package != 'A' && Tp.package!= 'B' && Tp.package!= 'C');
	
	//switch statement 
	switch (Tp.package)
	{
		case 'A':
		Tp.adultPrice = 1000.00;
		Tp.childPrice = 500.00;
		break;
		
		case 'B':
		Tp.adultPrice = 800.00;
		Tp.childPrice = 600.00;
		break;
		
		case 'C':
		Tp.adultPrice = 500.00;
		Tp.childPrice = 300.00;
		break;
	}
	// Enter no of adult
	cout << "Enter number of Adults: ";
	cin >> Tp.noAdult;
	
	//Enter no of Children
	cout << "Enter number of Children: "; 
	cin >> Tp.noChild;
	
	//CALCULATION PART 
	Tp.totalPrice =Tp.noAdult * Tp.adultPrice + Tp.noChild * Tp.childPrice ;
	
	
	//20% Discount Applied (100% - 20% = 80% * total price) 
	if (Tp.totalPrice > 3000.00)
	Tp.totalPrice = Tp.totalPrice * 0.8;
	
	//OUTPUT 
	cout << "Total price RM "<<Tp.totalPrice<<endl;
	
	return 0; 
}
