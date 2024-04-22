//Muhamad Arif Bin Sallehuddin
//LAB 1
//Question 3
//Section C

#include <iostream>
#include <iomanip>
using namespace std;

double average (double* temps, int numDays);

int main () {
	int numDays; 
	cout << "How many days would you like to record the temperature? : ";
	cin >> numDays; 
	
	//dynamic array 
	double* temperatures = new double[numDays];
	
	//for loop 
	for (int i = 0; i<numDays; i++){
		cout << "Enter temperature day " << (i+1) << " : "; 
		cin >> *(temperatures + i); 
	}
	
	//call the average function 
	double avgTemp = average (temperatures, numDays); 
	
	//output the average temperature 
	cout << "\nAverage temperature " << avgTemp <<setw(2) << " Celsius" <<endl; 
	
	//Deallocate the dynamic array
	delete[] temperatures; 
	
	return 0;
}

// Function definition for calculating the average temperature
	double average(double* temps, int numDays) {
    	double sum = 0.0; // Initialize a variable to store the sum of temperatures
    		for (int i = 0; i < numDays; i++) {
        	sum += *(temps + i); // Add the temperature at index i to the sum using pointer notation
    }
    		return sum / numDays; // Return the average temperature
}
