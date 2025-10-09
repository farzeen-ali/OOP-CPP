#include<iostream>

using namespace std;

class Employee{
    public:
        string firstName;
        int age;
        float marks;

        void takeInput(){
            cout<<"Enter your name: ";
            getline(cin, firstName);
            cout<<"Enter your age: ";
            cin>>age;
            cout<<"Enter your marks: ";
            cin>>marks;
        }
        void displayInfo(){
            cout<<"Your Name is: "<<firstName<<endl;
            cout<<"Your Age is: "<<age<<endl;
            cout<<"Your Marks is: "<<marks<<endl;
        }
};

int main(){
    Employee em;
    em.takeInput();
    em.displayInfo();
    return 0;
}