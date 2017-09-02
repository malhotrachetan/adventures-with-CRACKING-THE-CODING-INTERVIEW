//CTC page 114

#include<iostream>
using namespace std;

#define NAME_SIZE 50

class Person{
    int id;
    char name[NAME_SIZE];

    public:
    void aboutme(){
        cout<<"I am a person";
    }

};

class Student: public Person{
    public:
        void aboutme(){
            cout<<"I am a student";
        }
};

int main(){
    Student *p=new Student();
    p->aboutme();
    delete p; //deallocating the memory 
    return 0;
}
