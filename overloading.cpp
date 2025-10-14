#include<iostream>

using namespace std;

class Calculator{
    public:
        int add(int a, int b){
            return a+b;
        }
        int add(int a, int b, int c){
            return a+b+c;
        }
        float add(float a, float b){
            return a+b;
        }
};

int main(){
    Calculator c1;
    int choice;

    cout<<"Method Overloading"<<endl;
    cout<<"Enter Your Choice: ";
    cin>>choice;

    if(choice == 1){
        int x,y;
        cout<<"Enter Two Values: "<<endl;
        cin>>x>>y;
        cout<<"Result: "<<c1.add(x,y);
    }
    else if(choice == 2){
        int x,y,z;
        cout<<"Enter Three Values: "<<endl;
        cin>>x>>y>>z;
        cout<<"Result: "<<c1.add(x,y,z);
    }
    else if(choice == 3){
        float x,y;
        cout<<"Enter two decimal Values: "<<endl;
        cin>>x>>y;
        cout<<"Result: "<<c1.add(x,y);
    }
    else{
        cout<<"Invalid Choice!"<<endl;
    }

    return 0;
}