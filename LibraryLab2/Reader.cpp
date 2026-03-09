#include "Reader.h"
#include <iostream>

Reader::Reader() : Reader("Unknown", 0) {}

Reader::Reader(string n, int id)
    : name(n), readerID(id) {}

Reader::~Reader() {
    cout << "Object Reader destroyed\n";
}

void Reader::printInfo() const {
    cout << "Name: " << name
         << "\nID: " << readerID << "\n\n";
}
