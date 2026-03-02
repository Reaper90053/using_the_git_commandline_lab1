#include "Book.h"
#include <iostream>

Book::Book() : Book("Невідома", "Невідомий", 0) {} // делегування

Book::Book(string t, string a, int y)
    : title(t), author(a), year(y) {} // список ініціалізації

Book::~Book() {
    cout << "Об'єкт Book знищено\n";
}

void Book::printInfo() const {
    cout << "Назва: " << title << "\nАвтор: " << author
         << "\nРік: " << year << "\n\n";
}
