#include "Item.h"
#include <iostream>
using namespace std;

Item::Item(string title) {
    this->title = title;
}
Item::~Item() {
    cout << "Item destructor" << endl;
}


string Item::getTitle() const {
    return title;
}