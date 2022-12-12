//LAB 2
//QUESTION 3
//SECTION B

#include <iostream>
#include <string>
using namespace std;

struct Student
{   
 	char name[30], grade; 
	float marks[5], avg;
};


//function to display average 
double average (float marks[], float num_marks)
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

	Student stud;
	 
	//student name 
	cout << "Enter Name : ";
	cin >> stud.name;
	// student marks
	
	
		for (int i = 0; i <5; i++)
		{
		cout << "Enter Marks : ";
		cin >> stud.marks [i]; 
		}
		
		stud.avg = average (stud.marks, 5); 
		stud.grade = grade (stud.avg);
		
		//print student name average and grade 
		cout << endl;
		cout << "Name: " << stud.name << endl;
		cout << "Average: " << stud.avg<<endl;
		cout << "Grade " << stud.grade << endl; 
	
return 0;	
}
