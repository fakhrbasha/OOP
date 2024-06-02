#include <iostream>

using namespace std;

// يحتوي على 4 متغيرات Book هنا قمنا بتعريف كلاس إسمه
class Book {

public:
    string title;
    string author;
    double price;
    int numberOfPages;

    // printInfo() هنا قمنا بتعريف شكل الدالة
    void printInfo();

};

// و جعلناها تقوم بطباعة قيم متغيرات الكائن الذي يستدعيها Book الموجودة في الكلاس printInfo هنا قمنا بتعريف محتوى الدالة
void Book::printInfo()
{
    cout << "Title: " << title << "\n";
    cout << "Author: " << author << "\n";
    cout << "Price: " << price << "$\n";
    cout << "Number of pages: " << numberOfPages << "\n";
}
void print(Book b){
    cout << "Title : " <<b.title<<endl;
    cout << "Author : "<< b.author<<endl;
    cout << "Price : "<< b.price<<endl;
    cout << "Nuumber Of Page : "<<b.numberOfPages<<endl;
}

int main()
{
    // book إسمه Book هنا قمنا بتعريف كائن من
    Book book;

    // book هنا قمنا بإعطاء قيم لمتغيرات الكائن
    book.title = "C++ for beginners";
    book.author = "Fakhr basha";
    book.price = 9.99;
    book.numberOfPages = 420;
    
    // حتى تقوم بطباعة القيم الموجودة فيه book من الكائن printInfo() هنا قمنا باستدعاء الدالة
    book.printInfo();
    cout << "----------------\n";

    Book b;
    b.title = "C++ for beginners";
    b.author = "Ahmed Fakhr";
    b.price = 10.7;
    b.numberOfPages = 420;
    print(b);
    return 0;
}