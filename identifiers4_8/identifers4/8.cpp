// Use of identifiers & constants in area of a circle program

 #include <iostream>
 
using namespace std;
int main() {
    const float PI = 3.14;  
    int r;       // variable name: radius
    float area;       // variable name: area
    string name = "Circle"; // variable name: name

    cout << "Name of the shape: " << name << endl;
    cout << "Enter radius of the circle: ";
    cin >> r;

    area = PI * r * r;

    cout << "Area of circle = " << area << endl;
    return 0;
}

/*
#include <iostream>
using namespace std;
int calculateArea(int width, int height) {
    return width * height;
}
int main() {
    // identifiers
    int length = 10;
    int breadth = 5;

    const int RATE = 10;
    int area = calculateArea(length, breadth);
    cout << "Area of rectangle = " << area << endl;
  
    int cost = area * RATE;
    cout << "Cost to paint = " << cost << endl;
    return 0;
}`
*/