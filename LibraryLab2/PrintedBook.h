#pragma once
#include "Book.h"
#include <string>

using namespace std;

class PrintedBook : public Book {
private:
    int pages;

public:
    PrintedBook(string title, string author, int year, int pages);

    ~PrintedBook();

    void printInfo();
};