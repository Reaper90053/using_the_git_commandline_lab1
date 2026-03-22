#include <iostream>
#include "Book.h"
#include "EBook.h"
#include "Reader.h"
#include "Library.h"
#include "PrintedBook.h"

using namespace std;

void show(Book& b) {
    b.printInfo();
}

int main() {
    Book b("Kobzar","Shevchenko",1840);
    EBook eb("C++ Primer","Lippman",2012,5.4);

    Book* ptr1 = &eb;
    ptr1->printInfo(); // 5 лаба  тепер virtual → EBook

    EBook e1("C++ Primer", "Lippman", 2012, 5.4);

    PrintedBook p1("The Hobbit", "Tolkien", 1937, 310);
    show(e1);
    show(p1); // 5 лаба


    Book b1("Kobzar","Shevchenko",1840);

    Book* ptr;

    ptr = &e1;
    ptr->printInfo();

    PrintedBook pb("Hobbit","Tolkien",1937,310);
    ptr = &pb;
    ptr->printInfo(); // 5 лаба (Book* ptr)

    // copy constructor
    Book b2 = b1;

    // move constructor
    Book b3 = move(b1);

    // this
    b2.setTitle("NewBook");

    // const object
    const Book b4("ConstBook","Author",2000);
    b4.printInfo();

    // static
    cout << "Books created: " << Book::getBookCount() << endl;

    // оператор +
    Book b5 = b2 + b3;
    b5.printInfo();

    // унарний оператор
    Book b6 = -b5;
    b6.printInfo();

    // <<
    cout << b6 << endl;

    Reader r1;
    Reader r2("Ivan Petrenko ", 123);

    Library l1;
    Library l2("Central Library", "Chernivtsi city");

    cout << endl;
    b1.printInfo();

    cout << endl;
    e1.printInfo();

    cout << endl;
    p1.printInfo();

    b1.printInfo();
    b2.printInfo();

    r1.printInfo();
    r2.printInfo();

    l1.printInfo();
    l2.printInfo();

    ptr->printInfo(); // 5 лаба

    Printable* p;

    p = &eb;
    p->printData();

    p = &pb;

    p->printData(); // 5 лаба

    return 0;
}