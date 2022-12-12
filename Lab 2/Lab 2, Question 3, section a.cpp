//LAB 2
//QUESTION 3
//SECTION A

#include <iostream>
#include <string>
using namespace std;


//function to display average 
double average (int marks[], int num_marks)
{
	int sum = 0;
	for (int i= 0; i<num_marks; i++)
	{
		sum = sum + marks [i];
	}
	return (double)sum/ num_marks; 
}


//function to display grade 
char grade(double average_marks)
{
	if (average_marks >= 80)
	{
		return 'A';
	}
	
	else if (average_marks >= 60)
	{
	return 'B';	
	}
	
	else if (average_marks >= 50)
	{
	return 'C';	
	}
	
	else 
	{
	return 'F';	
	}

}

// main 
int main ()
{
//The marks must be kept in a one dimensional array in the main() function.
	int marks [5];
	string name; 
	 
	//student name 
	cout << "Enter Name : ";
	cin >> name;

	// student marks
	
	
		for (int i = 0; i <5; i++)
		{
		cout << "Enter Marks : ";
		cin >> marks [i]; 
		}
		
		double average_marks = average (marks, 5); 
		char grade_letter = grade (average_marks);
		
		//print student name average and grade 
		cout << endl;
		cout << "Name: " << name << endl;
		cout << "Average: " << average_marks<<endl;
		cout << "Grade " << grade_letter << endl; 
	
return 0;	
}
