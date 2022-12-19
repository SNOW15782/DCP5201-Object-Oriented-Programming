#include <iostream>
using namespace std; 

class Point {
 public:
  // Constructor
  Point(int x, int y) {
    this->x = x;
    this->y = y;
  }

  // Member variables
  int x;
  int y;
};

int main() {
  // Create an object of the Point class
  Point p(1, 2);
  // The constructor is called automatically when the object is created
  // and initializes the member variables x and y
  cout << p.x << ", " << p.y << endl;  // Outputs: 1, 2
  return 0;
}


