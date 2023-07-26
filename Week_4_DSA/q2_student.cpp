#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    char grade;

public:
    void readData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter grade: ";
        cin >> grade;
    }

    void displayData() {
        cout << "Name: " << name <<endl;
        cout <<"Roll Number: " << rollNumber <<endl;
        cout << "Grade: " << grade << endl;
    }

    static void sortByRollNumber(Student students[], int size) {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (students[j].rollNumber > students[j + 1].rollNumber) {
                    Student temp = students[j];
                    students[j] = students[j + 1];
                    students[j + 1] = temp;
                }
            }
        }
    }
};

int main() {
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter details of student " << i + 1 << ":" << endl;
        students[i].readData();
    }

    

    cout<<endl << "Student information before sorting:" << endl;
    for (int i = 0; i < n; i++) {
        students[i].displayData();
    }

    Student::sortByRollNumber(students, n);

    cout <<endl<< "Student information after sorting by roll number:" << endl;
    for (int i = 0; i < n; i++) {
        students[i].displayData();
    }

    return 0;
}
