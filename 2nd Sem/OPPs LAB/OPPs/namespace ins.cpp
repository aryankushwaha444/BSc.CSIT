#include <iostream>
using namespace std;

class MyDouble;
class MyInteger {
  public:
    int value;
    MyInteger(int x) {   // Constructor
      value = x;
    }
    operator MyDouble() const;  // Declaration of conversion operator to convert MyInteger to MyDouble
};

class MyDouble {
  public:
    double value;
    MyDouble(double x) {   // Constructor
      value = x;
    }
    MyDouble(MyInteger x) {   // Constructor to convert MyInteger to MyDouble
      value = x.value;
    }
};

MyInteger::operator MyDouble() const {   // Definition of conversion operator to convert MyInteger to MyDouble
  return MyDouble(value);
}

int main() {
  MyInteger x(5);
  MyDouble y = static_cast<MyDouble>(x);  // Conversion of MyInteger to MyDouble using conversion operator
  cout << "x = " << x.value << endl;
  cout << "y = " << y.value << endl;
  return 0;
}
