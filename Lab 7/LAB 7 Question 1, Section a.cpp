//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 7
//QUESTION 1
//SECTION A,B,C

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

};

int main ()
{
	//(i) CLASS OBJECT K
	Bags K;
	
	//CALL MEMBER FUNCTION SETDATA AND DISPLAY 
	K.setdata();
	K.display();
	
	//(ii) ANOTHER OBJECT CALL L;
	Bags L;
	L.display();
	
	//(iii) compile result (done)
	
	//(iv)Delcare object M and initialize with L
	Bags M(L);
	
	//Call member display 
	M.display();
	
return 0; 
}
