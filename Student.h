#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Student
{
    private:
        // INFORMATIONS
        string student_id;
        double gpa;
        vector <string> majors;
        string name;
        int grade;

    public:
        // FUNCTIONS
        Student(string student_id, double gpa, vector <string> majors, string name, int grade); // constructor
        Student(const Student& other); // shallow copy constructor
        ~Student(); // destructor
        void printStudentInfo();
};
#endif