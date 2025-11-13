// take no of students as input, create a marks vector, takes input, display marks, and then calculate the avg of marks

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n, value;
    vector<int> marks;

    cout<<"Enter no of Students: "<<endl;
    cin>>n;

    for(int i = 0; i < n; i++){
        cout<<"Enter marks of student "<<i+1<<endl;
        cin>>value;
        marks.push_back(value);
    }

    cout<<"Students Marks: "<<endl;
    for(int a : marks){
        cout<<a<<" ";
    }

    cout<<"\nAverage Marks"<<endl;
    float sum = 0;
    for(int a : marks){
        sum += a; // sum = sum + a
    }
    cout<<"Average: "<<(sum/marks.size())<<endl;

    return 0;
}