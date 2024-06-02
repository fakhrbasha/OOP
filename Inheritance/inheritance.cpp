#include<iostream>
using namespace std;
class Person{
private:
    int id;
    char name[100];
public:
    void set_p(){
        cout << "Enter Your ID : ";
        cin >> id;
        cout << "Enter Your Name : ";
        cin >> name;
    }
    void display_p(){
        cout << "ID : "<< id <<endl;
        cout << "Name : "<<name<<endl;
    }
};
class Student:private Person{
private:
    int fee;
    char course[100];
public:
    void set_s(){
        set_p();
        cout << "Enter Your Course Name : ";
        cin >> course;
        cout << "Enter Your Fee : ";
        cin >> fee;
    }    
    void display_s(){
        display_p();
        cout << "Course Name : "<<course<<endl;
        cout << "Course Fee : "<<fee<<endl;
    }
};
int main(){
    Student s;
    s.set_s();
    s.display_s();
}