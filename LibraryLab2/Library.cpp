#include "Library.h"
#include <iostream>

Library::Library() : Library("Untitled", "Unknown address") {}

Library::Library(string name, string address)
    : name(name), address(address) {}

void Library::addBook(const Book& book) {
    books.push_back(book);
}

void Library::showBooks() const {
    for (const auto& b : books) {
        b.printInfo();
    }
}


Library::~Library() {
    cout << "Object Library destroyed\n";
}

void Library::printInfo() const {
    cout << "Library: " << name
         << "\nAddress: " << address << "\n\n";
}
