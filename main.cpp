#include<iostream>

using namespace std;

class Student{
    public:
        string studentName;
        int age;

        void displayDetails(){
            cout<<"Student Name: "<<studentName<<" Student age is: "<<age<<endl;
        }
};

int main(){

    // int myAge = 23;
    // float hieght = 40.4;
    // double weight = 20.87245;
    // char grade = 'A';
    // bool isStudent = true;
    // string myName = "Farzeen";

    // cout<<myAge<<endl;
    // cout<<hieght<<endl;
    // cout<<weight<<endl;
    // cout<<grade<<endl;
    // cout<<isStudent<<endl;
    // cout<<myName<<endl;

    // Operators, Operands, Expression

    // Arithmetic
    // int a = 10, b = 3;

    // cout<<"Addition: "<<a+b<<endl;
    // cout<<"Subtrction: "<<a-b<<endl;
    // cout<<"Multiplication: "<<a*b<<endl;
    // cout<<"Division: "<<a/b<<endl; 
    // cout<<"Modulus: "<<a%b<<endl;

    // Relational Operators
    // cout<<(a == b)<<endl;
    // cout<<(a != b)<<endl;
    // cout<<(a > b)<<endl;
    // cout<<(a < b)<<endl;

    // Logical Operators
    // cout<<(a>b && b<a)<<endl;
    // cout<<(a>b || b<a)<<endl;
    // cout<<!(a>b)<<endl;

    // Assignment Operators
    // int c = 3;
    // // c = c + 4;
    // c+=4;

    // Increment / Decrement
    // cout<<"Pre Increment: "<<++c<<endl;    
    // cout<<"Post Increment: "<<c++<<endl;    
    // cout<<c;
    // cout<<"Pre Decrement: "<<--c<<endl;    
    // cout<<"Post Decrement: "<<c--<<endl;    
    // cout<<c;

    // User Input
    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;

    // cout<<"Your age is: "<<age;

    // string myName;
    // cout<<"Enter Your Name: ";
    // cin>>myName; // without space
    // getline(cin, myName);

    // cout<<"User name is: "<<myName;

    Student farzeen;
    farzeen.studentName = "Farzeen";
    farzeen.age = 23;

    farzeen.displayDetails();

    return 0;
}