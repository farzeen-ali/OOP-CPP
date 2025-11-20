#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>

using namespace std;

class Student{
    private:
        string name;
        int marks;
    public:
        Student();
        Student(string n, int m);

        void inputData();
        void displayData();
};

#endif