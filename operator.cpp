#include <iostream>
#include <cstring>
using namespace std;
typedef struct s
{
    char string[100];
} str;

int main()
{
    str fname, name1, name2;
    strcpy(fname.string, "operator.cpp");
    strcpy(name1.string, "name1"); 
    strcpy(name2.string, "name2");
    cout << "File Name: " << fname.string << endl;
    cout << "Name 1: " << name1.string << endl;
    cout << "Name 2: " << name2.string << endl;
    
    return 0;
}
