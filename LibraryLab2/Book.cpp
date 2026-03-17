#include "Book.h"
#include <iostream>
using namespace std;

int Book::bookCount = 0;

Book::Book() : Item("Unknown"), author("Unknown"), year(0) {
    bookCount++;
}

Book::Book(string title, string author, int year)
        : Item(title)
{
    this->author = author;
    this->year = year;
    bookCount++;
}

Book::Book(const Book& other)
    : Item(other.title), author(other.author), year(other.year) {
    bookCount++;
}

Book::Book(Book&& other)
    : Item(move(other.title)), author(move(other.author)), year(other.year) {
    other.year = 0;
}

Book::~Book() {
    cout << "Book destructor" << endl;
}

void Book::setTitle(string title) {
    this->title = title;
}

void Book::printInfo() const {
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
}

int Book::getBookCount() {
    return bookCount;
}

Book Book::operator+(const Book& other) {
    return Book(title + " & " + other.title, author, year);
}

Book Book::operator-() {
    return Book("Removed: " + title, author, year);
}

ostream& operator<<(ostream& os, const Book& book) {
    os << book.title << " " << book.author << " " << book.year;
    return os;
}

istream& operator>>(istream& is, Book& book) {
    is >> book.title >> book.author >> book.year;
    return is;
}
