#include <iostream>
using namespace std; 

class Point {
 public:
  // Constructor
  Point(int x, int y) {
    this->x = x;
    this->y = y;
  }

  // Destructor
  ~Point() {
    cout << "Point object destroyed" << endl;
  }

  // Member variables
  int x;
  int y;
};

int main() {
  {
    // Create an object of the Point class
    Point p(1, 2);
    // The constructor is called automatically when the object is created
  }
  // The destructor is called automatically when the object goes out of scope
  return 0;
}

