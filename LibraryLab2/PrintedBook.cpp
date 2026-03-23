#include "PrintedBook.h"
#include <iostream>
using namespace std;

PrintedBook::PrintedBook(string title, string author, int year, int pages)
        : Book(title, author, year)
{
    this->pages = pages;
}
PrintedBook::~PrintedBook() {
    cout << "PrintedBook destructor" << endl;
}

void PrintedBook::getType() const { // 5 лаба
    cout << "This is PrintedBook" << endl;
}

void PrintedBook::printInfo() const {
    cout << "Printed book:" << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
    cout << "Pages: " << pages << endl;
}
void PrintedBook::printData() const {
    cout << "Printable PrintedBook" << endl;
}