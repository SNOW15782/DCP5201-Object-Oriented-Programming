//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 12
//Q1 

#include <iostream>
#include <string>
#include<iomanip>
using namespace std; 

class staff
{
	//protected member 
	protected: 
	string name, id; 
	int age;
	float salary, nett_salary; 
	
	//public member 
	public:
		void setdata() 
		{
		fflush(stdin);
		cout << "Enter Name\t: ";
		getline (cin,name); 
		
		cout << "Enter ID\t: ";	
		getline (cin,id);
		
		cout << "Enter Age\t: ";	
		cin >> age; 
		
		cout << "Enter Salary\t:RM "; 
		cin >> salary; 
		}
};
//create class executive inherits public staff 
class executive : public staff 
{

	//private member 
	private: 
	int OT_hrs;
	float rate; 
	
	//public member 
	public: 
	void setExecutive()
	{
		fflush(stdin);
		cout << "Enter OT hours\t: ";
		cin >> OT_hrs; 
		
		cout << "Enter Rate\t: ";
		cin >> rate; 
	}
	//to calculate net 
	void cal_salary_exec()
	{
		nett_salary= salary + (OT_hrs*rate); 
	}
	//display name, id, age, salary, OT_HRs, rate and nett_salary 
	void display ()
	{
		//display the input included 
		cout<<fixed<<setprecision(2);
		cout << "\nName "<<setw(10)<<": " <<name <<endl; 
		cout << "ID "<<setw(12)<<": " <<id <<endl; 
		cout << "Age "<<setw(11)<<": " <<age <<endl; 
		cout << "Salary "<<setw(11)<<":RM " <<salary <<endl; 
		cout << "OT Hours "<<setw(6)<<": " <<OT_hrs <<endl;
		cout << "OT Rate "<<setw(10)<<":RM " <<rate <<endl;
		cout << "Nett Salary "<<":RM " <<nett_salary <<endl;
	}
}; 

//create class Salesperson 

class Salesperson : public staff 
{
	private : 
	int units; 
	float bonus; 
	
	public:
		void setSalesperson()
		{
			cout << "Enter Units\t: ";
			cin >> units; 
		}

		void cal_salary_sales()
		{
			if (units > 500.00)
				bonus = 500.00; 
				
			else 
				bonus = 250.00; 
				
				//calculate nett_salary 
				nett_salary = salary + bonus; 
		}
	
		void display()
		{
		//display the input included 
		cout<<fixed<<setprecision(2);
		cout << "Name "<<setw(10)<<": " <<name <<endl; 
		cout << "ID "<<setw(12)<<": " <<id <<endl; 
		cout << "Age "<<setw(11)<<": " <<age <<endl; 
		cout << "Salary "<<setw(11)<<":RM " <<salary <<endl; 
		cout << "Units "<<setw(9)<<": " <<units <<endl;
		cout << "Bonus "<<setw(12)<<":RM "<<bonus <<endl;
		cout << "Nett Salary "<<":RM " <<nett_salary <<endl;
		}
};

int main ()
{
	int select; 
	cout << "Enter [1] for Executive OR [2] for Salesperson: ";
	cin >> select;
	
	switch (select)
	{
		case 1:
			{
				//executive object 
				//call the required 
				executive e;
				e.setdata();
				e.setExecutive();
				e.cal_salary_exec(); 
				e.display();
				break; 
			}
		case 2: 
			{
				//salesperson object 
				//call the required 
				Salesperson s; 
				s.setdata();
				s.setSalesperson();
				s.cal_salary_sales();
				s.display();
				break; 
			}	
		default: 
			{
			//if other than 1or2 go here
			cout << "Invalid";
			}
	}
}
