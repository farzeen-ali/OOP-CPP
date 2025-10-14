#include<iostream>

using namespace std;

class Employee{
    public:
        string name;
        int salary;

        void getData(){
            cout<<"Enter your name: "<<endl;
            cin.ignore();
            getline(cin, name);
            cout<<"Enter your salary: "<<endl;
            cin>>salary;
        }
       virtual void calculateBonus(){
            cout<<"Your Bonus is: "<<salary*0.05<<endl;
        }
};
class Manager : public Employee{
    public:
    void calculateBonus() override{
        cout<<"Your Bonus is: "<<salary*0.10<<endl;
    }
};
int main(){
    Employee e;
    Manager m;
    int choice;

    cout<<"Enter your Choice: "<<endl;
    cin>>choice;

    if(choice == 1){
        e.getData();
        e.calculateBonus();
    }
    else if(choice == 2){
        m.getData();
        m.calculateBonus();
    }
    else{
        cout<<"Invalid Choice!"<<endl;
    }
    return 0;
}