//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 7
//QUESTION 1
//SECTION B

#include <iostream>

using namespace std;
//CLASS
class Bags 
{
//PRIVATE 
	string brand;
	float height, length, width;

//PUBLIC
	public:
		//ENTER YOUR BAG BRAND NAME...LWH 
		void setdata ()
		{
			cout <<"Enter your bag's brand name: ";
			getline (cin, brand);
			cout <<"Enter value length, width and height of your bag L,W,H: ";
			cin >> length>>width>>height; 
			fflush(stdin);
		}
		
		//DISPLAY THE OUTPUT FROM SETDATA 
		void display()
		{
			cout <<"\nYour brand bag name is **"<<brand<<"** and the dimensions are: "<<length<<"L "<<width<<"W "<<height<<"H "<<endl;
		}

//CONSTRUCTOR WITH PARAMETER 
	Bags (const Bags &bi)
	{
		brand = bi.brand;
		length =bi.length;
		width = bi.width;
		height = bi.height;
		cout << "\nDo you have the same bag??"<<endl;
		
	}
//CONSTRUCTOR DEFAULT
	Bags()
	{
		brand = "Adidas";
		length = 35;
		width = 20;
		height = 45;
	}
//FRIEND FUNCTION
	friend void check (Bags,Bags,Bags); 
};
//(b) (i) object a,b,c of the class bags 
void check (Bags a, Bags b, Bags c)
{
	//if else statement 
	if (a.height == b.height == c.height)
	{
		cout <<"\nCommon height for all 3 bags"<<endl; 
	}
	else 
	{
		cout <<"\n--not all bags have the same heights--"<<endl; 
	}
}


int main ()
{
//(ii) e bags objects shares the same hieight dimension value and display the result 
//3 array object, for loop, invoke setdata() each elemts 

//array 
Bags K[3];

//for loop 
for (int i = 0; i<3; i++)
	{
	K[i].setdata(); 

	}	
	check (K[0], K[1], K[2]);
return 0; 
}
