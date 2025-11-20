#include "Student.h"

Student::Student(){
    name = "Unknown";
    marks = 0;
}

Student::Student(string n, int m){
    name = n;
    marks = m;
}

void Student::inputData(){
    cout<<"Enter name: "<<endl;
    getline(cin >> ws, name);
    cout<<"Enter Marks: "<<endl;
    cin>>marks;
}

void Student::displayData(){
    cout<<"Name: "<<name<<" | Marks: "<<marks<<endl;
}
