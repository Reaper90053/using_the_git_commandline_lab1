#ifndef LIBRARY_H
#define LIBRARY_H

#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include "Book.h"
using namespace std;

class Library {
private:
    string name;
    string address;
    vector<shared_ptr<Book>> books;//6 лаба це і є смарт поінтери

public:
    Library();
    Library(string name, string addr = "Unknown address");
    ~Library();

    void addBook(shared_ptr<Book> book);//6 лаба
    void showBooks() const;

    static int getLibraryCount();

    void printInfo() const;

    void saveToFile();
    void loadFromFile();//6 лаба
};

#endif
