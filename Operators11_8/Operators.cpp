//Arithmetic,Logical,Relational & Bitwise Operators..

#include <iostream>
using namespace std;
int main()
{   char k;
    int a, b,choice;
    do {
    cout << "Select the type of operation you want to perform:" << endl;
    cout << "1. Arithmetic" << endl;
    cout << "2. Logical" << endl;
    cout << "3. Relational" << endl;
    cout << "4. Bitwise" << endl;
    cout << "Enter your choice (1, 2, 3 or 4): ";
    cin >> choice;
    cout << "Enter two integers: ";
    cin >> a >> b;

    //ARITHMETIC OPERATORS 
    if (choice == 1)
    {   int c; 
        cout<<"1.Addition (a+b)"<<endl;
        cout<<"2.Subtraction (a-b)"<<endl;
        cout<<"3.Multiplication (a*b)"<<endl;
        cout<<"4.division(a/b)"<<endl;
        cout<<"5.Modules (a%b)"<<endl;
        cin >> c;
       switch(c)
        {
        case 1:
            cout << "Result: " << a + b << endl;
            break;
        case 2:
            cout << "Result: " << a - b << endl;
            break;
        case 3:
            cout << "Result: " << a * b << endl;
            break;
        case 4:
            if (b != 0)
            { cout << "Result: " << a / b << endl;}
            else
            {  cout << "Number Can't be divisible by zero" << endl;}
            break;
        case 5:
            if (b != 0)
            {  cout << "Result: " << a % b << endl; }
            else
            {  cout << "Modulus by zero can't be done" << endl;}
            break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
         }
    }
    // LOGICAL OPERATORS
    else if (choice == 2)
    {   int m;
        cout<<"1.Logical AND (&&)"<<endl;
        cout<<"2.Logical OR (||)"<<endl;
        cout<<"3.Logical NOT (!)"<<endl;
        switch(m)
        { case 1:
        cout << "Logical AND (&&): " << (a && b) << endl;
        break;
         case 2:
        cout << "Logical OR (||): " << (a|| b) << endl;
        break;
         case 3:
        cout << "Logical NOT (!): " << (!a) << endl;
        break;
        default:
        cout << "Error: Invalid operator." << endl;
            break;
        }
      }
    // RELATIONAL OPERATORS
    else if (choice == 3)
    {   int r;
        cout<<"1.Equal to (a==b): "<<endl;
        cout<<"2.Not eqaul to (a!=b):"<<endl;
        cout<<"3.Greater Than (a>b):"<<endl;
        cout<<"4.Less than (a<b):"<<endl;
        cout<<"5.Greater Than or equal to (a>=b):"<<endl;
        cout<<"6.Less than or eqaul to (a<=b):"<<endl;
        switch(r)
      { case 1: 
        cout << a << " == " << b << " is " << (a == b) << endl;
        break;
        case 2:
        cout << a << " != " << b << " is " << (a != b) << endl;
        break;
        case 3:
        cout << a << " > " << b << " is " << (a > b) << endl;
        break;
        case 4:
        cout << a << " < " << b << " is " << (a < b) << endl;
        break;
        case 5:
        cout << a << " >= " << b << " is " << (a >= b) << endl;
        break;
        case 6:
        cout << a << " <= " << b << " is " << (a <= b) << endl;
        break;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }
   }
    //BITWISE OPERATORS
    else if (choice == 4)
    {  int B;
        cout << "1.Bitwise AND (&): "<< endl;
        cout << "2.Bitwise OR (|): " << endl;
        cout << "3.Bitwise XOR (^): "  << endl;
        cout << "4.Bitwise NOT (~): " <<endl;
        cout << "5.Bitwise Left Shift (a << 1): " << endl;
        cout << "6.Bitwise Right Shift (b >> 1):"<<endl;
         cout<<"Enter your choice:";
         cin>>B;
         switch(B)
         {  case 1:
            cout << "Bitwise AND (&): " << (a & b) << endl;
            break;
            case 2:
        cout << "Bitwise OR (|): " << (a | b) << endl;
            break;
            case 3:
        cout << "Bitwise XOR (^): " << (a ^ b) << endl;
            break;
            case 4:
        cout << "Bitwise NOT (~): " << (~a) << endl;
            break;  
            case 5:
        cout << "Bitwise Left Shift (a << 1): " << (a << 1) << endl;
         break;
          case 6:
        cout << "Bitwise Right Shift (b >> 1): " << (b >> 1) << endl;
           break;
           default:
            cout << "Error: Invalid operator." << endl;
            break;
    }
   }
    else
    {
        cout << "Error: Invalid choice." << endl;
    }
    cout<<"Do you want to continue ?";
    cin>>k;
    } while (k=='y'||k=='Y');
    return 0;
}
