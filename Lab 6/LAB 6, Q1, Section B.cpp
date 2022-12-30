//MUHAMAD ARIF BIN SALLEHUDDIN
// LAB 6
// Q1
// SECTION B

#include <iostream>
using namespace std; 

//CLASS 
class MasterStudent 
{
	string name, title;
	int status; 
	
	public:
		MasterStudent (string n, string t, int x)
		{
			name = n;
			title = t;
			status = x;
		}
		
		//CONSTRUCTOR 
		MasterStudent ()
		{
			name = "Peter";
			title = "A Study on the Usability Factors of Mobile Apps.";
			status = 1;
		}

		int getStatus ()
		{
			return status;
		}
		
		string getName ()
		{
			return name;
		}

		string getTitle ()
		{
			return title; 
		}

	//DECONSTRUCTOR 
	~MasterStudent()
	{
		cout << "\n\n~End of Details~Student~"<<name<<endl;
	}

};

int main ()
{
	//INITIALIZE ARRAY OF 4 BOJECT WITH HARCODED DATA 
	MasterStudent MS[4] = {MasterStudent("Philip Morales", "Working with Generation X employees: food industry", 1),
						   MasterStudent("Cameron Connor", "Collective Co-Creation within the Open Source Software Community", 1),
						   MasterStudent("Meriam Miles", "What Makes Online Video Advertisements Go Viral?", 0),
						   MasterStudent("Dory Dean", "Social media use for coporate communications", 0)};
						   
	//LOOP
	for (int i = 0;i<4;i++)
	{
	
	cout << "================================="<<endl;
	cout << "	Masters Student Details		  "<<endl;
	cout << "================================="<<endl;
	cout << "Name	\t: "<<MS[i].getName()<<endl;
	cout << "Title 	\t: "<<MS[i].getTitle()<<endl;
	cout << "Status \t: ";
	if (MS[i].getStatus()==1) 
	{
		cout << "Approved"<<endl;
	}
	else
	{
		cout << "Pending"<<endl;
	}
}
}
