#ifndef READER_H
#define READER_H

#include <string>
using namespace std;

class Reader {
private:
    string name;
    int readerID;

public:
    Reader();                          // конструктор
    Reader(string n, int id = 0);      // перевантажений
    ~Reader();                         // деструктор

    void printInfo() const;
};

#endif
