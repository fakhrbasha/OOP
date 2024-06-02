#include<iostream>
using namespace std;
class Student{
private: 
    int id;
    string name;
    double gpa;
public:
    void setid(int );
    void setname(string);
    void setgpa(double);
    void display();
};
void Student::setid(int i){
    const int mx=1000;
    if(i<=mx)
        id=i;
    else   
        id=mx;

}
void Student::setname(string n){
    name=n;
}
void Student::setgpa(double gp){
    const double mx=4.0;
    if(gp<=4.0)
        gpa=gp;
    else   
        gpa=0;
}
void Student::display(){
    cout << "Name : "<<name <<endl;
    cout << "ID : "<< id<<endl;
    cout << "GPA : "<< gpa<<endl;
}
int main(){
    Student s1;
    s1.setname("Fakhr Basha");
    s1.setid(226);
    s1.setgpa(3.5);
    s1.display();

}