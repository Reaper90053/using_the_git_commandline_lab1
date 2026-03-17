#pragma once
#include <string>

using namespace std;

class Item {
protected:
    string title;

public:
    Item(string title);
    virtual ~Item();

    string getTitle() const;
};