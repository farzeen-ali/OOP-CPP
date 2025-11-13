#include<iostream>
#include<vector>

using namespace std;

class Students{
    public:
        string name;
        int marks;
    
        void inputData(){
            cout<<"Enter name: "<<endl;
            getline(cin >> ws, name);
            cout<<"Enter marks: "<<endl;
            cin>>marks;
        }
        void displayDetails(){
            cout<<"Name: "<<name<<" | "<<"Marks: "<<marks<<endl;
        }
};

int main(){
    vector<Students> std;
    int n;
    cout<<"Enter number of students: "<<endl;
    cin>>n;

    for(int i = 0; i < n; i ++){
        Students s;
        cout<<"Student "<<i+1<<endl;
        s.inputData();
        std.push_back(s);
    }

    cout<<"=====Student Details====="<<endl;
    for(auto d: std){
       d.displayDetails(); 
    }
    return 0;
}