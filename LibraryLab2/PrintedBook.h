#pragma once
#include "Book.h"
#include "Printable.h"
#include <string>

using namespace std;

class PrintedBook : public Book, public Printable {
private:
    int pages;

public:
    PrintedBook(string title, string author, int year, int pages);

    ~PrintedBook();

    void printInfo() const override;
    void getType() const override;
    void printData() const override;// до 5 лаби
};