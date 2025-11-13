#include<iostream>

using namespace std;

// Static => 

// void counter(){
//     static int count = 0;
//     count++;
//     cout<<"Count: "<<count<<endl;
// }

class Company{
    public:
        static int employeeCount;

        static void showCount(){
            cout<<"Total Employee: "<<employeeCount<<endl;
        } 
};

int Company::employeeCount = 0;

int main(){
    // counter();
    // counter();
    // counter();
    Company::showCount();

    Company::employeeCount+=5;
    Company::showCount();
    return 0;
}