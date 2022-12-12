#include<iostream>
#include<iomanip>
using namespace std;

//struct to store rental data
struct Rental
{
    char name[20];
    float rent;
    int month;
};

//function prototype
float report(struct Rental[]);

int main()
{
    //initialize struct with hardcoded values
    struct Rental R[3] = {{"Megan", 300, 4}, {"Johnson", 250, 1}, {"David", 790, 2}};
    float total;
   
    cout<<fixed<<setprecision(2);
    total = report(R); //call to generate report
    cout<<"\nTotal rental to be collected : $ "<<total<<endl; //display grand total amount due
}

float report(struct Rental R[])
{
    //initialize variables
    double unpaidAmount, totalDue = 0;
   
    cout<<"--------------------------------------------------------\n";
    cout<<"-    AMOUNT DUE MORE THAN $1000.00    -\n";
    cout<<"--------------------------------------------------------\n";
       
    //for loop to display records
    for(int i=0;i<3;i++)
    {
        //calculate amount owed by each tenant
        unpaidAmount = R[i].rent * R[i].month;
       
        //if structure to display only tenants with more than $1000
        if(unpaidAmount>1000)
        {
            totalDue += unpaidAmount; //accumulate total amount due
            cout<<"\nTenant name\t: "<<R[i].name<<endl;
            cout<<"Monthly rental\t: $"<<R[i].rent<<endl;
            cout<<"Unpaid months\t: $"<<R[i].month<<endl;
            cout<<"Unpaid amount\t: $"<<unpaidAmount<<endl;
        }
    }
    return totalDue; //return amount due
}
