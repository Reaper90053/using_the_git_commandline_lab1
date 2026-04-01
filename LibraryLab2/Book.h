#ifndef BOOK_H
#define BOOK_H

#pragma once

#include <string>
#include "Item.h"
#include <iostream>

using namespace std;

class Book : public Item {

protected:
    string author;
    int year;

    static int bookCount;

public:

    Book();
    Book(string title, string author, int year);


    Book(const Book& other); // Copy constructor
    Book(Book&& other);      // Move constructor
    Book& operator=(const Book& other);


    virtual void printInfo() const;  // до 5 лаби
    virtual ~Book();
    virtual void getType() const; // 5 лаба

    string getTitle() const;
    string getAuthor() const;
    int getYear() const;// 6 лаба

    void setTitle(string title);

    static int getBookCount();

    // ���������
    Book operator+(const Book& other);
    Book operator-();

    // ����� ���������
    friend ostream& operator<<(ostream& os, const Book& book);
    friend istream& operator>>(istream& is, Book& book);

};

#endif
