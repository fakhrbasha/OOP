#include <iostream>
using namespace std;
// private -> تستخدم لتحديد أن الأشياء الموضوعة في الكلاس لا يمكن الوصول لها من خارجه
// public -> تستخدم لتحديد أن الأشياء الموضوعة في الكلاس يمكن الوصول لها من أي مكان
// protected -> تستخدم لتحديد أن الأشياء الموضوعة في الكلاس يمكن الوصول لها عند وراثتها
class Book{
    public:
        string name;
        string auther;
        double price;
        int page;

    void print(){
    cout << "Name : "<< name << endl;
    cout << "auther : "<< auther << endl;
    cout << "Price : "<< price  <<endl;
    cout << "Page : "<< page<<endl;
}
};

int main(){
    Book b1;
    b1.name="C++";
    b1.auther="Fakhr Basha";
    b1.price=2024;
    b1.page=112004;
    cout<< b1.name <<" " << b1.auther << " "<< b1.price << " "<< b1.page << endl;
    cout << endl;
    b1.print();
}