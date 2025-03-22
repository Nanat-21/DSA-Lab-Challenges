/*1. Declare an array of 15 integers and initialize the
array so that all the array elements are zero. Then 
assign 10 to the first elements and 150 to the last
element.*/
#include <iostream>
using namespace std;
int main() {
    // Array Derived Type
    int arr[15] = {0}; //Initialize all elements to 0
    arr[0] = 10;
    arr[14] = 150;
    // Printing the data
    for (int i = 0; i < 15; i++)
        printf("%d ", arr[i]);
    return 0;
}
/*2. Implement a student class with attributes such as
name, ID, and GPA. Write a main function that:*/
#include <iostream>
#include <string>
#include <iomanip> // For formatting GPA output
using namespace std;
class Student {
private:
    string name;
    int id;
    double gpa;

public:
    // Setter methods
    void setName(string studentName) {
        name = studentName;
    }
    void setId(int studentId) {
        id = studentId;
    }
    void setGpa(double studentGpa) {
        gpa = studentGpa;
    }
    // Getter methods (optional, but good practice)
    string getName() const {
        return name;
    }
    int getId() const {
        return id;
    }
    double getGpa() const {
        return gpa;
    }
    void printInfo() const {
        cout << "Student Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "GPA: " << fixed << setprecision(2) << gpa << endl; 
    }
};
int main() {
    Student student; 
    string name;
    int id;
    double gpa;
    // a. Takes users input for the student's name, ID, and GPA
    cout << "Enter student name: ";
    getline(cin, name); 
    cout << "Enter student ID: ";
    cin >> id;
    cout << "Enter student GPA: ";
    cin >> gpa;
   // b.Uses the setter methods to set these values in 
   //   a students object. 
    student.setName(name);
    student.setId(id);
    student.setGpa(gpa);

    // c.Calls printInfo() to display the student's information. 
    student.printInfo();
    return 0;
}
