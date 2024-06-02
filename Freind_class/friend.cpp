#include<iostream>
using namespace std;
class Dis{
private:
    int data;
    friend int addfive(Dis);
public:
    Dis():data(0){}

};
int addfive(Dis d){
    d.data+=5;
    return d.data;
}
int main(){
    Dis d1;
    cout << "DISTANCE : "<< addfive(d1)<<endl;
}