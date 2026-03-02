#include <iostream>
#include <windows.h>
#include "Book.h"
#include "Reader.h"
#include "Library.h"

using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    Book b1;
    Book b2("Кобзар", "Тарас Шевченко", 1840);

    Reader r1;
    Reader r2("Іван Петренко", 123);

    Library l1;
    Library l2("Центральна бібліотека", "м. Чернівці");

    b1.printInfo();
    b2.printInfo();

    r1.printInfo();
    r2.printInfo();

    l1.printInfo();
    l2.printInfo();

    return 0;
}
