#include<iostream>
using namespace std;
class car{
    private:
        int price;
        string model;
        string color;
    public:
        void setprice(int p){
            price=p;
        } int getprice(){
            return price;
        }
        void setmodel(string m){
            model=m;
        } string getmod(){
            return model;
        }
        void setcolor(string c){
            color=c;
        } string getcol(){
            return color;
        }
};
int main()
{
    car c1;
    c1.setprice(1933);
    c1.setmodel("BMW");
    c1.setcolor("Red");
    cout << "PRICE : "<< c1.getprice() << " " <<"MODEL : "<<c1.getmod()<< " "<< "COLOR :  "<< c1.getcol()<<endl;
}