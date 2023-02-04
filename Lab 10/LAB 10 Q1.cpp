//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 10 
//QUESTION 1
//SECTION A 

#include <iostream>
using namespace std; 

int main ()
{
	int subject, num;
	float total_payment, average_payment; 
	float *fees; 
	
	//Fill in the blanks 
	//Display how many subject 
	cout << "How many subject you have registered: ";
	cin >> subject; 
	
	//The dynamic array with new operator will be used to store the elements entered by user. 
	fees = new float [subject]; 
	total_payment = 0; 
	
	//FOR LOOP
	for (num=0; num < subject; num++)
	{
		//Display Class 1,2,3 depend on subject registered 
		cout << "Class "<<num+1 << " fees charge: ";
		//fees goes to num array 
		cin >> fees [num]; 
		//calculate total payment 
		total_payment = total_payment + fees [num]; 
	}
 	//Display Fees Entered 
	cout << "\n===== SEPTEMBER 2022 PAYMENT DETAILS ====="<<endl<<endl;
	cout << "Fees charges you have entered: "; 
	//FOR LOOP TO DISPLAY THE CHARGERS 
 for (num=0; num < subject; num++)
	{
		//DISPLAY THE AMOUNT PAID EACH SUBJECT [ARRAY]
		cout << fees [num]<< " (RM)...";
	 
	}
	//Acumulate average payment 
	average_payment = total_payment / subject; 
	
	//display the total payement & minimum payment  
	cout << "Total payement to be made: RM " <<total_payment << endl;
	cout << "Minimum payement (Average of total payment): RM "<< average_payment<<endl;
	
 return 0; 
 } 
