/*
Muhamad Arif Bin Sallehuddin 
Lab 01
Question 4
Sorting function
*/

#include<iostream>
#include<iomanip>

using namespace std;

//declare function
void sort(int,float*);
float average(int,float*);

int main()
{
   
    int num_test;
    float score_avg;
   
    cout<<"How many test scores will you enter? ";
    cin>>num_test;
   
    float *scores = new float[num_test];
   
   //Ouput : Enter test score 1,2,3,4
    for(int index=0; index<num_test; index++)
    {
        cout<<"Enter test score "<<index+1<<": ";
        cin>>*(scores+index);
    }
   //call function 
    sort(num_test,scores);
    score_avg = average(num_test,scores);
   
    cout<<"\nThe test scores in ascending order, and their average, are:\n";
    cout<<"\nScore";
    cout<<"\n-----\n";
    for(int j=0; j<num_test; j++)
    {
        cout<<fixed<<setprecision(2)<<*(scores+j)<<endl;
    }
   
    cout<<"\nAverage score:\t"<<fixed<<setprecision(2)<<score_avg;
}
//function defintion 
void sort(int n, float *s)
{
    float current_min;
    int index_min;
   
    for(int i=0; i<n-1; i++)
    {
        current_min= *(s+i);
        index_min = i;
       
        for(int j = i + 1; j<n; j++)
        {
            if (current_min > *(s+j))
            {
                index_min = j;
                current_min = *(s+j);
            }
        }
       
        *(s+index_min) = *(s+i);
        *(s+i) = current_min;
    }
}

float average(int n, float *s)
{
    float total = 0, avg;
   
    for(int i=0; i<n; i++)
    {
        total += *(s+i);
    }
   
    avg = total/n;
    return avg;
}
