#include "Student.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <utility>
#include <vector>
#include <string>

using namespace std;


// class Student
// {
//     private:
//         // INFORMATIONS
//         string student_id;
//         double gpa;
//         vector <string> majors;
//         string name;
//         int grade;

//     public:
//         // FUNCTIONS
//         Student(string student_id, double gpa, vector <string> majors, string name, int grade); // constructor
//         Student(const Student& other); // shallow copy constructor
//         ~Student(); // destructor
//         void printStudentInfo();
// };

// // Constructor
// Student::Student(string student_id, double gpa, vector <string> majors, string name, int grade)
// {
//     this -> student_id = student_id;
//     this -> gpa = gpa;
//     this -> majors = majors;
//     this -> name = name;
//     this -> grade = grade;
// }

// // Shallow copy constructor
// Student::Student(const Student& other)
// {
//     this -> student_id = other.student_id;
//     this -> gpa = other.gpa;
//     this -> majors = other.majors;
//     this -> name = other.name;
//     this -> grade = other.grade;
// }


// // Destructor
// Student::~Student()
// {
//     delete this;
// }

// void Student::printStudentInfo()
// {
//     cout << "Student Name: " << name << "\n";
//     cout << "Student ID: " << student_id << "\n";
//     cout << "GPA: " << gpa << "\n";
//     cout << "Majors:";
//     for (auto const & major : majors)
//     {
//         cout << major << " ";
//     }
//     cout << "\n";
//     cout << "Grade: " << grade << "\n";
// }


int main()
{
    printf("Let's get started!\n");
    cout << "do it constantly" << "\n";
    cout << "-------------------------------------\n";
    
    vector<string> majors_hyeonwoo {"Data Science", "Computer Science"};

    // Explicit constructor
    Student hyeonwoo = Student ("0032379604", 4.0, majors_hyeonwoo, "Hyeonwoo Park", 2);
    hyeonwoo.printStudentInfo();
    
    // Explicitly call destructor
    hyeonwoo.~Student();
    hyeonwoo.printStudentInfo(); // It stops here!

    Student jashan = Student(hyeonwoo);
    jashan.printStudentInfo();

    return 0;
}

