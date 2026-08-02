#include <iostream>
#include <string>
using namespace std;

struct Student {
    int rollNo;
    string name;
    float marks;
    char grade;
};

char calculateGrade(float marks) {
    if(marks >= 90) return 'A';
    else if(marks >= 80) return 'B';
    else if(marks >= 70) return 'C';
    else if(marks >= 60) return 'D';
    else return 'F';
}

int main() {
    int n;
    cout << "===== Student Result Management System =====" << endl;
    cout << "Kitne students ka data enter karna hai? ";
    cin >> n;

    Student s[n];

    for(int i = 0; i < n; i++) {
        cout << "\nStudent " << i+1 << " ka data:" << endl;
        cout << "Roll No: ";
        cin >> s[i].rollNo;
        cout << "Name: ";
        cin >> s[i].name;
        cout << "Marks: ";
        cin >> s[i].marks;
        s[i].grade = calculateGrade(s[i].marks);
    }

    cout << "\n===== RESULT =====" << endl;
    cout << "RollNo\tName\tMarks\tGrade" << endl;
    for(int i = 0; i < n; i++) {
        cout << s[i].rollNo << "\t" << s[i].name << "\t"
             << s[i].marks << "\t" << s[i].grade << endl;
    }

    return 0;
}