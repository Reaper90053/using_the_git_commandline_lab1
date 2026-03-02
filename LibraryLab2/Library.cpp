#include "Library.h"
#include <iostream>

Library::Library() : Library("Без назви", "Невідома адреса") {}

Library::Library(string name, string addr)
    : libraryName(name), address(addr) {}

Library::~Library() {
    cout << "Об'єкт Library знищено\n";
}

void Library::printInfo() const {
    cout << "Бібліотека: " << libraryName
         << "\nАдреса: " << address << "\n\n";
}
