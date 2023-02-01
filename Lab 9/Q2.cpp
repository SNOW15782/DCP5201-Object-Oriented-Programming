//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 10 
//SECTION B 
#include <iostream>
#include <limits>
using namespace std; 

class ChoreographyMarks
{	//private data members
	private: float points, total;
	public: //public member function
		ChoreographyMarks(){ total = 30; } //default constructor
		void setCgPoints()
		{	//set points based on user input
			cout<<"Enter Choreography Marks [max:30]: ";
			cin>>points;
		}
	friend class Dancer; //declare friend class
};

class InventiveMarks 
{
	private: float points, total; 
	
	public: 
	//default constructor: total = 20 
	InventiveMarks ()
	{total = 20;}
	
	void setInvPoints()
	{
		cout << "Enter Inventive Marks [max:20]\t : ";
		cin >> points;
	} 	
//Class Dancer is a friend of this class 
friend class Dancer; 
}; 

class Dancer
{
	private:
		string name; 
		int age;
		float finalpoints, cpoints, ipoints;
		
	public :
		//set details name and age for a dancer 
			void set_details()
		{	//set name and age details
			// fflush(stdin); //clear buffer
			cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout<<"\n:::::Details for Dancer:::::"<<endl;
			cout<<"Enter name\t\t\t : ";
			getline(cin,name);
			cout<<"Enter age\t\t\t : ";
			cin>>age;

		//Takes an object of ChoreographyMarks and an object of InventiveMarks as arguments. 
		void calcFinalPoints (ChoreographyMarks C, InventiveMarks I)
		{
			// Percentage Points = (Points/ Total)*100;
			cpoint = 100* C.points / C.total;
			ipoint = 100* I.points / I.total;
			
			//calculate finalpoints 
			finalpoints = 100*(C.points + I.points)/(C.total + C.total);
		}
	
	//Assessor Function 	
	int getAge ()
	{return age;}
	string getName ()
	{return name;}
	
	void displayScoreDetails()
	{
	cout<<"\n:::::Score Board:::::"<<endl;
	cout<<"Choreography\t: "<<cpoints<<endl;
	cout<<"Inventive\t: "<<ipoints<<endl;
	cout<<"Final score\t: "<<finalpoints<<endl;
	cout<<"========================================="<<endl;	
	}
};

int main ()
{
	int d;
	//prompt user to enter number of dancers
	cout<<"Enter number of dancers"<<endl;
	cin>>d;
	//declare dynamic array of objects using entered number
	Dancer *D;
	D = new Dancer[d];
	//declare class objects
	ChoreographyMarks cm;
	InventiveMarks im;
	//loop to set and display details of all elements in dynamic array
	for(int i=0;i<d;i++)
	{	//set dancer details
		D[i].set_details();
		//set points for declared objects
		cm.setCgPoints();
		im.setInvPoints();
		//use objects to calculate final points
		D[i].calcFinalPoints(cm,im);
		//display dancer information
		cout<<"\n========================================="<<endl;
		cout<<"Dancer #"<<i+1<<endl;
		cout<<"========================================="<<endl;
		cout<<"Name\t= "<<D[i].getName()<<endl;
		cout<<"Age\t= "<<D[i].getAge()<<endl;
		//display details of scores 
		D[i].displayScoreDetails();	
	}
	//delete dynamic array of objects
	delete [] D;
}
