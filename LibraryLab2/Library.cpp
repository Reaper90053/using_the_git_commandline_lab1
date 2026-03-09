#include "Library.h"
#include <iostream>

Library::Library() : Library("Untitled", "Unknown address") {}

Library::Library(string name, string addr)
    : libraryName(name), address(addr) {}

Library::~Library() {
    cout << "Object Library destroyed\n";
}

void Library::printInfo() const {
    cout << "Library: " << libraryName
         << "\nAddress: " << address << "\n\n";
}
