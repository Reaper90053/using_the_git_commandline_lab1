#include "EBook.h"
#include <iostream>
using namespace std;

EBook::EBook(string title, string author, int year, double fileSize)
        : Book(title, author, year)
{
    this->fileSize = fileSize;
}

EBook::EBook(const EBook& other)
    : Book(other.title, other.author, other.year)
{
    this->fileSize = other.fileSize;
}

EBook::EBook(EBook&& other)
    : Book(move(other.title), move(other.author), other.year)
{
    this->fileSize = other.fileSize;
}


EBook& EBook::operator=(const EBook& other) {
    if (this != &other) {
        this->title = other.title;
        this->author = other.author;
        this->year = other.year;
        this->fileSize = other.fileSize;
    }
    return *this;
}
EBook::~EBook() {
    cout << "EBook destructor" << endl;
}

void EBook::printInfo() {
    cout << "EBook:" << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Year: " << year << endl;
    cout << "File size: " << fileSize << " MB" << endl;
}