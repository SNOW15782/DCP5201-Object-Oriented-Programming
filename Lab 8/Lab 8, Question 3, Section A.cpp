//MUHAMAD ARIF BIN SALLEHUDDIN
//1211206128
//LAB 8
//Q3
//SECTION A

#include <iostream>
#include <limits>
using namespace std; 

//(i)CREATE CLASS TICKET 
class Ticket
{
	private:  
	int no; 
	float price; 
	
	//(ii) DECLARE CLASS STUDENT AS A FRIEND OF CLASS TICKET
	friend class Student;
	
	public: 
	//DEFAULT CONSTRUCTION
	Ticket()
	{price = 10.00;}
	
	void setTicket()
	{
		///(iii) PROMPT AND USER INPUT FOR NO. (TICKETS TO PURCHASE)
		cout << "Please enter number of tickets to purchase: ";
		cin >> no;
	}
	
};
//(B) CREATE CLASS STUDENT  
class Student
{
	//DATA MEMEBER PRIVATE 
	private:
		string id; 
		string name;
		string purchase;
		Ticket p; //OBJECT 
		
	public:
	
	//PROMPT AND GET USER INPUT FOR NAME AND ID
	void setStudent()
	{
	
	//MEMORY BUFFER
	fflush (stdin); 
	
	//ENTER ID KEY-IN
	cout << "Enter ID: ";
	getline (cin,id);
	
	//ENTER NAME KEY-IN
	cout << "Enter Name: ";
	getline (cin,name); 	
	
	}
	
	void ticket_entry ()
	{
		char sel;
		cout << "Do you want to purchase charity  ticket? [Enter Y or N] : ";
		cin >> sel; 
		
		//IF-ELSE STATEMENT
		if (sel == 'Y')
		{
			purchase = "Yes";
			//REFER TICKET CLASS
			p.setTicket();
		}
		else 
		{
			cout<<"--------No ticket purchased--------"<<endl;
			//LIMIT FUNCTION
			cin.clear();cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	
	}
	
	void display ()
	{
		///DISPLAY THE STUDENT DETAILS REFER SAMPLE OUTPUT
		cout<<"\n--------------------------------"<<endl;
		cout<<"    STUDENT DETAILS"<<endl;
		cout<<"\n--------------------------------"<<endl;
		cout << "ID\t :"<<id<<endl;
		cout << "Name\t "<<name<<endl;
		cout<<"\n--------------------------------"<<endl;
		cout<<"    ADDITIONAL DETAILS"<<endl;
		cout<<"\n--------------------------------"<<endl;
		
		//IF-ELSE STATEMENT FOR PURCHASE 
		
		if (purchase == "Yes")
		{
			cout << "You've pruchased "<<p.no<<" Tickets"<<endl;
			cout << "Total amount: RM "<<p.no*p.price<<endl;
		}
		else 
		{
			cout <<"You've not purchased any tickets"<<endl;
		}
	}
	
}; 

int main ()
{
	//DECLARE AN ARRAY OF 3 OBJECT ELEMENTS 
	Student s[3];
	//FOR LOOP
	for (int i = 0; i<3; i++)
	{
		//CALL BACK 
		s[i].setStudent();
		s[i].ticket_entry();
		s[i].display();
	}
}
