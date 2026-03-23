#pragma once
#include "Book.h"
#include "Printable.h"
#include <string>

using namespace std;

class EBook : public Book, public Printable {
private:
    double fileSize;

public:
    EBook(string title, string author, int year, double fileSize);

    EBook(const EBook& other);   // copy
    EBook(EBook&& other);        // move
    EBook& operator=(const EBook& other); // operator=

    ~EBook();

    void printInfo() const override;
    void getType() const override;
    void printData() const override;// до 5 лаби
};