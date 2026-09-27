#include <iostream>
using namespace std;

class Student
{
private:
    char name[30];
    int rollno;
    float marks;

public:

    // Member function to input student details
    void inputDetail()
    {
        cout << "\nEnter Student Name: ";
        cin >> name;

        cout << "\nEnter Roll Number: ";
        cin >> rollno;

        cout << "\nEnter Marks: ";
        cin >> marks;
    }

    // Member function to display student details
    void displayDetail()
    {
        cout << "\nStudent Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student studentObj;

    // Input student details
    studentObj.inputDetail();

    // Display student details
    cout << "\nStudent Detail:\n";
    studentObj.displayDetail();

    return 0;
}
