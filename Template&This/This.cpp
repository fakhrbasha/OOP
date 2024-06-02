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
    
    // Book عند استدعاءها من أي كائن ننشئه من setTitle هنا قمنا بتعريف دالة إسمها
    // الذي يملكه الكائن title فتقوم بوضعها كقيمة للمتغير title نمرر لها قيمة مكان الباراميتر 
    void setTitle(string title)
    {
        this->title = title;
    }
};


// main() هنا قمنا بتعريف الدالة
int main()
{
    // book إسمه Book هنا قمنا بتعريف كائن من
    Book book;

    // book الخاص بالكائن title و تمرير نص لها حتى تقوم بتخزينه في المتغير book من الكائن setTitle() هنا قمنا باستدعاء الدالة
    book.setTitle("C++ for beginners");
    
    // للتأكد ما إن كانت قد تغيرت أم لا book الموجود في الكائن title هنا قمنا بطباعة قيمة المتغير
    cout << "Title: " << book.title;
    
    return 0;
}