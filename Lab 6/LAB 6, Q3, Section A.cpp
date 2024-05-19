//MUHAMAD ARIF BIN SALLEHUDDIN
// LAB 6
// Q3
// SECTION A

#include <iostream>
#include <string>
using namespace std; 

//CLASS 
class Books
{
	private: 
		string isbnNo, title, author;
		float price, discountedprice, discountperc;
	
	public:
		Books ();
		Books (string, string, string, float, float);
		void set_Data();
		void calcDiscountedPrice ();
		void print ();
		float getDiscountedPrice();
		~Books(); 
		
}; 
//set Data function outside class 
void Books::set_Data()
{
	cout << "\nEnter ISBN: ";
	cin >> isbnNo;
	cout << "Enter Title: ";
	cin >> title;
	cout << "Enter Author's name: ";
	cin >> author;
	cout << "\nEnter price: ";
	cin >> price; 
	cout << "Enter Discount (%): ";
	cin >> discountperc; 
}

void Books::calcDiscountedPrice()
{
 	//calculation for discount 
 	discountedprice = price - (price*discountperc/100); 
}

void Books::print()
{
	//display book details
	cout << "--------------------------------------------------------"<<endl;
	cout <<"                  Book Details"<<endl;
	cout << "--------------------------------------------------------"<<endl;
	cout << "ISBN: "<<isbnNo<<endl; 
	cout << "Title: "<<title<<endl; 
	cout << "Author: "<<author<<endl; 
	cout << "Original Price: "<<price<<endl;
	cout << "Discounted Price: "<<discountedprice<<endl;
}
//return discountedPrice 
float Books::getDiscountedPrice()
{
	return discountedprice;
}
//Default constructor of the clas that initialize all data to zero or empty
Books::Books()
{
	isbnNo = "";
	title = ""; 
	author = "";
	price = 0; 
	discountedprice = 0;
}
//parameterized constructor of the class
Books::Books(string isbn, string t, string a, float p, float dp)
{
	isbnNo = isbn;
	title = t;
	author = a;
	price = p;
	discountedprice = dp;
}
//Display "Enjoy reading (book title)"
Books::~Books()
{
	cout << "\nEnjoy reading "<<title <<" !"<<endl; 
}

//create another function name func(...) accepts an object (from Books class) refer reference object as an argument 
void func(Books &book)
{
	book.set_Data();
	book.calcDiscountedPrice();
	book.print();
}

//main 
//create object of class Books called B1
int main()
{ 
//initialize object with data values
	Books B1("102009912","7 Habits of Highly Effective People", "Stephen Covey",400.00,30);

//call functions of object to calculate and display data 
	cout<<".........Book of the Month..... "<<endl;
	B1.calcDiscountedPrice();
	B1.print();

//declare array of objects 
	Books B2[3];
	float expensive = 0.00, discprc; 
	int below = 0;
	cout<<"\nNow we shall enter and display data for 3 special books... "<<endl;

//loop to call functions for array of objects 
	for(int i=0;i<3;i++)
	{
		func(B2[i]); //function calls object mutator, calculate 
		discount, display
		discprc = B2[i].getDiscountedPrice(); //access price after discount
		
//determine most expensive book 
	if(expensive<discprc)
		{
		expensive = discprc;
		}

//accumulate count of books with price below 30 after discount 
	if(discprc<30)
	below++;
	}

//display most expensive book price and number of books below 30 after discount
	cout<<"\n "<<endl;
	cout<<"The most expensive book is RM "<<expensive<<endl;
	cout<<"The number of books that are below RM 30 are:"<<below<<endl; 
	return 0;
	}
