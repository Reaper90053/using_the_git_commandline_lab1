#include <iostream>
#include <windows.h>
#include "Book.h"
#include "Reader.h"
#include "Library.h"

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
Book b1("Kobzar","Shevchenko",1840);

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

    b1.printInfo();
    b2.printInfo();

    r1.printInfo();
    r2.printInfo();

    l1.printInfo();
    l2.printInfo();

    return 0;
}
