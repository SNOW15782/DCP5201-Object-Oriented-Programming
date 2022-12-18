//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 3 
//QUESTION 2
//SECTION A

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

//set for display cuboid data 
void display()
{
cout << "------Display Cuboid Data-----\n";
cout << "Width: "<<width << " cm\n";
cout << "Length: "<<length << " cm\n";
cout << "Height: "<<height << " cm\n";
cout << "Volume: "<<volume << " cm^3\n";
}



};

int main()

{ 

Cuboid Q;
Q.setdata();
Q.findVolume();
Q.display();
return 0;

}
