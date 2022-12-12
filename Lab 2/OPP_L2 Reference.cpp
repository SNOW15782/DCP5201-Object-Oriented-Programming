
//QS1/////////////////////////////////////////////////////////////

//A//////////////////

/*
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

float kineticEnergy(float, float);

int main()
{
	float mass;
	float velocity;
	float KE=0;
	
	cout<<"Enter object's mass and velocity as required..."<<endl;
	cout<<"\nMass in kilograms: ";
	cin>>mass;
	cout<<"Velocity in meters per sencond: ";
	cin>>velocity;	
	
	KE = kineticEnergy(mass,velocity);
	
	cout<<"\n The kinetic energy of this objects is "<<KE<<" joules."<<endl;
	
}


float kineticEnergy(float m, float v)
{
	float KE,velocity;
	
	velocity = v*v;
	
	KE= m*velocity/2;
	//KE = (1./2.) * m * pow(v,2); //cmath
	
	return(KE);
	
}*/


//B/////////////////
/*
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

void kineticEnergy(double*, double*, double*);

int main()
{
	double mass;
	double velocity;
	double kenergy;
	
	cout<<"Enter object's mass and velocity as required..."<<endl;
	cout<<"\nMass in kilograms: ";
	cin>>mass;
	cout<<"Velocity in meters per sencond: ";
	cin>>velocity;	
	
	kineticEnergy(&kenergy, &mass, &velocity);
	
	cout<<"\nThe kinetic energy of this object is ";
    cout<<fixed<<setprecision(2)<<kenergy;
    cout<<" joules.";
	
}


void kineticEnergy(double *ke, double *m, double *v)
{
	
	*ke = 0.5 * *m * pow(*v,2); //cmath
	
}*/


//C/////////////[
/*
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

void kineticEnergy(double&, double&, double&);

int main()
{
	double mass;
	double velocity;
	double kenergy;
	
	cout<<"Enter object's mass and velocity as required..."<<endl;
	cout<<"\nMass in kilograms: ";
	cin>>mass;
	cout<<"Velocity in meters per sencond: ";
	cin>>velocity;	
	
	kineticEnergy(kenergy, mass, velocity);
	
	cout<<"\nThe kinetic energy of this object is ";
    cout<<fixed<<setprecision(2)<<kenergy;
    cout<<" joules.";
	
}


void kineticEnergy(double &ke, double &m, double &v)
{
	
	ke = 0.5 * m * pow(v,2); //cmath
	
}*/

//QS2//////////////////////////////////////////////////////////////////
/*
#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double get_a_b_c(double&, double&, double&);

double bb_4ac()
{
	double a, b, c; 
	//fx call
	get_a_b_c(a, b, c);
	//test input
	//cout<<"="<<a<<"="<<b<<"="<<c;
	//call
	return b*b - 4*a*c;
}

double get_a_b_c(double &a, double &b, double &c)
{
	cout<<"Enter a | b | c : ";
	cin>>a>>b>>c;
	
	return a,b,c;
}

int main()
{
	double discriminant = bb_4ac();
	
	cout<<"\nThe discriminant is "<<fixed<<setprecision(2)<<discriminant<<endl;
}*/


//Qs3////////////////////////////////////////////////////////////////////////////


//A//////////
/*
#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

//fx
float average(float*);
float greds(float);

int main()
{
	//input array 5
	//pass arr to avg
	//pass avg to grade
	//output dis
	
	float mark[5];
	string name;
	
	cout<<"Enter Name :";
	getline(cin, name);
	
	//mark input to arr
	for(int i=0; i<5; i++)
	{
		cout<<"Emter mark : ";
		cin>>mark[i];
	}
	
	//fx call
	float avgMark = average(mark);
	char gredMark = greds(avgMark);
	
	cout<<endl;
	cout<<"Name : "<<name<<endl;
	cout<<"Average : "<<fixed<<setprecision(2)<<avgMark<<endl;
	cout<<"Grede : "<<gredMark<<endl;
	
}


float average(float *m)
{
	//calc avg
	//return to main
	float sum=0;
	float avg=0;

	for(int i=0; i<5; i++)
	{
		sum += m[i];
	}
	
	avg = sum/5;
	
	return avg;
}

float greds(float mark)
{
	//grade a/b/c
	char gred;
	
	if (mark <= 40)
	{
		gred = 'C';
	}
	else if (mark <= 60)
	{
		gred = 'C';	
	}	
	else if (mark <= 80 )
	{
		gred = 'B';
	}
	else 
	{
		gred = 'A';
	}
		
		
	return gred;
}*/


//B/////////////////////
/*
#include<iostream>
#include<iomanip>

using namespace std;

float average(float*);
float greds(float);

struct Student
{
	char name[30], grade;
	float mark[5], avg;
};

int main()
{
	//input array 5
	//pass arr to avg
	//pass avg to grade
	//output dis
	
	//declare
	Student stud;
	
	cout<<"Enter Name :"<<flush;
	cin>>stud.name;
	
	//mark input to arr
	for(int i=0; i<5; i++)
	{
		cout<<"Enter mark : ";
		cin>>stud.mark[i];
	}
	//fx call
	stud.avg = average(stud.mark);
	stud.grade = greds(stud.avg);
	
	cout<<endl;
	cout<<"Name : "<<stud.name<<endl;
	cout<<"Average : "<<fixed<<setprecision(2)<<stud.avg<<endl;
	cout<<"Grede : "<<stud.grade<<endl;
	
}


float average(float *m)
{
	//calc avg
	//return to main
	float sum=0;
	float avg=0;

	for(int i=0; i<5; i++)
	{
		sum += m[i];
	}
	
	avg = sum/5;
	
	return avg;
}

float greds(float mark)
{
	//grade a/b/c
	char gred;
	
	if (mark <= 40)
	{
		gred = 'C';
	}
	else if (mark <= 60)
	{
		gred = 'C';	
	}	
	else if (mark <= 80 )
	{
		gred = 'B';
	}
	else 
	{
		gred = 'A';
	}
		
		
	return gred;
}*/


//Qs4//////////////////////////////////////////////////////////////

//A///////////
/*
#include<iostream>
#include<iomanip>

using namespace std;

struct Rental
{
	char name[20];
	float rent;
	int month;
};

void report(Rental R[],int size)
{	
	float sum=0;
	
	cout<<"-----AMOUNT DUE MORE THAN RM 1000-----"<<endl;
	
	for (int i=0; i<=3; i++)
	{
		float grandTot = R[i].rent*R[i].month;
		
		if (grandTot>1000)
		{
			cout<<"Tenant name\t: "<<R[i].name<<endl;
			cout<<"Monthly rental\t: RM "<<fixed<<setprecision(2)<<R[i].rent<<endl;
			cout<<"Unpaid months\t: "<<R[i].month<<endl;
			cout<<"Unpaid amount\t: RM "<<fixed<<setprecision(2)<<grandTot<<endl;
			cout<<endl;
			//sum to be paid
			sum += grandTot;
		}	
	}
	
	cout<<"Total rental to be collected : RM "<<fixed<<setprecision(2)<<sum<<endl;
}

int main()
{
	Rental R[3] = {{"Megan", 300, 4},{"Johnson", 250, 1},{"David", 790, 2}};
	
	report(R, 3);
}*/









