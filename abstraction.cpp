#include<iostream>

using namespace std;
// pure virtual functions 
// abstract classes

class Shape{
    public:
        virtual void area() = 0;
};

class Circle : public Shape{
    public:
        int radius;
        Circle(int r){
            radius = r;
        }
        void area() override{
            cout<<"Area: "<<3.14*radius*radius<<endl;
        }
};

int main(){
    Circle c(5);
    c.area();
    return 0;
}