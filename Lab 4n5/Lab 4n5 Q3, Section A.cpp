#include <iostream>
#include <string.h>
using namespace std; 

class Achievement
{
	string class_name;
	int score;
	
	public:
		void set_data (string n, int s)
		{
			class_name = n; 
			score = s; 
		}
		
	void display_scale()
	{
		cout << "====================================";
		cout<<"\t"<<class_name<<endl;
		cout <<"The Class Passing Grade Achievement: "<<score << "%"<< endl;
		
		if (score <= 100 && score >= 85)
		{
			cout << "* * * * *"<<endl;
		}
		else if (score <85 && score >= 70)
		{
			cout << "* * * *" <<endl;
		}
		else if (score <70 && score >= 60)
		{
			cout << "* * * " <<endl;
		}
		else if (score <60 && score >= 50)
		{
			cout << "* *" <<endl;
		}
		else 
		{
			cout << "Poor achivement"; 
		}
	
	}
};

int main ()
{
//declare variable and array 
int num = 4;
string cl;
int ac; 
Achievement A[num]; 

cout <<"--------------------------------------------------------------"<<endl;
cout << "Class Achievement"<<endl; 
cout <<"--------------------------------------------------------------"<<endl;

//loop 
for (int i = 0; i < num; i++)
{
	cout <<"\nEnter the class name\t\t:";
	cin >> cl; 
	cout << "The class achivement (%)\t: ";
	cin >> ac; 
	A[i].set_data(cl, ac);
}
// loop to display the summary result for 4 classes 
cout << "\n THE SUMMARY OF UPSR TRIAL EXAM RESULT"<<endl;
for (int i = 0; i < num; i++)
{
	A[i].display_scale();
}
cout << "\n===================================="<<endl;
}
