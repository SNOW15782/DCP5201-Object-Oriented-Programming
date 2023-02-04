//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 11
//Q1

#include <iostream>
#include <cmath>
using namespace std; 

//create class Triangle
class Triangle 

{
protected: 
int a, b, c; 
	
public:
	Triangle()
	{		
	cout << "---Triangle Class---"<<endl;
	}
	
	//to set data member a and b with the value of its arguments 
	void setData(int in_a, int in_b)
	{
	//mutator 	
	a = in_a;
	b = in_b;
	}
};
//Create class PythagorasTriangle which inherits publicly from class Triangle.
//use inheritance 
class PythagorasTriangle: public Triangle 
{
public: 
	pythagorasTriangle()
	{cout<<"-------Pythogoras Triangle -------."<<endl;}
	
	
	void calcHypotenuse()
	{
	 //calculate hypotenuse 
	 c = sqrt(pow(a,2)+pow(b,2));
	}
	
	//display values of a,b and c
	void displaySlides()
	{
		//display values of a,b and c
		cout <<"::The sides of a Pythagoras triangle::"<<endl;
		cout << "a: " <<a<<endl; 
		cout << "b: " <<b<<endl; 
		cout << "c: " <<c<<"(also known as the Hypotenuse)"<<endl;
	}
};

int main ()
{
	//create an object of class Pythagoras Triangle using the new operator
	PythagorasTriangle *pt = new PythagorasTriangle; 
	
	int var_a, var_b; 
	//prompt user to enter values for side
	
	cout << "Enter a: ";
	cin >> var_a; 
	
	cout << "Enter b: ";
	cin >> var_b; 
	
	//call mutator function to set values to object
	pt->setData(var_a,var_b);
	
	//call method to calculate hypotenuse
	pt->calcHypotenuse();
	
	//call method to display values of triangle
	pt->displaySlides(); 
	
	//delete dynamic object
	delete pt; 
}
