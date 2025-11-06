#include<iostream>
using namespace std;
// Multiple
class Teacher{
    public:
        void teach(){
            cout<<"I can teach"<<endl;
        }
};
class Researcher{
    public:
        void research(){
            cout<<"I can research"<<endl;
        }
};
class Lecturer : public Teacher, public Researcher{
    public:
        void lecturer(){
            cout<<"I'm lecturer"<<endl;
        }
};
int main(){
    Lecturer l;
    l.teach();
    l.research();
    l.lecturer();
    return 0;
}