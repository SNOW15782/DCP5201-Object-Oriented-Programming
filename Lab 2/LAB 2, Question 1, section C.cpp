//MUHAMAD ARIF BIN SALLEHUDDIN
// LAB 2
// Question 1
// SECTION B

#include <iostream>
#include <math.h>

//function prototype
void kineticEnergy (double&, double&, double&);

using namespace std; 
//function definition
void kineticEnergy (double &m, double &v, double &KE)
{
	//pass the address value of m and v
	KE = 0.5* m * pow (v,2); 
}

//function call 
int main ()
{
	double mass;
	double velocity;
	double kEnergy; 
	
	cout << "Enter an object's mass and velocity as required...\n\n";
	cout << "Mass in Kilograms : ";
	cin >> mass;
	
	cout << "Velocity in meters per second : ";
	cin >> velocity;
	
	kineticEnergy(mass,velocity,kEnergy);
	 
	//call result calculation on kineticEnergy back
	cout << "The kinetic energy of this object is " << kEnergy <<" joules" << endl; 
	
}
