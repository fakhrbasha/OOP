#include <iostream>

using namespace std;

// يحتوي على 4 متغيرات Book هنا قمنا بتعريف كلاس إسمه
class Book {

public:
    // هنا قمنا بتعريف خصائص الكلاس
    string title;
    string author;
    double price;
    int numberOfPages;
    
    // هنا قمنا بتعريف كونستركتور يجب تمرير 4 قيم له عندما يتم إستدعاؤه
    Book(string title, string author, double price, int numberOfPages)
    {
        // هنا قمنا بوضع القيم التي نمررها للكونستركتور بالترتيب في خصائص الكائن
        this->title = title;
        this->author = author;
        this->price = price;
        this->numberOfPages = numberOfPages;
    }

    // تقوم بطباعة كل قيم المتغيرات الموجودة فيه Book عند استدعاءها من أي كائن ننشئه من printInfo هنا قمنا بتعريف دالة إسمها
    void printInfo()
    {
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Price: " << price << "$\n";
        cout << "Number of pages: " << numberOfPages << "\n";
    }
};


// main() هنا قمنا بتعريف الدالة
int main()
{
    // مع تمرير القيم التي نريد وضعها فيه بشكل مباشر من خلال الكونستركتور book إسمه Book هنا قمنا بتعريف كائن من
    Book book("C++ for beginners", "fakhr", 9.99, 420);

    // حتى تقوم بطباعة القيم الموجودة فيه book من الكائن printInfo() هنا قمنا باستدعاء الدالة
    book.printInfo();

    return 0;
}