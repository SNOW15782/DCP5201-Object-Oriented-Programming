//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 3 
//QUESTION 3
//SECTION A

#include <iostream>
#include <iomanip>
#include <cstring> // For strcpy
using namespace std;

// Class definition
class Purchase {
private:
    // Private data members
    char name[50];
    char code[10];
    int qty;
    float price;
    float total;
public:
    // Public member functions declarations
    void set_data(const char* n, const char* c, int q, float p);
    void calculate();
    void print();
};

// Definition of member function set_data
void Purchase::set_data(const char* n, const char* c, int q, float p) {
    // Copy input data to class members
    strcpy(name, n);
    strcpy(code, c);
    qty = q;
    price = p;
}

// Definition of member function calculate
void Purchase::calculate() {
    // Calculate total payment
    total = qty * price;
}

// Definition of member function print
void Purchase::print() {
    // Display receipt
    cout << "========================" << endl;
    cout << "RECEIPT" << endl;
    cout << "========================" << endl;
    cout << "Name: " << name << endl;
    cout << "Product Code: " << code << endl;
    cout << "Quantity: " << qty << endl;
    cout << "Product Price: RM " << fixed << setprecision(2) << price << endl;
    cout << "Total Payment: RM " << fixed << setprecision(2) << total << endl;
}

// Main function
int main() {
    // Welcome message
    cout << "========================" << endl;
    cout << "WELCOME" << endl;
    cout << "========================" << endl;

    // Create an object of class Purchase
    Purchase p;
    char name[50];
    char code[10];
    int qty;
    float price;

    // Get user inputs
    cout << "Enter name: ";
    cin.getline(name, 50);

    cout << "Product code: ";
    cin.getline(code, 10);

    cout << "Enter quantity: ";
    cin >> qty;

    cout << "Enter price: RM ";
    cin >> price;

    // Set data, calculate total, and print receipt
    p.set_data(name, code, qty, price);
    p.calculate();
    p.print();

    return 0;
}
