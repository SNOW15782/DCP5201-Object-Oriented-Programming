//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 3 
//QUESTION 2
//SECTION B

#include<iostream>
using namespace std;

class Cuboid
{ int length, width, height, volume;
public:

//set for number 
void setdata()
{
cout << "Enter the width, lenght, height of a Cuboid Object: ";
cin >> width >> length >> height; 
}

//set for volume of cuboid (L.W.H)
void findVolume()
{
	volume = length*width*height;
}

//set for accessor function to return the data member for this class 

int getLength()
{
	return length;
}

int getWidth()
{
	return width;
}

int getHeight()
{
	return height;
}

int getVolume()
{
	return volume;
}

};

int main()

{ 

Cuboid Q;
Q.setdata();
Q.findVolume();

// DISPLAY 
cout << "------Display Cuboid Data-----\n";
cout << "Width: "<<Q.getWidth() << " cm\n";
cout << "Length: "<<Q.getLength() << " cm\n";
cout << "Height: "<<Q.getHeight() << " cm\n";
cout << "Volume: "<<Q.getVolume() << " cm^3\n";

return 0;

}
