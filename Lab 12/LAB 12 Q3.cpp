#include <iostream>
#include <string> 
using namespace std; 

//create class partiticpant 
class Participant 
{
protected :
	string name,location; 
	int age; 

public: 
	//default construction to display partipant details 
	Participant()
	{
		cout<<"-----------------------------------------"<<endl;
		cout<<"\tPARTICIPANT DETAILS"<<endl;
		cout<<"-----------------------------------------"<<endl;
	}
};

//create class Progress 
class Progress 
{
	//protected member 
	protected: 
	string date [3];
	float rate [3]; 
	char grade; 

	//public member 
	public: 
		void mark_entry()
		{
			//get marks and calculate average 
			int t = 0;
			float avg;
			
			cout<<"-----------------------------------------"<<endl;
			cout<<"\tRECITAL PROGRESS DETAILS"<<endl;
			cout<<"-----------------------------------------"<<endl;
			
			//using a for loop, get user input for array and rate array. rate can go from range 1-5
			for (int i = 0; i <3; i++)
			{
				cout << "\nEnter date (dd/mm/yy)\t\t: ";
				cin >> date [i];
				
				cout << "Enter rating (between 1-5)\t: ";
				cin >> rate [i];
			
			//calculate total rate 
				t += rate[i];
			}
			
			//determine the average
			avg = t/3; 
			//call set_grade () by passing the average as parameter 
			set_grade (avg); 
		}
		
		void set_grade (float average)
		//determine the grade based on average 
		{
			if (average >= 4.00)
				grade = 'A';
		
			else if (average >= 3.00 && average <4.00)
				grade = 'B' ;
			
			else 
				grade = 'C';
		}
};

//create class Result inherite pub class participant and class progress 
class Result : public Participant,public Progress
{
	//private member 
	private: 
	string prize; 
	
	//public member 
	public: 
	
	//Mutator function 
	void setdetailst()
	{
		//get user input for name, location, age
		fflush(stdin);
		cout << "Enter Name\t: ";
		getline (cin, name); 
		
		cout << "Enter Location\t: ";
		getline (cin, location);
		
		cout << "Enter age\t: ";
		cin >> age; 
	}
	
	//display name, location ,age, all the rate and grade 
	void display ()
	{
	cout<<"-----------------------------------------"<<endl;
	cout<<"\tRESULT SLIP"<<endl;
	cout<<"-----------------------------------------"<<endl;	
	
	cout <<"Name\t: " << name <<endl;
	cout <<"Location: "<< location << endl;
	cout <<"Age\t: "<<age<<endl; 
	
		//for loop for rating 
		for (int i = 0; i<3; i++)
			{
			cout << "Rating  : "<<i+1 <<rate [i] <<endl;
			cout << "Grade: "<< grade << endl;
			cout << "Congrats, you can claim your";
			
			//if grade A = Mug+ RM 10 Book Voucher 
			if (grade == 'A')
				cout << "Mug + RM 10 Book Voucher";
				
			//rest BPA free Water Bottle 
			else 
				cout << "BPA free Water Bottle!";
			}
	}
	//friend function 
	friend void summary(Result [], int);
};
//2 parameter an array of result object and interger that store the size of the array 
void summary (Result obj[],int size)
{
	//initialize variables for increment
	int a = 0, b = 0, c = 0;
	
	//loop to accumulate each grade 
	for (int i = 0; i<3; i++)
		{
		if(obj[i].grade == 'A')
			a++;
		else if(obj[i].grade == 'B')
			b++;
		else
			c++;
		}

	//display summary of results
	cout<<"\n===================================="<<endl;
	cout<<"\tSummary Results"<<endl;
	cout<<"===================================="<<endl;
	cout<<"Grade A: ";
	//display star count for each grade

	for(int a_c = 0; a_c < a; a_c++)
		cout<<"*";
	cout<<"\nGrade B: ";
	
	for(int b_c = 0; b_c < b; b_c++)
		cout<<"*";
	cout<<"\nGrade C: ";

	for(int c_c = 0; c_c < c; c_c++)
		cout<<"*"; 
}

int main ()
{
	int s; 
	//get user input for how many student's data to be entered 
	cout << "Enter number of participants: ";
	cin >> s; 
	
	//declare a pointer called stud1 that pointer to a dynamic array of object of result class 
	Result* stud1 = new Result[s]; 
	
	//call methods for each object in array
	for(int i=0;i<s;i++)
	{
		stud1[i].setdetailst();
		stud1[i].mark_entry();
		stud1[i].display();
	}
	//generate summary of result 
	summary(stud1,s); 
	
	delete []stud1; 
}
