// Inheritance
// 5 types: Single, Multiple, Multilevel, Hierarchical, Hybrid

#include<iostream>
using namespace std;
class Employee {
    public:
        string name;
        int age;

        void getDetails(){
            cout<<"Enter Your Name: ";
            getline(cin, name);
            cout<<"Enter your age: ";
            cin>>age;
        } 
};

class Manager : public Employee{
    public:
        void sayHello(){
            cout<<"Good Morning!"<<endl;
        }
};

int main(){
    Employee e;
    Manager m;
    m.getDetails();
    m.sayHello();
    return 0;
}