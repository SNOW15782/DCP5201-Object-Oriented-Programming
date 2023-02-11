#include <iostream>
#include <iomanip>
using namespace std;

class Produce
{
//private member
private: 
	float price, total;
	int qty; 

//public member 
public: 
	//constructor default 
	Produce()
	{
		price = total = qty = 0;
	}
	//define set_input 2 parameter from main and initializes them to price qty 
	
	set_input(float price, int qty)
	{
		price = price;
		qty = qty;
		
		//calculate total 
		total = price * qty; 
	}
	friend class Bill;
};

class Bill 
{
//private member
private:
	float grand_total;
	
//public member
public: 
	//constructor default 
	Bill()
	{
		grand_total = 0; 
	}
	
	void display()
	{
		cout << "::The grand total of the bill is: RM";
		cout<<fixed<<setprecision(2)<<grand_total <<endl;
	}
	
	//define the overloaded += function whic adds product object 
	void operator+=(const Produce &p)
	{
		grand_total +=p.total;
		cout << "Subtotal\t:RM "<<p.total <<endl; 
	}
};

int main ()
{
	Bill bl; 
	Produce pd; 
	float price; 
	int quantity; 
	char in; 
	
	do{
   	cout << "\nEnter price:\tRM ";
    cin >> price;
    cout << "Enter quantity:\t";
    cin >> quantity;
    pd.set_input(price, quantity);
    bl += pd;
    cout << "Continue? (y/n) ";
    do{
	 cin >>in;
    
	} while ((in!='n') && (in!='y'));
  	
	  } while (in=='y');
	
	bl.display(); 
}
