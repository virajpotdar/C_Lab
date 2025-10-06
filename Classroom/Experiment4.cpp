#include <iostream>
using namespace std;
class Rectangle
{   double l, w;
public:
    Rectangle()
    {
        l = 0;
        w = 0;
        cout << "[Default constructor called]" << endl;
    }

    Rectangle(double side)
    {
        l = side;
        w = side;
        cout << "[Square constructor called]" << endl;
    }

    Rectangle(double length, double width)
    {
        l = length;
        w = width;
        cout << "[Rectangle constructor called]" << endl;
    }

    ~Rectangle()
    {
        cout << "[Destructor called length: " << l
             << ", width: " << w << "]" << endl;
    }

    double area() { return l * w; }
    double perimeter() { return 2 * (l + w); }

    void display()
    {
        cout << "Length: " << l
             << ", Width: " << w << endl;
        cout << "Area: " << area()
             << ", Perimeter: " << perimeter() << endl;
    }

    void display(int)
    {
        cout << "Area: " << area()
             << ", Perimeter: " << perimeter() << endl;
    }
};

int main()
{
    cout <<"\nConstructor Overloading \n";
    Rectangle r1;
    r1.display();

    Rectangle r2(6);
    r2.display();

    Rectangle r3(4, 6);
    r3.display();

    cout << "Function Overloading \n";
    r2.display(3);

    cout << "(Now Destructors will be called)\n";
    return 0;
}
