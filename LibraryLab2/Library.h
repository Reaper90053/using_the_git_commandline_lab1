#ifndef LIBRARY_H
#define LIBRARY_H

#pragma once
#include <iostream>
#include <vector>
#include "Book.h"
using namespace std;

class Library {
private:
    string name;
    string address;
    vector<Book> books;

public:
    Library();
    Library(string name, string addr = "Unknown address");
    ~Library();

    void addBook(const Book& book);
    void showBooks() const;

    static int getLibraryCount();

    void printInfo() const;
};

#endif
