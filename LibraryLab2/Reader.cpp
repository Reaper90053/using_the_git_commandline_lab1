#include "Reader.h"
#include <iostream>

Reader::Reader() : Reader("Невідомий", 0) {}

Reader::Reader(string n, int id)
    : name(n), readerID(id) {}

Reader::~Reader() {
    cout << "Об'єкт Reader знищено\n";
}

void Reader::printInfo() const {
    cout << "Ім'я: " << name
         << "\nID: " << readerID << "\n\n";
}
