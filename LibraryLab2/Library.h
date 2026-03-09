#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
using namespace std;

class Library {
private:
    string libraryName;
    string address;

public:
    Library();
    Library(string name, string addr = "Unknown address");
    ~Library();

    static int getLibraryCount();

    void printInfo() const;
};

#endif
