#include<iostream>

using namespace std;
// Constructor => special method
// 3) 1) Default 2) Paramterized 3) Copy 
class Student{
    public:
        string name;
        int age;
        float marks;
    // Default Constructor
    Student(){
        cout<<"Default Constructor!"<<endl;
        name = "Guest";
        age = 0;
        marks = 0;
    }
    // Parameterized Constructor
    Student(string n, int a, float m){
        cout<<"Parameterized Constructor"<<endl;
        name = n;
        age = a;
        marks = m;
    }
    // Copy Constructor
    Student(const Student &obj){
        cout<<"Copy Constructor: "<<endl;
        name = obj.name;
        age = obj.age;
        marks = obj.marks;
    }
    void displayInfo(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){
    Student s;
    s.displayInfo();

    string name;
    int age;
    float marks;
    cout<<"Enter Name: "<<endl;
    getline(cin, name);
    cout<<"Enter age: "<<endl;
    cin>>age;
    cout<<"Enter marks: "<<endl;
    cin>>marks;

    Student s2(name, age, marks);
    s2.displayInfo();

    Student s3 = s2;
    cout<<"Copy Constructor: "<<endl;
    s3.displayInfo();

    return 0;
}