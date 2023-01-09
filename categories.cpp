#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <utility>
#include <vector>



class Student
{
    private:
        // INFORMATIONS
        int student_id;
        int gpa;
        string major;
        string name;
        int grade;

    public:
        // FUNCTIONS
        Student(int id, int gpa); // constructor
        ~Student(); // destructor

        void printStudentInfo();

        
}

// Constructor
Student::Student(int id, int gpa)
{
    student_id = id;
    gpa = gpa;
}

// Destructor
Student::~Student()
{
    delete Student;
}

void Student::printStudentInfo()
{

}





class Major 
{
    public:
        string major_name;
        string department;

}




using namespace std;


int main()
{
    printf("Let's get started!\n");
    cout << "do it constantly" << "\n";

    Student me;

}