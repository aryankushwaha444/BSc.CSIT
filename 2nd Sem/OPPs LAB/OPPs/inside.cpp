#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {
        cout << "Drawing a shape." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a circle." << endl;
    }
};

int main() {
	//Shape sp;
	//sp.draw();
    Shape* s = new Circle();
    
    s->draw();   // calls the draw() method of the Circle class
    Shape*s=new Shape();
    s->draw();
	delete s;
    return 0;
}
