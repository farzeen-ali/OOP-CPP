#include<iostream>
using namespace std;
// Heirarchical
class Teacher{
    public:
        void teach(){
            cout<<"I can teach"<<endl;
        }
};
class Researcher : public Teacher{
    public:
        void research(){
            cout<<"I can research"<<endl;
        }
};
class Lecturer : public Teacher{
    public:
        void lecturer(){
            cout<<"I'm lecturer"<<endl;
        }
};
int main(){
    Researcher r;
    r.teach();
    Lecturer l;
    l.teach();
    return 0;
}