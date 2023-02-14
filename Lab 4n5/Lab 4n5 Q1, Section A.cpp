//MUHAMAD ARIF BIN SALLEHUDDIN 
// LAB 4n5
// Q1
//SECTION A

#include <iostream>
using namespace std;
class Fraction
{
//--------(i)---------
private: 
	int denom; 
	int nume;
//bring private to public using accessor 	
public: 
void setdata (int a, int b )
{
	nume = a;
	denom = b; 
}
int getNume()
{
	return nume;
}

int getDenom()
{
	return denom;
}

};

//given function to check validity
int isValid(Fraction ob) //class object as input parameter
{    int valid;

     if (ob.getDenom()==0) //invalid because denominator is 0
     {  valid = 0;
     
        cout<<"\nAlert: Denominator is having value zero "<<endl;
     }
     else if (ob.getNume()>ob.getDenom()) //invalid because numerator larger than denominator
     {  valid = 0;
     
       cout<<"\nAlert: Numerator greater than denominator"<<endl;
     }
     else //valid fraction
       valid = 1;    
       
    return valid; //return valid flag
}
//given main function
int main()
{    Fraction ob1[3]; //declare fraction class array object
    
	int x, y, check;
    
	for(int i=0; i<3; i++) //for loop to set data and check validity
	
    {    ob1[i].setdata(i+1,2-i); //set data in array object using index increment
//--------(ii)----------

//call accessor functions to get data 

x = ob1[i].getNume();
y = ob1[i].getDenom();

cout << "\nFraction " << x<< "/ "<< y;

check = isValid (ob1[i]); // check validity in each object of array 

if (check == 1)
	cout <<" is valid"<<endl;
	else 
	cout <<"is invalid: " << endl;
}
return 0;
}
