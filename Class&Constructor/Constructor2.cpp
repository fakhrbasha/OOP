#include<iostream>
using namespace std;

#include "Constructor2.h"

Dis::Dis() :feet(0),inches(0){

}
Dis::Dis(float f,float i):feet(f),inches(i){

}
void Dis:: setdis(float f, float i){
    feet=f;
    inches=i;
}
void Dis::print(){
    cout << "Feet : "<<feet<< " Inches : "<< inches<<endl;
}
int main(){
    Dis d;
    Dis d2(5,3.5);
    d2.print();
}