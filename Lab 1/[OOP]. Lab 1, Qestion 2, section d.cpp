//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 1 
//Question 2
//Section d

#include <iostream>
#include <iomanip>
using namespace std; 

int main ()
{
	//name need to put as char otherwise it will infinite loop
	char ans, flavor,C,V,S,name [99];
	int quantity;
	float price,total_price=0;
	
	cout << "Welcome to Yummy Ice-Cream";
	cout << "\n******Ice-Cream Flavor*********** \n";
	cout << "[C] Chocolate \n";
	cout << "[V] Vanilla \n";
	cout << "[S] Strawberry \n";
	
	cout << "Enter name       : ";
	cin >> name;
	
	//do while loop to so it can be re-enter if customer press Y
	do
    {
        cout<<"Enter flavor     : ";
        cin>>flavor;	
        
        // if incorrect flavor. goest back looping
        while(flavor!='C'&&flavor!='V'&&flavor!='S')
        {	
        	cout<<"\nIncorrect flavor.Re-Enter flavor     : ";
    		cin>>flavor;
    	}
    	
    	//next line once correct 
		cout<<"Enter quantity   : ";
            cin>>quantity;
	
		//choose flavor
		switch(flavor)
		{
		case 'C': price = 3.5;
			break;	
		
		case 'V': price = 3.0;
			break; 
		
		case 'S': price = 2.5; 
			break;
		}
	
	//calculation part = total = price * quantity
		total_price += price*quantity;
	
		cout << "\nDo you want to buy more? <Y-Yes N-No> : "; 
		cin >> ans; 
	
	//do-while bascially goes back to line 27, do not misread 
	}while (ans == 'Y');
	
		cout << "\n************RECEIPT***********" << endl;
		cout << "\nName : "<< name; 
		cout << "\nTotal price :RM "<<fixed<<setprecision(2)<< total_price ; 	

return 0;
}
