#include<iostream>
using namespace std;
// Multilevel

class A{
    public:
        void eat(){
            cout<<"I can eat"<<endl;
        }
};

class B : public A{
public:
        void run(){
            cout<<"I can run"<<endl;
        }
};

class C : public B{
public:
        void sleep(){
            cout<<"I can sleep"<<endl;
        }
};

int main(){
    A a;
    B b;
    C c;
    c.eat();
    return 0;
}