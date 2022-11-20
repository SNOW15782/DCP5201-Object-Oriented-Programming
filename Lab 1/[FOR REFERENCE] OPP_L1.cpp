//QS 1

//A
/*
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	cout<<"MMMU Fees Structure 2022\n";
	cout<<setw(10)<<"Programe"<<setw(10)<<"Duration"<<(8)<<"Fee\n";
	cout<<setw(10)<<"Diploma"<<setw(10)<<"2 Years"<<(8)<<23000<<endl;
	cout<<setw(10)<<"Degree"<<setw(10)<<"3 Years"<<(8)<<60000<<endl;
}*/

/*
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"MMU Fees Structure 2022\n";
    cout<<setw(10)<<"Programme"<<setw(10)<<"Duration"<<setw(8)<<"Fee\n";
    cout<<setw(10)<<"Diploma"<<setw(10)<<"2 Years"<<setw(8)<<23000<<endl;
    cout<<setw(10)<<"Degree"<<setw(10)<<"3 Years"<<setw(8)<<60000<<endl;
}*/


//B
/*
#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float day1, day2, total;
	cout<<"Enter the sale for day 1 :" ;
	cin>>day1;
	//promt user to enter
	cout<<"Enter the sales for day 2 :" ;
	cin>>day2;
	
	//calc
	total = day1 + day2 ;
	
	//display
	//setprecision(decimal point 2/3/4)
	cout<<"\nQtech Sdn. Bhd Sales figures for 2 days\n";
	cout<<"Day 1\t: "<<fixed<<setprecision(2)<<day1<<endl;
	cout<<"Day 2\t: "<<fixed<<setprecision(2)<<day2<<endl;
	cout<<"Total\t: "<<fixed<<setprecision(2)<<total<<endl;
}*/

//QS2

//A
/*
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	//variable
	int regHours = 40, totalHours, otHours;
	float otRate = 24.35, baseRate = 18.50, regWages, otWages, totalWages;
	
	//input 
	cout<<"Please enter total hour yo've work this week: ";
	//input func
	cin>>totalHours;
	
	//if greater then 40 - reg hour
	if (totalHours > 40 )
	{
		otHours = totalHours - regHours;
	}
	else
	{
		otHours = 0;
		regHours = totalHours;
	}
	
	//calc hour rate
	regWages = baseRate*regHours;
	otWages = otRate * otHours;
	
	//total wage
	totalWages = regWages + otWages;
	
	//display
	cout<<"Wages for this week is RM" <<fixed<<setprecision(2)<<totalWages; 
}*/

//B
/*
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int num;
	int i;
	int even=0, odd=0;
	
	for (i=0; i<10; i++)
	{
		cout<<"Enter a number : ";
		cin>>num;
		
		if (num %2 == 0)
		{
			even++;
			}
		else
		{
			odd++;
			}
				
	}
	
	cout<<"\nThere are "<<even<<" even numbers and "<<odd<<" number";
	
}*/


//C
/*
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int inputNum;
	int totalNum;
	
	do
	{
	cout<<"Enter number : ";
	cin>>inputNum;
	
		if(inputNum !=99)
		{
			totalNum = totalNum + inputNum;
		}
			
	}while (inputNum != 99);
	
	cout<<"\nTotal number is : "<<totalNum;
}*/

//D
/*
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	char Name [50], flav, ans;
	int quantity;
	float price, totPrice;
	
	
	
	cout<<"Welcome to Yummy Ice-Cream";
	cout<<"\n\n*****Ice-Cream Flavor*****";
	
	cout<<"\n[C]Choc";
	cout<<"\n[V]Vanila";
	cout<<"\n[S]Strawberry";
	
	cout<<"\n\n";	
	cout<<"Enter Name	: ";
	cin>>Name;
	
	do
	{
	cout<<"Enter Flavor	: ";
	cin>>flav;	
	cout<<"Enter Quantity	: ";
	cin>>quantity;
	
		while (flav !='C' && flav !='V' && flav !='S')
		{
			cout<<"\nInput the correct code";
			cout<<"\nEnter Flavor		: ";
			cin>>flav;	
		}
		
		switch(flav)
		{
			case 'C': price = 3.50;
					break;
			case 'V': price = 3.00;
					break;
			case 'S': price = 2.50;
					break;				
		}
	//calc
	totPrice += price;
	
	cout<<"\nDo you want to buy more? <Y-Yes N-No> : ";
	cin>>ans;
	
	}while (ans=='Y');
	
	cout<<"\n*****Receipt*****\n";
	cout<<"\nName :"<<Name;
	cout<<"\nTotal price : RM "<<fixed<<setprecision(2)<<totPrice;
	return 0;
}
*/


//QS3


//A
/*
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	const int numEmployees = 5;
	int index;
	int hours[numEmployees];
	double payRate[numEmployees];
	double grossPay;
	
	cout<<"Enter the hours worked and hourly pay rates of "<<numEmployees<<"employees. \n";
	
	for (index=0; index<numEmployees; index++)
	{
		cout<<"\nHour worked by employee #"<<index + 1<<":";
		cin>>hours[index];
		cout<<"Hourly pay rate for employee #"<<index + 1<<": RM";
		cin>>payRate[index];
	}
	
	cout<<"\nHere is the gross pay for each employee: "<<endl;
	
	for (index=0; index<numEmployees; index++)
	{
		grossPay = payRate[index] * hours[index];		
		cout<<"Employee #"<<index + 1<<": RM"<<setw(7)<<fixed<<setprecision(2)<<grossPay<<endl;
	}
	
	return 0;
}*/

//B
/*
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int num[2][3]= {{ 10,20,30 },{ 40,50,60 }};
	int i,w;
	
	for (i=0; i<2; i++)
	{
		cout<<"Row "<<i+1<<":";
		
		for (w=0; w<3; w++)
		{
			cout<<setw(7)<<num[i][w];	
		}
		cout<<endl;
	}
}
*/

//C

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int ans;
	int i;
	
	int w;
	
	
	cout<<"How many day you would like to add?";
	cin>>ans;
	int r=ans;
	float temp[r];	
	
	for (i=0; i<ans; i++)
	{
		cout<<"Day "<<i+1<<":";
		cin>>temp[r];
	}
	
	for (i=0; i<ans; i++)
	{	
		cout<<temp[r];	
	}
	
	
	
}








/*
//QS4

#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	int testScore [3];
	float avg;
	
	cout
}
*/

















