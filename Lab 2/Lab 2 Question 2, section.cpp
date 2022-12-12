//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 2

#include <iostream>
#include <cmath>
using namespace std; 


//cmath for using math power function 
//function prototype
double bb_4ac();
double get_a_b_c (double&, double&, double&);


//function definition
//equation for discriminant
double bb_4ac( ) 
{ 
        double a, b, c;  // Coefficients of a quadratic equation 
    	get_a_b_c(a, b, c);
        return b*b - 4*a*c; 
}

//function definition 
//get abc function 
// return as This function calls on another function called get_a_b_c  
double get_a_b_c(double &a,double &b,double &c)
{
		cout << "Enter a, b and c: ";
		cin >> a >> b >> c;
		return a,b,c;
}

//main
int main ()
{
		double discriminant;
		discriminant = bb_4ac();
		cout << "The discriminant is "<<discriminant;
		return 0; 
}
