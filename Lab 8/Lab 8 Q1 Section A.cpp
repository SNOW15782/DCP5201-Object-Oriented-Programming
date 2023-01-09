#include <iostream>
#include <cmath>
using namespace std;

class geometry
{
	private : 
	float pi, height, radius;
	
	public:
		//--1--
		//define a paramameterized constructor that take in two float parameters
		geometry (float hg, float rd)
		{
			//pi = M_PI;
			height = hg;
			radius = rd;
		}
		//--2--
		//define a destructor that display on the output screen 
		~geometry ()
		{
			cout << "= END OF PROGRAM = ";
		}
		//--3--
		//Declare Cylinder as a friend. 
		friend class cylinder;
		
		//--4--
		//Declare Cone as a friend 
		friend class cone; 
		
};

class cylinder
{
	private:
		float vol; 
		
	public:
		//--5---
		//define function calc_vol for class cyliner.
		void calc_vol(geometry *g) //class and pointer parameter 
		{
			//use -> operator calculte the volume of the cylinder
			vol = g->pi * g->radius * g->height;
			
			//display output 
			cout << "\nVolume of cylinder with radius ";
			cout << (*g).radius << " and height ";
			cout << (*g).height << " is: "<<vol<<endl;
		}
};

class cone
{
	private:
		float vol;
	
	public: 
	//--6--
	void calc_vol (geometry &g)	//reference argument g of class geometry
	{
		vol = g.pi * g.radius * g.height/3; //calculation 
		//display
		cout << "\nVolume of cone with radius ";
		cout << g.radius << " and height ";
		cout << g.height << " is: "<<vol<<endl;
	}
};

int main ()
{
	float hg, rd;
	cout << "Enter height: ";
	cin >> hg;
	cout << "Enter radius: ";
	cin >> rd;
	
	//--7--
	geometry gmt (hg,rd); //delcare object gmt, hg and rd as parameter

	//--8--
	cylinder cyc; //declare object cyc of class cylinder 
	
	//--9--
	cyc.calc_vol(&gmt); //call object cyc_vol method, passing in address of object gmt

	//--10--
	cone cn; //delcare object cn of class cone 
	
	//--11--
	cn.calc_vol(gmt); 	//call object cn calc_vol passing in object gmt
} 

