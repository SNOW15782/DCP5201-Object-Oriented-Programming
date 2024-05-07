//MUHAMAD ARIF BIN SALLEHUDDIN
//LAB 3 
//QUESTION 3
//SECTION B

#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class Purchase {
private:
    char name[50];
    char code[10];
    int qty;
    float price;
    float total;
public:
    void set_data(const char* n, const char* c, int q, float p);
    void calculate();
    void print();
};

void Purchase::set_data(const char* n, const char* c, int q, float p) {
    strcpy(name, n);
    strcpy(code, c);
    qty = q;
    price = p;
}

void Purchase::calculate() {
    total = qty * price;
}

void Purchase::print() {
    cout << "========================" << endl;
    cout << "RECEIPT" << endl;
    cout << "========================" << endl;
    cout << "Name: " << name << endl;
    cout << "Product Code: " << code << endl;
    cout << "Quantity: " << qty << endl;
    cout << "Product Price: RM " << fixed << setprecision(2) << price << endl;
    cout << "Total Payment: RM " << fixed << setprecision(2) << total << endl;
}

int main() {
    char choice;
    do {
        cout << "========================" << endl;
        cout << "WELCOME" << endl;
        cout << "========================" << endl;

        Purchase p;
        char name[50];
        char code[10];
        int qty;
        float price;

        cout << "Enter name: ";
        cin.ignore(); // Ignore previous newline character
        cin.getline(name, 50);

        cout << "Product code: ";
        cin.getline(code, 10);

        cout << "Enter quantity: ";
        cin >> qty;

        cout << "Enter price: RM ";
        cin >> price;

        p.set_data(name, code, qty, price);
        p.calculate();
        p.print();

        cout << "You have another customer to purchase item? [Y/N]: ";
        cin >> choice;
    } while (choice == 'Y' || choice == 'y');

    return 0;
}

