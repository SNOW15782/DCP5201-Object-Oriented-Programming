//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 9
//SECTION A 

#include <iostream>
using namespace std; 

class ArtificialGrass 
{
	private : int length, width, depth; 

	public: 
	void grass_data (int q, int r, int s)
		{length = q; width = r; depth = s;}
	
		int grass_gauge ()
		{return length * width * depth;}	
		
		//DEFAULT CONSTRUCTOR 
		ArtificialGrass ()
		{
			//lenght 4, width 6, depth 3
			
			length = 4;
			width = 6;
			depth = 3;
		}

		~ArtificialGrass ()
		{ cout << "\nDeleting the artifical grass details."<<endl;}
};

int main ()
{
	//object with the new operator
	ArtificialGrass *ag1;
	ag1 = new ArtificialGrass;
	
	//display the artificial grass detail
	cout << "++++++++++++++++++++++++++++++++++++++++"<<endl;
	cout << "\t The Artificial Grass Details"<<endl;
	cout << "The previous Batch Set left...."<<endl; 
	cout << "Available Grass Size: "<<ag1-> grass_gauge()<<" [2 pieces per one set]"<<endl;
	
	//delete ag1; 
	//different, no array cuz theres no array 
	delete ag1; 
	
	
	//display stock available 
	cout << "\n========================================"<<endl;
	cout << "\t The Stocks Available..."<<endl; 
	cout << "++++++++++++++++++++++++++++++++++++++++"<<endl;
	
	//create dynamic array of 3 object using new operator 
	ArtificialGrass *ag2;
	ag2 = new ArtificialGrass[3];
	
	//for loop, call related function 
	for (int i = 0; i<3; i++)
	{
		//invoke grass_data, loop counter +2 for each declare argument 
		ag2[i].grass_data(i+2,i+2,i+2);
		cout << "The Grass Size Set#"<<i+1<<endl; //print the value 
		cout << "->>"<<ag2[i].grass_gauge()<<" cm [2 pieaves in one set] "<<endl<<endl; 
	}
	 //for delete the objects your created in (v)
	 //different, no array cuz theres no array
	delete [] ag2;
	
}
