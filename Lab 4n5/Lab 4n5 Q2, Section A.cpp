#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

class Trivia
{  
private:
	
	string name, country, game_name;
    int age;
    float score[3];
    char status [20];
   
public:
	void setParticipant()
    { 
	cin.ignore();
	
	cout<<"\nEnter Name\t: ";
	  getline(cin,name);
	  
	  cout<<"Enter Country\t: ";
	  getline(cin, country);
	  
	  cout<<"Enter Age\t: ";
	  cin>>age;
	  
	  cin.ignore();
	
	cout<< "Enter Game Name : ";
	getline(cin, game_name);
	}
	
	// a) void score_Gained() function
	void score_Gained ()
	{
		cout << "	Enter Score 1 : ";
		cin >> score[0]; 
		cout << "	Enter Score 2 : ";
		cin >> score[1]; 
		cout << "	Enter Score 3 : ";
		cin >> score[2]; 
	}
	
    // b) void average_Val() function
    void average_Val ()
    {
    	float total = 0;
    	for (int i = 0; i < 3; i++)
    	{
    		total = total + score[i];
		}
		float avg = total / 3;
		set_status (avg); 
	}
    
    void set_status (double avg)
    
	{
    	if (avg >= 80 && avg <= 100)
			strcpy(status , "Excellent");
	 	
		 else if (avg >= 60 && avg < 80)
			strcpy(status , "Great");
	 	
		 else 
			strcpy(status , "Keep Trying");
    }
   // c) void display_result() function
   void display_result ()
   {
   	cout << "\n------------------------------" << endl;
   	cout << "    RESULT SCORED"<<endl;
   	cout << "------------------------------"<< endl;
   	cout << "Name\t: "<<name <<endl;
   	cout << "Country\t: " <<country << endl;
   	cout << "Age\t: " <<age << endl;
   	cout << "Game name: "<<game_name << endl;
   	cout << "Score 1\t:"<<score[0]<<endl; 
   	cout << "Score 2\t:"<<score[1]<<endl; 
   	cout << "Score 3\t:"<<score[2]<<endl; 
   	cout << "Status\t:"<<status<<endl; 
   }
};

int main()
{  
   // d) Write the code based on the requirements as stated below
   int num_warriors;
   cout << "How many warriors? ";
   cin >> num_warriors;
   
   Trivia tv;
   Trivia* tv1 = &tv;
   
   for (int i=0;i<num_warriors; i++)
   {
   	tv1 -> setParticipant();
   	tv1 -> score_Gained();
   	tv1 -> average_Val();
   	tv1 -> display_result(); 
   }
   return 0;
}

