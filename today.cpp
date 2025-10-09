#include<iostream>

using namespace std;

class Employee{
    public:
        string firstName;
        int age;

        void displayInfo(){
            cout<<"Employee Name is: "<<firstName<<" "<<"and Age is: "<<age<<endl;
        }
};

int main(){
    // int age = 23;
    // float height = 5.5;
    // double weight = 34.57643;
    // char letter = 'b';
    // string name = "farzeen";
    // bool isStudent = true;

    // Operators, Operands, Expressions
    // Arithmetic
    // int a = 10, b = 3;
    // cout<<"Addition: "<<(a+b)<<endl;
    // cout<<"Subtrction: "<<(a-b)<<endl;
    // cout<<"Division: "<<(a/b)<<endl;
    // cout<<"Multiplication: "<<(a*b)<<endl;
    // cout<<"Modulus: "<<(a%b)<<endl;

    // Relational Operators
    // cout<<(a<b)<<endl; // 0
    // cout<<(a>b)<<endl; // 1
    // cout<<(a==b)<<endl; // 0
    // cout<<(a!=b)<<endl; // 1

    // Logical Operators
    // bool a = true, b = false;
    // cout<<(a && b)<<endl;
    // cout<<(a || b)<<endl;
    // cout<<(!a)<<endl;

    // Assignment Operators
    // int age = 23;
    // int c = 10;
    // // c = c + 3;
    // c+=3;

    // // User input
    // string myName;
    // cout<<"Enter your name: ";
    // // cin>>myName;
    // getline(cin, myName);

    // cout<<"My name is: "<<myName;

    Employee em;
    em.firstName = "Ali";
    em.age = 22;

    em.displayInfo();

    return 0;
}

