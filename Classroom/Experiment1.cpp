//Experiment 1  A program to use a class in object-oriented programming 

// #include <iostream>
// using namespace std;
// struct Student {
//     int id;
//     string name;
//     float grade;
// };

// int main() {
//     Student s1;
//         cout<<"Enter Student Id:";
//         cin>>s1.id;
//         cout<<"Enter Name:";
//         cin>>s1.name;
//        cout<<"Enter grade:";
//        cin>>s1.grade;
       
//     cout<<"____Student Details______";
//     cout << "\nStudent ID: " << s1.id << endl;
//     cout << "Name: " << s1.name << endl;
//     cout << "Grade: " << s1.grade << endl;
//     return 0;
// }


    #include <iostream>
    #include<string>
    using namespace std;

    class Student {
        int rollNo;
        string name;
        float marks;
    public:
        void input() {
            cout << "Enter Roll No: ";
            cin >> rollNo;
            cout << "Enter Name: ";
            cin.ignore(); 
            getline(cin, name);
            cout << "Enter Marks: ";
            cin >> marks;
        }
        void display();
    };
    void Student::display()
        {
            cout << "Roll No: " << rollNo << ", Name: " << name << ", Marks: " << marks << endl;
        };

    int main() {
        int n;
        cout << "Enter number of students: ";
        cin >> n;
        Student students[n]; 

        for(int i = 0; i < n; i++) {
            cout << "\nEnter details for student " << i+1 << ":\n";
            students[i].input();
        }

        cout << "\n-- Student Details --\n";
        for(int i = 0; i < n; i++) {
            students[i].display();
        }
        return 0;
    }


  