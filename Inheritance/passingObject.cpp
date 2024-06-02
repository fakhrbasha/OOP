#include<iostream>
using namespace std;
class Distance{
private:
    int feet;
    float inches;
public:
    Distance():feet(0),inches(0){};
    Distance(int f, float i):feet(f),inches(i){};
    void setdis(int f,float i){
        feet=f; 
        inches=i;
    };
    void print();
    Distance Add_dis(Distance d);

};
Distance Distance::Add_dis(Distance d){
    Distance res;
    res.feet=feet+d.feet;
    res.feet=inches+d.inches;
    return res;
}
void Distance::print(){
    cout << "Feet : "<<feet << " " << "INches : "<< inches<<endl;
}
int main(){
    Distance obj1(5,3.2);
    Distance obj2(3,5.6);
    Distance obj3=obj1.Add_dis(obj2);
    obj3.print();

}