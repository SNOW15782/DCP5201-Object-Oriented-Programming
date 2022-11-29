/*
Lab 01
Question 3(c)
Dynamic array and function definition
*/

#include<iostream>
#include<iomanip>

using namespace std;

//function prototype
float average(int,float*);

int main()
{
    //initialize variables
    int days;
    float temp_avg;
   
    //prompt input for number of days
    cout<<"How many days would you like to record the temperature? ";
    cin>>days;
   
    //declare dynamic array for temperature using number of days
    float *temp = new float[days];
   
    //for loop to record temperature into dynamic array
    for(int index = 0; index<days; index++)
    {
        cout<<"Enter temperature day "<<index+1<<" : ";
        cin>>*(temp+index); //pointer notation to access array elements
    }
   
    //average function
    temp_avg = average(days,temp);
   
    //display calculated average
    cout<<"\nAverage temperature : "<<fixed<<setprecision(2)<<temp_avg<<" Celcius";
   
}

//defining own funciton that returns float value
float average(int d, float *t) //set input parameters
{
    //initialize variables
    float total = 0, avg;
   
    //for loop to access dynamic array elements and accumulate recorded temperatures
    for(int i=0; i<d; i++)
    {
        total += *(t+i);
    }
   
    //division to get average
    avg = total/d;
   
    //value to be returned after executing function
    return avg;
}
