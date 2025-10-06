/*#include <iostream>
using namespace std;
int main()
{
    int a, b;
    float num = 1.2;
    char value = 'a';
    double d = 1.22;
    short tem = -1;
    long l = 1234567890;
    int k = 5;
    int *p = &k;
    int *ptr = new int;
    *ptr = 5;
    string name = "C++ Programming";

    cout << "Enter two values:";
    cin >> a >> b;
    cout << "Addition: " << a + b << endl;
    cout << "Float value: " << num << endl;
    cout << "Character: " << value;
    cout << "Double value: " << d << endl;
    cout << "Short value: " << tem << endl;
    cout << "Long value: " << l << endl;
    cout << "String: " << name << endl;
    cout << "Pointer value: " << *ptr << endl;
    cout << "Pointer to int: " << *p << endl;

    return 0;
} */

// #include <iostream>
// using namespace std;

// class Base { public: virtual void show(){ cout<<"Base\n"; } };
// class Derived: public Base { public: void show(){ cout<<"Derived\n"; } };

// int main() {
//     double pi = 3.14;
//     int x = static_cast<int>(pi);  // static_cast
//     cout << "pi -> int: " << x << endl;

//     Base* b = new Derived;
//     Derived* d = dynamic_cast<Derived*>(b); // dynamic_cast
//     if(d) d->show();

//     const int a = 100;
//     int* p = const_cast<int*>(&a);  // const_cast
//     cout << "Const cast: " << *p << endl;

//     int num = 66;
//     char* ch = reinterpret_cast<char*>(&num); // reinterpret_cast
//     cout << "Reinterpret: " << *ch << endl;
// }

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

int main() {
    try {
        vector<int> v = {1,2,3};
        cout << "Result"<<v.at(4);  // throws out_of_range
    }
    catch(const out_of_range& e) {
        cout << "Out of range: " << e.what() << endl;
    }
    catch(const exception& e) {
        cout << "Other exception: " << e.what() << endl;
    }
}
