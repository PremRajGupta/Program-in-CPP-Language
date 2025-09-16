// Write a program using classes with arrays as data members.
#include <iostream>
using namespace std;

class Student {
    string name;
    int rollNo;
    int marks[3];

public:
    void input() {
        cout<<"Enter Student Name: ";
        cin>>name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter marks for 5 subjects:" << endl;
        for (int i = 0; i < 5; i++) {
            cout << "Subject " << (i+1) << ": ";
            cin >> marks[i];
        }
    }

    void display() {
        cout<< "\nStudent Name is: "<<name<<endl;
        cout << "Student Roll Number: " << rollNo << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();
    return 0;
}