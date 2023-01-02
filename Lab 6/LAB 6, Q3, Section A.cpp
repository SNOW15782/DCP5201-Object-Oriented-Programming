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
int main ()
{
	Books B1 ("102009912", "7 Habits of Highly Effective People","Stephen Covey", 400, 30);
	
	//call calcDiscountedPrice () and print using B1
	B1.calcDiscountedPrice();
	B1.print();
	
	//Create array if class 
	Books B2[3]; 
	
	cout << "\nNow we shall enter and display data for 3 special books..."<<endl;
	
	for (int i = 0; i<3; i++)
	{
		func(B2[i]);
	}
	
	//determine the most expensive book's price (after this discount)
	float maxprice = B2[0].getDiscountedPrice();
	for (int i = 1; i<3; i++)
	{
		if (B2[i].getDiscountedPrice() >maxprice)
		{
			maxprice = B2[i].getDiscountedPrice();
		}
	}
	
	cout << "\nThe most expensive book's price (after discount) is: "<<maxprice << endl;
	
	int numBelow30 = 0;
	for (int i = 0; i<3; i++)
	{
		if (B2[i].getDiscountedPrice() <30)
		{
			numBelow30++;
		}
	}
	
	cout << "\nThe number of books whose price after discount is below RM 30 is: "<<cout << endl; 
	return 0; 
}

//for some reason i cannot get discounted price: 280.00 ringgit 
