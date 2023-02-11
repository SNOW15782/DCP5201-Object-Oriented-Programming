//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 13
//Q1 

#include <iostream>
#include <iomanip>
using namespace std; 

class Rice 
{
	float price_per_kg, total_weight;
	
	public:
		//constructor with parameter
		Rice (float w)
		{
			price_per_kg = 10.0; 
			total_weight = w; 
		}
		
		void display_rice()
		{
			cout<<"----------------------------------------"<<endl;
			cout <<"\tRice Details"<<endl;
			cout <<"Total weight\t: "<<total_weight<<endl; 
			cout <<"Price perkg (RM): "<<price_per_kg<<endl;
			cout <<"Total (RM)\t: "<< total_weight * price_per_kg <<endl; 
			
		}
};

class Product 
{
private:
	float kg; 
	
public: 
	//constructor+ parameter, product reference object  
	
	Rice operator+(const Product &p)
	{
		//rice as Rice object whose total_weight is addition of the weight (kg) of 2 product object 
		//p is object 
		//function overload 
		return Rice(kg+p.kg);
	}
	
	void setData()
	{
		//get user input for product's kg (weight) 
		cout<< "Enter product's weight (kg): ";
		cin >> kg; 
	}
	
};

int main ()
{
	//declare product a and product b 
	Product a,b; 
	//call set data each object 
	a.setData();
	b.setData();
	//delcare rice as h + result a's add wit b's kag 
	//fucntion overloading 
	Rice h = a+b ; 
	
	//display h details by calling display_rice()
	h.display_rice();
	
	return 0;
}

