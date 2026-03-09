#ifndef BOOK_H
#define BOOK_H

#include <string>
#include <iostream>

using namespace std;

class Book {

private:
    string title;
    string author;
    int year;

    static int bookCount;

public:

    Book();
    Book(string title, string author, int year);

    Book(const Book& other); // Copy constructor
    Book(Book&& other);      // Move constructor

    ~Book();

    void printInfo() const;

    void setTitle(string title);

    static int getBookCount();

    // оператори
    Book operator+(const Book& other);
    Book operator-();

    // дружні оператори
    friend ostream& operator<<(ostream& os, const Book& book);
    friend istream& operator>>(istream& is, Book& book);
};

#endif
