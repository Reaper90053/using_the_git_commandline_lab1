#include <iostream>
#include <fstream>
#include "Book.h"
#include "EBook.h"
#include "Reader.h"
#include "Library.h"
#include "PrintedBook.h"

using namespace std;

void logAction(string action) {
    ofstream file("log.txt", ios::app);
    file << action << endl;
}

void show(Book& b) {
    b.printInfo();
}

void menu() {
    cout << "1. Login as Admin\n";
    cout << "2. User mode\n";
    cout << "0. Exit\n";//6 лаба
}

bool adminLogin() {
    string pass;
    cout << "Enter password: ";
    cin >> pass;

    return pass == "1234";
}//6 лаба

void adminMenu(Library& lib) {
    int choice;

     do {
        cout << "1. Add Book\n";
        cout << "2. Show Books\n";
        cout << "0. Exit\n";
        cin >> choice;

        if (choice == 1) {
            string title, author;
            int year;

            cout << "Title: ";
            cin >> title;
            cout << "Author: ";
            cin >> author;

            try {
                cout << "Year: ";
                cin >> year;

                if (year < 0) throw runtime_error("Invalid year");

            } catch (exception& e) {
                cout << e.what() << endl;
                continue;
            }

            lib.addBook(make_shared<Book>(title, author, year));
            logAction("Admin added book: " + title);
        }

        if (choice == 2) {
            lib.showBooks();
        }

    } while (choice != 0);
}// 6 лаба

void userMenu(Library& lib) {
    cout << "Available books:\n";
    lib.showBooks();//6 лаба
}

int main() { //6 лаба
    Library lib;

    lib.loadFromFile();

    int choice;

    do {
        menu();
        cin >> choice;

        if (choice == 1) {
            if (adminLogin()) {
                adminMenu(lib);
                lib.saveToFile();
            } else {
                cout << "Wrong password\n";
            }
        }

        if (choice == 2) {
            userMenu(lib);
        }

    } while (choice != 0);

    return 0;
}//6 лаба

int main1() {
    Book b("Kobzar","Shevchenko",1840);
    EBook eb("C++ Primer","Lippman",2012,5.4);

    Book* ptr1 = &eb;
    ptr1->printInfo(); // 5 лаба  тепер virtual → EBook

    EBook e1("C++ Primer", "Lippman", 2012, 5.4);

    PrintedBook p1("The Hobbit", "Tolkien", 1937, 310);
    show(e1);
    show(p1); // 5 лаба

    Book b1("Kobzar","Shevchenko",1840);

    Book* ptr;

    ptr = &e1;
    ptr->printInfo();

    PrintedBook pb("Hobbit","Tolkien",1937,310);
    ptr = &pb;
    ptr->printInfo(); // 5 лаба (Book* ptr)

    // copy constructor
    Book b2 = b1;

    // move constructor
    Book b3 = move(b1);

    // this
    b2.setTitle("NewBook");

    // const object
    const Book b4("ConstBook","Author",2000);
    b4.printInfo();

    // static
    cout << "Books created: " << Book::getBookCount() << endl;

    // оператор +
    Book b5 = b2 + b3;
    b5.printInfo();

    // унарний оператор
    Book b6 = -b5;
    b6.printInfo();

    // <<
    cout << b6 << endl;

    Reader r1;
    Reader r2("Ivan Petrenko ", 123);

    Library l1;
    Library l2("Central Library", "Chernivtsi city");

    cout << endl;
    b1.printInfo();

    cout << endl;
    e1.printInfo();

    cout << endl;
    p1.printInfo();

    b1.printInfo();
    b2.printInfo();

    r1.printInfo();
    r2.printInfo();

    l1.printInfo();
    l2.printInfo();

    ptr->printInfo(); // 5 лаба

    Printable* p;

    p = &eb;
    p->printData();

    p = &pb;

    p->printData(); // 5 лаба

    return 0;
}