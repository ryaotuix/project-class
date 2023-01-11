#include "Student.h"


// Constructor
Student::Student(string student_id, double gpa, vector <string> majors, string name, int grade)
{
    this -> student_id = student_id;
    this -> gpa = gpa;
    this -> majors = majors;
    this -> name = name;
    this -> grade = grade;
}

// Shallow copy constructor
Student::Student(const Student& other)
{
    this -> student_id = other.student_id;
    this -> gpa = other.gpa;
    this -> majors = other.majors;
    this -> name = other.name;
    this -> grade = other.grade;
}


// Destructor
Student::~Student()
{
    delete this;
}


// METHODS
void Student::printStudentInfo()
{
    std::cout << "Student Name: " << name << "\n";
    std::cout << "Student ID: " << student_id << "\n";
    std::cout << "GPA: " << gpa << "\n";
    std::cout << "Majors:";
    for (auto const & major : majors)
    {
        std::cout << major << " ";
    }
    std::cout << "\n";
    std::cout << "Grade: " << grade << "\n";
}

