#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    int year;

public:
    Book(); // конструктор
    Book(string t, string a, int y = 0); // перевантажений з параметром за замовчуванням
    ~Book(); // деструктор

    void printInfo() const;
};

#endif
