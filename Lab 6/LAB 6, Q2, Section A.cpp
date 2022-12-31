//MUHAMAD ARIF BIN SALLEHUDDIN
// LAB 6
// Q2
// SECTION A

#include <iostream>
using namespace std; 

//CLASS 
class Employee
{
	//PRIVATE
	string name, department, position; 
	int idNumber;
	
	//PUBLIC
	public: 
		//CONSTRUCTOR VALUE AS ARGUMENT
		Employee (string n, int id, string dept, string post)
		{
			name = n;
			idNumber = id;
			department = dept;
			position = post;
		}
	
		//CONSTURCTOR VALUE AS ARUGMENT
		Employee (string n, int id)
		{
			name = n;
			idNumber = id;
			department = "";
			position = "";
		}	
	
		//DEFAULT CONSTRUCTOR
		Employee ()
		{
			name = "";
			idNumber = 0;
			department = "";
			position = "";
		}
		
		//MUTATOR FUNCTIONS
		void setName(string n)
		{
		name = n;
		}
		
		void setID(int id)
		{
		idNumber = id;
		}
		
		void setDept (string dept)
		{
		department = dept;
		}
		
		void setPost (string post)
		{
		position = post;
		}
		
		//accessor functions 
		string getName()
		{
			return name;
		}
		
		int getID()
		{
			return idNumber;
		}
		
		string getDept()
		{
			return department; 
		}
		
		string getPost()
		{
			return position; 
		}
		
};

void displayData(Employee); 

int main ()
{
	//PARAMETERIZED CONSTRUCTOR OBJECT
	Employee SM ("Susan Meyers", 47899, "Accounting", "Vice President");
	
	//OBJECT WITH PARAMERIZED CONSTRUCTOR AND SETTING DATA WITH MUTATOR FUNCTIONS
	Employee MJ ("Mark Jone", 39119);
	MJ.setDept("IT");
	MJ.setPost("Programmer");
	
	//OBJECT WITH DEFAULT CONSTRUCTOR AND SETTING DATA WITH MUTATOR FUNCTION
	Employee JR;
	JR.setName("Joy Rogers");
	JR.setID(81774);
	JR.setDept("Manufacturing");
	JR.setPost("Engineer");
	
	//DISPLAY DATA IN OBJECTS
	displayData(SM);
	displayData(MJ);
	displayData(JR);
}

//DISPLAY DATA FUNCTION
void displayData(Employee E)
{
	//ACCESSOR AND DISPLAY PRIVATE DATA OF OBJECT 
	cout << "\nName: "<<E.getName()<<endl;
	cout << "ID Number: " <<E.getID()<<endl;
	cout << "Department: "<<E.getDept()<<endl;
	cout << "Position: "<<E.getPost()<<endl;
}
