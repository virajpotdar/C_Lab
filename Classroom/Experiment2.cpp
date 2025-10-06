// Experiment 2:-To Display of Complex no and ADD and subtract two no and diplay them

#include <iostream>
using namespace std;

class Complex
{
  int re, img;
public:
  void getdata()
  {
    cout << "Enter the real no:";
    cin >> re;
    cout << "Enter the img Number:";
    cin >> img;
  }
  void display()
  {
    cout << "Your complex number is=" << re << "+" << img << "i" << endl;
  }
  void addSub(Complex c1, Complex c2);
};

void Complex::addSub(Complex c1, Complex c2)
{
  int re = c1.re + c2.re;
  int img = c1.img + c2.img;
  int subre = c1.re - c2.re;
  int subimg = c1.img - c2.img;
  cout << "--------------------";
  cout << "Addition of complex numbers is: " << re << "+" << img << "i" << endl;
  cout << "Subtraction of complex numbers is: " << subre << "-" << subimg << "i" << endl;
}

int main()
{
  char k;

  Complex c1, c2, c;
  do
  {
    c1.getdata();
    c1.display();
    c2.getdata();
    c2.display();
    c.addSub(c1, c2);
    cout << "Do you want to continue? (y/n): ";
    cin >> k;
  } while (k == 'y' || k == 'Y');
}