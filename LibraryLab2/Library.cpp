#include "Library.h"
#include <iostream>
#include <fstream>

Library::Library() : Library("Untitled", "Unknown address") {}

Library::Library(string name, string address)
    : name(name), address(address) {}

void Library::addBook(shared_ptr<Book> book) {
    books.push_back(book);//6 лаба
}

void Library::showBooks() const {
    for (const auto& b : books) {
        b->printInfo();//6 лаба стрілка
    }
}
void Library::saveToFile() {
    ofstream file("books.txt");

    for (const auto& b : books) {
        file << b->getTitle() << " "
             << b->getAuthor() << " "
             << b->getYear() << endl;
    }

    file.close();
}// 6 лаба

void Library::loadFromFile() {
    ifstream file("books.txt");

    string title, author;
    int year;

    while (file >> title >> author >> year) {
        books.push_back(make_shared<Book>(title, author, year));
    }

    file.close();
}// 6 лаба

Library::~Library() {
    cout << "Object Library destroyed\n";
}

void Library::printInfo() const {
    cout << "Library: " << name
         << "\nAddress: " << address << "\n\n";
}
